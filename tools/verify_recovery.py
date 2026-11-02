"""Verify that assets/libraries are byte-identical to the source APK."""
from pathlib import Path
import argparse
import hashlib
import json
import zipfile
ROOT=Path(__file__).resolve().parents[1]
def main():
    p=argparse.ArgumentParser(); p.add_argument('--apk',type=Path); args=p.parse_args()
    inventory=json.loads((ROOT/'reports/inventory.json').read_text())
    archive=zipfile.ZipFile(args.apk) if args.apk else None
    try:
        for item in inventory['files']:
            n=item['path']
            content=archive.read(n) if archive else (ROOT/'apk'/n).read_bytes()
            if hashlib.sha256(content).hexdigest()!=item['sha256']:
                raise SystemExit('Mismatch: '+n)
        print('Verified:',len(inventory['files']),'original assets and native libraries')
    finally:
        if archive: archive.close()
if __name__=='__main__': main()
