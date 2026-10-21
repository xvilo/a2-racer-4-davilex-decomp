#include "engine/font.h"

#include <algorithm>

#include "platform/gl.h"
#include "res/archive.h"
#include "res/image.h"

BitmapFont::~BitmapFont()
{
	if (tex)
		glDeleteTextures(1, &tex);
}

bool BitmapFont::load(const NamedArchive &rcs, const std::string &name, const std::vector<uint8_t> &palette)
{
	std::vector<uint8_t> d;
	if (!rcs.read(name, d) || d.size() < 2048 || palette.size() < 768)
		return false;
	struct Src {
		int w, h;
		size_t off;
	} src[256];
	int total_w = 0, max_h = 0;
	for (int i = 0; i < 256; i++) {
		const uint8_t *e = &d[(size_t)i * 8];
		int w = (int16_t)(e[0] | e[1] << 8), h = (int16_t)(e[2] | e[3] << 8);
		size_t off = (size_t)(e[4] | e[5] << 8 | e[6] << 16 | (uint32_t)e[7] << 24);
		if (w <= 0 || h <= 0 || off + (size_t)w * h > d.size())
			w = h = 0;
		src[i] = { w, h, off };
		total_w += w + 1;
		max_h = std::max(max_h, h);
	}
	if (max_h == 0)
		return false;
	/* One row of characters, padded to a power of two width for old drivers. */
	int tw = 1, th = 1;
	while (tw < total_w)
		tw *= 2;
	while (th < max_h)
		th *= 2;
	std::vector<uint32_t> px((size_t)tw * th, rgba(0, 0, 0, 0));
	int x = 0;
	for (int i = 0; i < 256; i++) {
		const Src &s = src[i];
		Glyph &g = glyphs[i];
		g.w = s.w;
		g.h = s.h;
		if (!s.w)
			continue;
		for (int yy = 0; yy < s.h; yy++) {
			for (int xx = 0; xx < s.w; xx++) {
				uint8_t v = d[s.off + (size_t)yy * s.w + xx];
				if (v != 255)
					px[(size_t)yy * tw + x + xx] = rgba(palette[v * 3], palette[v * 3 + 1], palette[v * 3 + 2]);
			}
		}
		g.u0 = (float)x / tw;
		g.u1 = (float)(x + s.w) / tw;
		g.v0 = 0;
		g.v1 = (float)s.h / th;
		x += s.w + 1;
	}
	line_height = max_h;
	space = glyphs[(unsigned char)' '].w ? glyphs[(unsigned char)' '].w : std::max(glyphs[(unsigned char)'0'].w / 2, 4);
	glGenTextures(1, &tex);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tw, th, 0, GL_RGBA, GL_UNSIGNED_BYTE, px.data());
	return true;
}

float BitmapFont::width(const std::string &text, float scale) const
{
	float w = 0;
	for (unsigned char c : text) {
		const Glyph &g = glyphs[c];
		w += (g.w ? g.w + 1 : space) * scale;
	}
	return w;
}

void BitmapFont::draw(float x, float y, const std::string &text, float scale) const
{
	if (!tex)
		return;
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, tex);
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.5f);
	glColor4f(1, 1, 1, 1);
	glBegin(GL_QUADS);
	for (unsigned char c : text) {
		const Glyph &g = glyphs[c];
		if (!g.w) {
			x += space * scale;
			continue;
		}
		float w = g.w * scale, h = g.h * scale;
		glTexCoord2f(g.u0, g.v0);
		glVertex2f(x, y);
		glTexCoord2f(g.u1, g.v0);
		glVertex2f(x + w, y);
		glTexCoord2f(g.u1, g.v1);
		glVertex2f(x + w, y + h);
		glTexCoord2f(g.u0, g.v1);
		glVertex2f(x, y + h);
		x += w + scale;
	}
	glEnd();
	glDisable(GL_ALPHA_TEST);
}

std::vector<uint8_t> hud_palette(const NamedArchive &rcs)
{
	std::vector<uint8_t> d;
	Image img;
	if (rcs.read("palet.pcx", d) && decode_pcx(d, img))
		return img.palette;
	return {};
}
