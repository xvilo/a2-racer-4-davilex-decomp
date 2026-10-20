/* The game's picture formats, decoded to 32-bit RGBA: TGA (the menu's buttons and the
 * race's textures), BMP (the menu's screens) and 8-bit PCX (the race's textures and
 * palettes). */
#pragma once

#include <cstdint>
#include <cstring>
#include <vector>

struct Image {
	int width = 0, height = 0;
	std::vector<uint32_t> pixels; /* top-down rows, bytes R, G, B, A in memory */
	/* For an 8-bit PCX: the palette indices and the 256-colour palette (RGB). */
	std::vector<uint8_t> indices;
	std::vector<uint8_t> palette;
};

/* RGBA bytes in memory order as one 32-bit value. */
inline uint32_t rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255)
{
	const uint8_t px[4] = { r, g, b, a };
	uint32_t v;
	std::memcpy(&v, px, 4);
	return v;
}

bool decode_tga(const std::vector<uint8_t> &data, Image &out);
bool decode_bmp(const std::vector<uint8_t> &data, Image &out);
bool decode_pcx(const std::vector<uint8_t> &data, Image &out);
/* By the file name's extension (.tga, .bmp, .pcx). */
bool decode_image(const char *name, const std::vector<uint8_t> &data, Image &out);
