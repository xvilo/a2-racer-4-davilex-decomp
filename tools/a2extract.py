#!/usr/bin/env python3
"""Unpack A2 Racer 4's resource archives and convert their images to PNG.

Usage: a2extract.py <disc-dir> <out-dir> [--palette FILE.PCX] [--no-images]

Archives come in pairs, <name>.IND (index) and <name>.IMG (data):

  named   (Data/rcs, Data/MenuData/MenuRcs)
                          IND: u16 count, then count x 24-byte entries
                               { char name[16]; u32 unused; u32 offset into IMG }
                          An entry runs to the next entry's offset (or the end).
                          "*empty resitem*" entries are placeholders.
  sprites (Data/RC)       IND: u16 count, then count x u32 offset into IMG
                          IMG: u16 count, then per sprite
                               { u16 width, height, center_x, center_y; u8 pixels[w*h] }
                          Pixels are 8-bit palette indices; the palette comes from a
                          PCX picture (--palette, default e00_pal.pcx from rcs).
  <name>.CHK              u16 version (2), u32 count, then count x FILETIME: the time
                          stamp of each archived file.

Named archives are written out as files (D3D, WAV, PCX, TGA, BMP, FNT); every PCX, TGA
and BMP also gets a PNG next to it, <name>.png (--no-images skips that). The output is for inspection and must
not be committed: it is the game's copyrighted data.
"""
import os
import struct
import sys
import zlib

NAMED = ('Data/rcs', 'Data/MenuData/MenuRcs')
SPRITES = {'Data/RC': ('Data/rcs', 'e00_pal.pcx')}
EMPTY = '*empty resitem*'


def find_ci(disc, rel):
    """The path of rel under disc, matching names without regard to case."""
    path = disc
    for part in rel.split('/'):
        names = {n.lower(): n for n in os.listdir(path)}
        if part.lower() not in names:
            raise FileNotFoundError(os.path.join(path, part))
        path = os.path.join(path, names[part.lower()])
    return path


def read_named(disc, name):
    ind = open(find_ci(disc, name + '.IND'), 'rb').read()
    img = open(find_ci(disc, name + '.IMG'), 'rb').read()
    n = struct.unpack_from('<H', ind)[0]
    entries = []
    for i in range(n):
        o = 2 + 24 * i
        fname = ind[o:o + 16].split(b'\0')[0].decode('latin1')
        off = struct.unpack_from('<I', ind, o + 20)[0]
        entries.append((fname, off))
    files = {}
    ends = sorted({off for _, off in entries} | {len(img)})
    for fname, off in entries:
        if fname == EMPTY:
            continue
        end = next(e for e in ends if e > off)
        files[fname] = img[off:end]
    return files


def read_sprites(disc, name):
    ind = open(find_ci(disc, name + '.IND'), 'rb').read()
    img = open(find_ci(disc, name + '.IMG'), 'rb').read()
    n = struct.unpack_from('<H', ind)[0]
    sprites = []
    for i in range(n):
        off = struct.unpack_from('<I', ind, 2 + 4 * i)[0]
        w, h, cx, cy = struct.unpack_from('<4H', img, off)
        sprites.append((w, h, cx, cy, img[off + 8:off + 8 + w * h]))
    return sprites


def decode_pcx(data):
    """8-bit RLE PCX with a 256-colour palette at the end -> (w, h, pixels, palette)."""
    (manuf, version, enc, bpp, x0, y0, x1, y1) = struct.unpack_from('<4B4H', data)
    planes = data[65]
    bpl = struct.unpack_from('<H', data, 66)[0]
    if manuf != 10 or bpp != 8 or planes != 1:
        raise ValueError('unsupported PCX (manuf %d, bpp %d, planes %d)' % (manuf, bpp, planes))
    w, h = x1 - x0 + 1, y1 - y0 + 1
    out = bytearray()
    i = 128
    need = bpl * h
    while len(out) < need and i < len(data):
        b = data[i]
        i += 1
        if enc == 1 and b >= 0xC0:
            out += bytes([data[i]]) * (b & 0x3F)
            i += 1
        else:
            out.append(b)
    pixels = b''.join(out[y * bpl:y * bpl + w] for y in range(h))
    palette = data[-768:] if data[-769] == 12 else bytes(range(256)) * 3
    return w, h, pixels, palette


def decode_tga(data):
    """TGA (colour-mapped, true-colour or grey, plain or RLE) -> (w, h, RGBA rows top-down)."""
    idlen, cmtype, itype = data[0], data[1], data[2]
    cmfirst, cmlen, cmbits = struct.unpack_from('<HHB', data, 3)
    w, h, bpp, desc = struct.unpack_from('<HHBB', data, 12)
    p = 18 + idlen
    cmap = []
    if cmtype:
        cb = (cmbits + 7) // 8
        for i in range(cmlen):
            cmap.append(pixel(data[p + i * cb:p + (i + 1) * cb], cmbits))
        p += cmlen * cb
        cmap = [None] * cmfirst + cmap
    base = itype & ~8
    if base not in (1, 2, 3):
        raise ValueError('unsupported TGA type %d' % itype)
    pb = (bpp + 7) // 8
    count = w * h
    raw = bytearray()
    if itype & 8:
        while len(raw) < count * pb:
            c = data[p]
            p += 1
            n = (c & 0x7f) + 1
            if c & 0x80:
                raw += data[p:p + pb] * n
                p += pb
            else:
                raw += data[p:p + n * pb]
                p += n * pb
    else:
        raw = data[p:p + count * pb]
    out = bytearray()
    for i in range(count):
        px = raw[i * pb:(i + 1) * pb]
        if base == 1:
            out += bytes(cmap[px[0] if pb == 1 else struct.unpack('<H', px)[0]])
        elif base == 3:
            out += bytes([px[0]] * 3 + [255])
        else:
            out += bytes(pixel(px, bpp))
    rows = [out[y * w * 4:(y + 1) * w * 4] for y in range(h)]
    if not desc & 0x20:
        rows.reverse()
    if desc & 0x10:
        rows = [b''.join(r[x * 4:x * 4 + 4] for x in reversed(range(w))) for r in rows]
    return w, h, b''.join(rows)


