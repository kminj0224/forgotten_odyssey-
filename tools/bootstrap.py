"""Download pinned tools; Python 3 and Java 17+ are required."""
from pathlib import Path
from urllib.request import urlopen
import hashlib

ROOT = Path(__file__).resolve().parents[1]
TOOLS = [
 ('apktool.jar', 'https://github.com/iBotPeaches/Apktool/releases/download/v3.0.3/apktool_3.0.3.jar', 'dbf930b076c6b9be08d57c449cacefc3bdd6b71ebd59b3066fc0e1f5b14f9423'),
 ('signer.jar', 'https://github.com/patrickfav/uber-apk-signer/releases/download/v1.3.0/uber-apk-signer-1.3.0.jar', 'e1299fd6fcf4da527dd53735b56127e8ea922a321128123b9c32d619bba1d835'),
]
def bootstrap():
    dest = ROOT / '.tools'; dest.mkdir(exist_ok=True)
    for name, url, expected in TOOLS:
        path = dest / name
        if not path.exists():
            print('Downloading', name, flush=True)
            with urlopen(url, timeout=120) as response:
                data = response.read()
            if hashlib.sha256(data).hexdigest() != expected:
                raise ValueError('Download checksum mismatch: ' + name)
            path.write_bytes(data)
        if hashlib.sha256(path.read_bytes()).hexdigest() != expected:
            raise ValueError('Tool checksum mismatch: ' + name)
    return dest
if __name__ == '__main__':
    bootstrap()
