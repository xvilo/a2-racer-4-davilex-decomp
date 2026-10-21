/* The race's bitmap fonts (.fnt in rcs, dxdraw ascii.cpp):
 *
 *   256 x { int16 width, height; int32 offset }   one per character; 0 x 0 if absent
 *   int16 x 4                                     (palette indices; 255 is transparent)
 *   at each offset: width x height 8-bit palette indices, row by row
 *
 * The colours come from palet.pcx. Each font becomes one OpenGL texture with every
 * character in it. */
#pragma once

#include <string>
#include <vector>

class NamedArchive;

class BitmapFont {
public:
	~BitmapFont();
	/* Loads name (e.g. "higeel.fnt") from rcs with the palette (768 bytes); false if missing. */
	bool load(const NamedArchive &rcs, const std::string &name, const std::vector<uint8_t> &palette);
	/* Draws text (Windows-1252) with its top left at (x, y), in the current 2D projection;
	 * scale 1 is the font's own size. */
	void draw(float x, float y, const std::string &text, float scale = 1) const;
	float width(const std::string &text, float scale = 1) const;
	float height() const { return (float)line_height; }

private:
	struct Glyph {
		int w = 0, h = 0;
		float u0 = 0, v0 = 0, u1 = 0, v1 = 0;
	};
	Glyph glyphs[256];
	int line_height = 0, space = 0;
	unsigned tex = 0;
};

/* palet.pcx's 256 colours (RGB), the HUD's palette; empty if missing. */
std::vector<uint8_t> hud_palette(const NamedArchive &rcs);