def pixel(b, bits):
    """A TGA colour (BGR order) -> (r, g, b, a)."""
    if bits in (15, 16):
        v = struct.unpack('<H', b)[0]
        return ((v >> 10 & 31) * 255 // 31, (v >> 5 & 31) * 255 // 31, (v & 31) * 255 // 31,
                255 if bits == 15 or v & 0x8000 else 0)
    if bits == 24:
        return (b[2], b[1], b[0], 255)
    return (b[2], b[1], b[0], b[3])


def decode_bmp(data):
    """Uncompressed 8/24/32-bit BMP -> (w, h, RGBA rows top-down)."""
    if data[:2] != b'BM':
        raise ValueError('not a BMP')
    off = struct.unpack_from('<I', data, 10)[0]
    hsize, w, h, planes, bpp, comp = struct.unpack_from('<IiiHHI', data, 14)
    if comp not in (0, 3) or bpp not in (8, 24, 32):
        raise ValueError('unsupported BMP (%d bpp, compression %d)' % (bpp, comp))
    pal = []
    if bpp == 8:
        ncol = struct.unpack_from('<I', data, 46)[0] or 256
        po = 14 + hsize
        pal = [(data[po + 4 * i + 2], data[po + 4 * i + 1], data[po + 4 * i], 255) for i in range(ncol)]
    stride = (w * bpp // 8 + 3) & ~3
    rows = []
    for y in range(abs(h)):
        r = data[off + y * stride:off + y * stride + w * bpp // 8]
        if bpp == 8:
            rows.append(b''.join(bytes(pal[i]) for i in r))
        else:
            k = bpp // 8
            rows.append(b''.join(bytes((r[x * k + 2], r[x * k + 1], r[x * k], 255)) for x in range(w)))
    if h > 0:
        rows.reverse()
    return w, abs(h), b''.join(rows)


def chunk(tag, body):
    return struct.pack('>I', len(body)) + tag + body + struct.pack('>I', zlib.crc32(tag + body))


def write_png_indexed(path, w, h, pixels, palette):
    raw = b''.join(b'\0' + pixels[y * w:(y + 1) * w] for y in range(h))
    png = b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 3, 0, 0, 0))
    png += chunk(b'PLTE', bytes(palette[:768])) + chunk(b'IDAT', zlib.compress(raw, 9))
    png += chunk(b'IEND', b'')
    with open(path, 'wb') as f:
        f.write(png)


def write_png_rgba(path, w, h, rgba):
    raw = b''.join(b'\0' + rgba[y * w * 4:(y + 1) * w * 4] for y in range(h))
    png = b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 6, 0, 0, 0))
    png += chunk(b'IDAT', zlib.compress(raw, 6)) + chunk(b'IEND', b'')
    with open(path, 'wb') as f:
        f.write(png)


def to_png(path, fname, data):
    low = fname.lower()
    # x.pcx and x.tga both occur: the PNG keeps the original extension (x.tga.png).
    stem = os.path.join(path, fname)
    if low.endswith('.pcx'):
        w, h, px, pal = decode_pcx(data)
        write_png_indexed(stem + '.png', w, h, px, pal)
    elif low.endswith('.tga'):
        write_png_rgba(stem + '.png', *decode_tga(data))
    elif low.endswith('.bmp'):
        write_png_rgba(stem + '.png', *decode_bmp(data))


def main(disc, out, palette_file=None, images=True):
    named = {}
    for name in NAMED:
        files = read_named(disc, name)
        named[name] = files
        d = os.path.join(out, os.path.basename(name))
        os.makedirs(d, exist_ok=True)
        bad = 0
        for fname, data in files.items():
            with open(os.path.join(d, fname), 'wb') as f:
                f.write(data)
            if images:
                try:
                    to_png(d, fname, data)
                except (ValueError, IndexError, struct.error) as e:
                    bad += 1
                    print(f'{name}/{fname}: {e}')
        print(f'{name}: {len(files)} files -> {d}' + (f' ({bad} images not converted)' if bad else ''))
    for name, (arch, pcx) in SPRITES.items():
        if palette_file:
            pal = decode_pcx(open(palette_file, 'rb').read())[3]
        else:
            pal = decode_pcx(named[arch][pcx])[3]
        d = os.path.join(out, os.path.basename(name))
        os.makedirs(d, exist_ok=True)
        sprites = read_sprites(disc, name)
        with open(os.path.join(d, 'sprites.tsv'), 'w') as idx:
            idx.write('index\twidth\theight\tcenter_x\tcenter_y\n')
            for i, (w, h, cx, cy, px) in enumerate(sprites):
                idx.write(f'{i}\t{w}\t{h}\t{cx}\t{cy}\n')
                if w and h and images:
                    write_png_indexed(os.path.join(d, f'{i:03d}.png'), w, h, px, pal)
        print(f'{name}: {len(sprites)} sprites -> {d}')


if __name__ == '__main__':
    args = sys.argv[1:]
    pal = None
    if '--palette' in args:
        k = args.index('--palette')
        pal = args[k + 1]
        del args[k:k + 2]
    images = '--no-images' not in args
    args = [a for a in args if a != '--no-images']
    if len(args) != 2:
        sys.exit(__doc__)
    main(args[0], args[1], pal, images)
