#include "gfx/png.h"

#include <cstdio>
#include <cstring>
#include <vector>

static uint32_t crc32_update(uint32_t crc, const uint8_t *p, size_t n)
{
	static uint32_t table[256];
	if (!table[1]) {
		for (uint32_t i = 0; i < 256; i++) {
			uint32_t c = i;
			for (int k = 0; k < 8; k++)
				c = c & 1 ? 0xEDB88320u ^ (c >> 1) : c >> 1;
			table[i] = c;
		}
	}
	crc = ~crc;
	while (n--)
		crc = table[(crc ^ *p++) & 0xFF] ^ (crc >> 8);
	return ~crc;
}

static void put32(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)(v >> 24);
	p[1] = (uint8_t)(v >> 16);
	p[2] = (uint8_t)(v >> 8);
	p[3] = (uint8_t)v;
}

static void chunk(FILE *f, const char *tag, const uint8_t *body, uint32_t n)
{
	uint8_t head[8];
	put32(head, n);
	memcpy(head + 4, tag, 4);
	fwrite(head, 1, 8, f);
	if (n)
		fwrite(body, 1, n, f);
	put32(head, crc32_update(crc32_update(0, (const uint8_t *)tag, 4), body, n));
	fwrite(head, 1, 4, f);
}

bool png_write_rgba(const char *path, const uint32_t *rgba, int w, int h)
{
	FILE *f = fopen(path, "wb");
	if (!f)
		return false;
	static const uint8_t sig[8] = { 0x89, 'P', 'N', 'G', '\r', '\n', 0x1A, '\n' };
	fwrite(sig, 1, 8, f);
	uint8_t ihdr[13] = {};
	put32(ihdr, (uint32_t)w);
	put32(ihdr + 4, (uint32_t)h);
	ihdr[8] = 8; /* bit depth */
	ihdr[9] = 6; /* RGBA */
	chunk(f, "IHDR", ihdr, sizeof ihdr);
	/* The rows, each with filter type 0, wrapped in a zlib stream of stored blocks. */
	std::vector<uint8_t> raw;
	size_t row = (size_t)w * 4;
	raw.reserve((row + 1) * h);
	for (int y = 0; y < h; y++) {
		raw.push_back(0);
		const uint8_t *p = (const uint8_t *)(rgba + (size_t)y * w);
		raw.insert(raw.end(), p, p + row);
	}
	std::vector<uint8_t> z = { 0x78, 0x01 };
	uint32_t a = 1, b = 0;
	for (uint8_t c : raw) {
		a = (a + c) % 65521;
		b = (b + a) % 65521;
	}
	for (size_t pos = 0; pos < raw.size() || raw.empty();) {
		size_t n = raw.size() - pos < 65535 ? raw.size() - pos : 65535;
		z.push_back(pos + n >= raw.size() ? 1 : 0);
		z.push_back((uint8_t)n);
		z.push_back((uint8_t)(n >> 8));
		z.push_back((uint8_t)~n);
		z.push_back((uint8_t)(~n >> 8));
		z.insert(z.end(), raw.begin() + pos, raw.begin() + pos + n);
		pos += n;
		if (raw.empty())
			break;
	}
	uint8_t adler[4];
	put32(adler, b << 16 | a);
	z.insert(z.end(), adler, adler + 4);
	chunk(f, "IDAT", z.data(), (uint32_t)z.size());
	chunk(f, "IEND", nullptr, 0);
	return fclose(f) == 0;
}
