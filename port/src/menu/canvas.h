/* The menu's 800x600 screen, drawn in software like the original's GDI and DirectDraw
 * surfaces, and shown with sys_present. Pixels are RGBA bytes in memory. */
#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

struct Image;

struct Canvas {
	int w = 800, h = 600;
	std::vector<uint32_t> px = std::vector<uint32_t>(800 * 600);

	void clear(uint32_t c);
	/* Draws img with its top left at (x, y), blending by its alpha (times alpha). */
	void blit(const Image &img, int x, int y, float alpha = 1);
	void fill(int x, int y, int w, int h, uint32_t c, float alpha = 1);
};

/* A TrueType font (the menu's own, embedded in Menu.exe), rendered with stb_truetype. */
class TrueType {
public:
	bool load(std::vector<uint8_t> ttf);
	/* Text in Windows-1252 at (x, y) (the top of the line), px pixels high (Delphi's
	 * Font.Height, the character height), in colour c. */
	void draw(Canvas &cv, int x, int y, const std::string &text, float px, uint32_t c) const;
	float width(const std::string &text, float px) const;
	/* Words wrapped into lines no wider than w. */
	std::vector<std::string> wrap(const std::string &text, float px, float w) const;
	bool ok() const { return !data.empty(); }

private:
	std::vector<uint8_t> data;
	struct Info;
	std::shared_ptr<Info> info;
};
