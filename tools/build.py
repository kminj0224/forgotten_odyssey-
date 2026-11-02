"""Rebuild the editable APK project, align and debug-sign. Never release-sign."""
from pathlib import Path
import os
import shutil
import subprocess
from bootstrap import bootstrap, ROOT
from align_zip import align, verify

def main():
    tools = bootstrap()
    dist = ROOT / 'dist'; dist.mkdir(exist_ok=True)
    temp = ROOT / '.tmp'; temp.mkdir(exist_ok=True)
    java_home = os.environ.get('JAVA_HOME')
    java = str(Path(java_home) / 'bin' / ('java.exe' if os.name == 'nt' else 'java')) if java_home else shutil.which('java')
    if not java:
        raise SystemExit('Install Java 17+ or set JAVA_HOME.')
    def run(*args):
        subprocess.run([java, '-Djava.io.tmpdir=' + str(temp), *map(str,args)], cwd=ROOT, check=True)
    unsigned = dist / 'forgotten-odyssey-unsigned.apk'
    aligned = dist / 'forgotten-odyssey-aligned.apk'
    run('-jar', tools / 'apktool.jar', 'b', ROOT / 'apk', '-o', unsigned)
    align(unsigned, aligned)
    signed_dir = dist / 'signed'; signed_dir.mkdir(exist_ok=True)
    expected = signed_dir / (aligned.stem + '-debugSigned.apk')
    if expected.exists(): expected.unlink()
    run('-jar', tools / 'signer.jar', '--apks', aligned, '--out', signed_dir, '--skipZipAlign')
    signed = signed_dir / (aligned.stem + '-debugSigned.apk')
    if not signed.is_file():
        raise SystemExit('Signing did not produce the expected APK')
    verify(signed)
    print('Signed APK:', signed)

if __name__ == '__main__':
    main()
