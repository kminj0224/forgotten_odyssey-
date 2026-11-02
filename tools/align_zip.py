"""Align uncompressed ZIP members without requiring a native zipalign binary."""
import struct
import sys
import zipfile


def verify(path):
    with open(path, 'rb') as raw, zipfile.ZipFile(path) as z:
        for info in z.infolist():
            if info.compress_type != zipfile.ZIP_STORED:
                continue
            raw.seek(info.header_offset + 26)
            name_len, extra_len = struct.unpack('<HH', raw.read(4))
            offset = info.header_offset + 30 + name_len + extra_len
            alignment = 4096 if info.filename.endswith('.so') else 4
            if offset % alignment:
                raise ValueError(f'Unaligned member: {info.filename} at {offset}')


def align(source, target):
    with zipfile.ZipFile(source) as src, zipfile.ZipFile(target, 'w') as dst:
        for info in src.infolist():
            info.extra = b''
            if info.compress_type == zipfile.ZIP_STORED:
                name = info.filename.encode('ascii' if info.filename.isascii() else 'utf-8')
                alignment = 4096 if info.filename.endswith('.so') else 4
                offset = dst.fp.tell() + 30 + len(name)
                if offset % alignment:
                    padding = (-(offset + 4)) % alignment
                    info.extra = struct.pack('<HH', 0xd935, padding) + bytes(padding)
            dst.writestr(info, src.read(info.filename))
    verify(target)

if __name__ == '__main__':
    if sys.argv[1] == '--verify':
        verify(sys.argv[2])
    else:
        align(*sys.argv[1:])
