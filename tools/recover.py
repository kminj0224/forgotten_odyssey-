"""Reproduce APK extraction and analysis from the pinned original release."""
from pathlib import Path
import hashlib
import json
import os
import subprocess
import zipfile
from urllib.request import urlopen
from bootstrap import bootstrap, ROOT

SOURCE='https://github.com/kminj0224/forgotten_odyssey-/releases/download/v4-logfix/Forgotten_Odyssey_logfix_v4.apk'
DIGEST='4b252471fb40745e2880d5af5301fc578d17ca891ea378f1ea4b5f78aba28c1a'

def download(url,path,digest):
    if not path.exists():
        with urlopen(url,timeout=180) as r: path.write_bytes(r.read())
    if hashlib.sha256(path.read_bytes()).hexdigest()!=digest:
        raise ValueError('Checksum mismatch: '+str(path))

def main():
    tools=bootstrap(); temp=ROOT/'.tmp'; temp.mkdir(exist_ok=True)
    original=temp/'original.apk'; download(SOURCE,original,DIGEST)
    # Do not overwrite a working tree containing edits.
    for folder in ['apk','recovered-java']:
        if (ROOT/folder).exists(): raise SystemExit(folder+' already exists; use a fresh checkout for recovery')
    java=Path(os.environ['JAVA_HOME'])/'bin/java' if os.environ.get('JAVA_HOME') else 'java'
    def run(*a): subprocess.run(list(map(str,a)),cwd=ROOT,check=True)
    run(java,'-Djava.io.tmpdir='+str(temp),'-jar',tools/'apktool.jar','d',original,'-o',ROOT/'apk')
    jadxzip=tools/'jadx.zip'
    download('https://github.com/skylot/jadx/releases/download/v1.5.6/jadx-1.5.6.zip',jadxzip,'545ea2be9c242511bc145755cf4bda2485ade42966e096f8b4d3da2a230e8974')
    jadx=tools/'jadx'
    with zipfile.ZipFile(jadxzip) as z: z.extractall(jadx)
    run(java,'-Djava.io.tmpdir='+str(temp),'-cp',str(jadx/'lib/*'),'jadx.cli.JadxCLI','--no-res','-d',ROOT/'recovered-java',original)
    reports=ROOT/'reports'; reports.mkdir(exist_ok=True)
    rows=[]
    with zipfile.ZipFile(original) as z:
        for n in z.namelist():
            if not n.endswith('/') and n.startswith(('assets/','lib/')):
                b=z.read(n); rows.append(dict(path=n,size=len(b),sha256=hashlib.sha256(b).hexdigest()))
    inv=dict(source_url=SOURCE,source_sha256=DIGEST,asset_count=sum(x['path'].startswith('assets/') for x in rows),java_file_count=len(list((ROOT/'recovered-java/sources').rglob('*.java'))),smali_file_count=len(list((ROOT/'apk/smali').rglob('*.smali'))),files=rows)
    (reports/'inventory.json').write_text(json.dumps(inv,ensure_ascii=False,indent=2)+'\n')
    for lib in (ROOT/'apk/lib/armeabi-v7a').glob('*.so'):
        for name,cmd in [('symbols',['readelf','--dyn-syms','--wide','--demangle',lib]),('elf',['readelf','-h','-d','-S',lib]),('strings',['strings','-a','-t','x',lib])]:
            (reports/f'{lib.name}.{name}.txt').write_bytes(subprocess.check_output(list(map(str,cmd))))
if __name__=='__main__': main()
