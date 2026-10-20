#include "res/image.h"

#include <cctype>
#include <algorithm>
#include <cstring>

static uint16_t rd16(const uint8_t *p)
{
	return (uint16_t)(p[0] | p[1] << 8);
}

static uint32_t rd32(const uint8_t *p)
{
	return (uint32_t)(p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24);
}

/* A TGA colour (BGR order, 15/16/24/32 bits) as RGBA. */
static uint32_t tga_colour(const uint8_t *b, int bits)
{
	if (bits == 15 || bits == 16) {
		unsigned v = rd16(b);
		return rgba((uint8_t)((v >> 10 & 31) * 255 / 31), (uint8_t)((v >> 5 & 31) * 255 / 31),
			(uint8_t)((v & 31) * 255 / 31), bits == 15 || (v & 0x8000) ? 255 : 0);
	}
	return rgba(b[2], b[1], b[0], bits == 32 ? b[3] : 255);
}

bool decode_tga(const std::vector<uint8_t> &d, Image &out)
{
	if (d.size() < 18)
		return false;
	int idlen = d[0], cmtype = d[1], type = d[2];
	int cmfirst = rd16(&d[3]), cmlen = rd16(&d[5]), cmbits = d[7];
	int w = rd16(&d[12]), h = rd16(&d[14]), bpp = d[16], desc = d[17];
	int base = type & ~8;
	if (base != 1 && base != 2 && base != 3)
		return false;
	size_t p = 18 + (size_t)idlen;
	std::vector<uint32_t> cmap;
	if (cmtype) {
		int cb = (cmbits + 7) / 8;
		if (p + (size_t)cmlen * cb > d.size())
			return false;
		cmap.assign((size_t)cmfirst, 0);
		for (int i = 0; i < cmlen; i++)
			cmap.push_back(tga_colour(&d[p + (size_t)i * cb], cmbits));
		p += (size_t)cmlen * cb;
	}
	int pb = (bpp + 7) / 8;
	size_t count = (size_t)w * h;
	std::vector<uint8_t> raw;
	raw.reserve(count * pb);
	if (type & 8) {
		/* RLE: a count byte, then one pixel repeated (high bit) or that many pixels. */
		while (raw.size() < count * pb && p < d.size()) {
			int c = d[p++];
			size_t n = (size_t)(c & 0x7f) + 1;
			if (c & 0x80) {
				if (p + pb > d.size())
					return false;
				for (size_t k = 0; k < n; k++)
					raw.insert(raw.end(), d.begin() + p, d.begin() + p + pb);
				p += pb;
			}
			else {
				if (p + n * pb > d.size())
					return false;
				raw.insert(raw.end(), d.begin() + p, d.begin() + p + n * pb);
				p += n * pb;
			}
		}
	}
	else {
		if (p + count * pb > d.size())
			return false;
		raw.assign(d.begin() + p, d.begin() + p + count * pb);
	}
	if (raw.size() < count * pb)
		return false;
	out.width = w;
	out.height = h;
	out.pixels.assign(count, 0);
	bool top_down = desc & 0x20, right_left = desc & 0x10;
	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			const uint8_t *px = &raw[((size_t)y * w + x) * pb];
			uint32_t c;
			if (base == 1) {
				size_t i = pb == 1 ? px[0] : rd16(px);
				c = i < cmap.size() ? cmap[i] : 0;
			}
			else if (base == 3) {
				c = rgba(px[0], px[0], px[0]);
			}
			else {
				c = tga_colour(px, bpp);
			}
			int ox = right_left ? w - 1 - x : x, oy = top_down ? y : h - 1 - y;
			out.pixels[(size_t)oy * w + ox] = c;
		}
	}
	return true;
}

bool decode_bmp(const std::vector<uint8_t> &d, Image &out)
{
	if (d.size() < 54 || d[0] != 'B' || d[1] != 'M')
		return false;
	uint32_t off = rd32(&d[10]), hsize = rd32(&d[14]);
	int w = (int)rd32(&d[18]), h = (int)rd32(&d[22]);
	int bpp = rd16(&d[28]);
	uint32_t comp = rd32(&d[30]);
	if ((comp != 0 && comp != 3) || (bpp != 8 && bpp != 24 && bpp != 32) || w <= 0 || h == 0)
		return false;
	bool bottom_up = h > 0;
	h = std::abs(h);
	std::vector<uint32_t> pal;
	if (bpp == 8) {
		uint32_t n = rd32(&d[46]);
		if (!n)
			n = 256;
		size_t po = 14 + hsize;
		for (uint32_t i = 0; i < n && po + 4 * i + 3 < d.size(); i++)
			pal.push_back(rgba(d[po + 4 * i + 2], d[po + 4 * i + 1], d[po + 4 * i]));
		pal.resize(256, 0);
	}
	size_t stride = ((size_t)w * bpp / 8 + 3) & ~(size_t)3;
	if (off + stride * h > d.size())
		return false;
	out.width = w;
	out.height = h;
	out.pixels.assign((size_t)w * h, 0);
	for (int y = 0; y < h; y++) {
		const uint8_t *r = &d[off + stride * (bottom_up ? h - 1 - y : y)];
		uint32_t *o = &out.pixels[(size_t)y * w];
		for (int x = 0; x < w; x++) {
			if (bpp == 8)
				o[x] = pal[r[x]];
			else
				o[x] = rgba(r[x * (bpp / 8) + 2], r[x * (bpp / 8) + 1], r[x * (bpp / 8)]);
		}
	}
	return true;
}

bool decode_pcx(const std::vector<uint8_t> &d, Image &out)
{
	if (d.size() < 128 + 769 || d[0] != 10 || d[3] != 8 || d[65] != 1)
		return false;
	int w = rd16(&d[8]) - rd16(&d[4]) + 1, h = rd16(&d[10]) - rd16(&d[6]) + 1;
	int bpl = rd16(&d[66]);
	bool rle = d[2] == 1;
	std::vector<uint8_t> rows;
	rows.reserve((size_t)bpl * h);
	for (size_t i = 128; rows.size() < (size_t)bpl * h && i < d.size();) {
		uint8_t b = d[i++];
		if (rle && b >= 0xC0 && i < d.size()) {
			rows.insert(rows.end(), b & 0x3F, d[i++]);
		}
		else {
			rows.push_back(b);
		}
	}
	rows.resize((size_t)bpl * h, 0);
	out.width = w;
	out.height = h;
	out.palette.assign(768, 0);
	if (d[d.size() - 769] == 12)
		std::memcpy(out.palette.data(), &d[d.size() - 768], 768);
	out.indices.assign((size_t)w * h, 0);
	out.pixels.assign((size_t)w * h, 0);
	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			uint8_t i = rows[(size_t)y * bpl + x];
			const uint8_t *c = &out.palette[i * 3];
			out.indices[(size_t)y * w + x] = i;
			out.pixels[(size_t)y * w + x] = rgba(c[0], c[1], c[2]);
		}
	}
	return true;
}

bool decode_image(const char *name, const std::vector<uint8_t> &data, Image &out)
{
	size_t n = strlen(name);
	auto ext = [&](const char *e) {
		size_t m = strlen(e);
		if (n < m)
			return false;
		for (size_t i = 0; i < m; i++) {
			if (tolower((unsigned char)name[n - m + i]) != e[i])
				return false;
		}
		return true;
	};
	if (ext(".tga"))
		return decode_tga(data, out);
	if (ext(".bmp"))
		return decode_bmp(data, out);
	if (ext(".pcx"))
		return decode_pcx(data, out);
	return false;
}
