#include "menu/canvas.h"

#include <algorithm>
#include <cmath>
#include <cstring>

#include "res/image.h"

#define STB_TRUETYPE_IMPLEMENTATION
#include "stb_truetype.h"

static inline uint32_t mix(uint32_t dst, uint32_t src, float a)
{
	uint8_t d[4], s[4];
	memcpy(d, &dst, 4);
	memcpy(s, &src, 4);
	for (int k = 0; k < 3; k++)
		d[k] = (uint8_t)(d[k] + (s[k] - d[k]) * a + 0.5f);
	d[3] = 255;
	uint32_t r;
	memcpy(&r, d, 4);
	return r;
}

void Canvas::clear(uint32_t c)
{
	std::fill(px.begin(), px.end(), c);
}

void Canvas::blit(const Image &img, int x, int y, float alpha)
{
	for (int yy = std::max(0, -y); yy < img.height && y + yy < h; yy++) {
		const uint32_t *s = &img.pixels[(size_t)yy * img.width];
		uint32_t *d = &px[(size_t)(y + yy) * w];
		for (int xx = std::max(0, -x); xx < img.width && x + xx < w; xx++) {
			uint8_t a = (uint8_t)(s[xx] >> 24);
			if (a == 0)
				continue;
			float f = a / 255.0f * alpha;
			d[x + xx] = f >= 1 ? (s[xx] | 0xff000000u) : mix(d[x + xx], s[xx], f);
		}
	}
}

void Canvas::fill(int x, int y, int fw, int fh, uint32_t c, float alpha)
{
	for (int yy = std::max(0, y); yy < std::min(h, y + fh); yy++)
		for (int xx = std::max(0, x); xx < std::min(w, x + fw); xx++)
			px[(size_t)yy * w + xx] = mix(px[(size_t)yy * w + xx], c, alpha);
}

struct TrueType::Info {
	stbtt_fontinfo f;
};

bool TrueType::load(std::vector<uint8_t> ttf)
{
	data = std::move(ttf);
	info = std::make_shared<Info>();
	if (data.empty() || !stbtt_InitFont(&info->f, data.data(), stbtt_GetFontOffsetForIndex(data.data(), 0))) {
		data.clear();
		return false;
	}
	return true;
}

/* Windows-1252 to Unicode (the 0x80..0x9f block differs from Latin-1). */
static int cp1252(unsigned char c)
{
	static const uint16_t hi[32] = { 0x20ac, 0x81, 0x201a, 0x192, 0x201e, 0x2026, 0x2020, 0x2021, 0x2c6, 0x2030, 0x160,
		0x2039, 0x152, 0x8d, 0x17d, 0x8f, 0x90, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 0x2dc, 0x2122,
		0x161, 0x203a, 0x153, 0x9d, 0x17e, 0x178 };
	return c >= 0x80 && c < 0xa0 ? hi[c - 0x80] : c;
}

float TrueType::width(const std::string &text, float px) const
{
	if (!ok())
		return 0;
	float scale = stbtt_ScaleForPixelHeight(&info->f, px), w = 0;
	for (size_t i = 0; i < text.size(); i++) {
		int adv, lsb;
		int c = cp1252((unsigned char)text[i]);
		stbtt_GetCodepointHMetrics(&info->f, c, &adv, &lsb);
		w += adv * scale;
		if (i + 1 < text.size())
			w += scale * stbtt_GetCodepointKernAdvance(&info->f, c, cp1252((unsigned char)text[i + 1]));
	}
	return w;
}

std::vector<std::string> TrueType::wrap(const std::string &text, float px, float w) const
{
	std::vector<std::string> lines;
	std::string line, word;
	auto flush_word = [&]() {
		if (word.empty())
			return;
		std::string t = line.empty() ? word : line + " " + word;
		if (!line.empty() && width(t, px) > w) {
			lines.push_back(line);
			line = word;
		}
		else
			line = t;
		word.clear();
	};
	for (char c : text) {
		if (c == ' ')
			flush_word();
		else if (c == '\n' || c == '@') { /* menu.ini breaks lines with @ */
			flush_word();
			lines.push_back(line);
			line.clear();
		}
		else
			word += c;
	}
	flush_word();
	if (!line.empty())
		lines.push_back(line);
	return lines;
}

void TrueType::draw(Canvas &cv, int x, int y, const std::string &text, float px, uint32_t colour) const
{
	if (!ok())
		return;
	float scale = stbtt_ScaleForPixelHeight(&info->f, px);
	int ascent, descent, gap;
	stbtt_GetFontVMetrics(&info->f, &ascent, &descent, &gap);
	float base = y + ascent * scale, pen = (float)x;
	for (size_t i = 0; i < text.size(); i++) {
		int c = cp1252((unsigned char)text[i]);
		int adv, lsb, x0, y0, x1, y1;
		stbtt_GetCodepointHMetrics(&info->f, c, &adv, &lsb);
		stbtt_GetCodepointBitmapBoxSubpixel(&info->f, c, scale, scale, pen - floorf(pen), 0, &x0, &y0, &x1, &y1);
		int gw = x1 - x0, gh = y1 - y0;
		if (gw > 0 && gh > 0) {
			std::vector<uint8_t> bm((size_t)gw * gh);
			stbtt_MakeCodepointBitmapSubpixel(&info->f, bm.data(), gw, gh, gw, scale, scale, pen - floorf(pen), 0, c);
			int ox = (int)floorf(pen) + x0, oy = (int)base + y0;
			for (int yy = 0; yy < gh; yy++) {
				int sy = oy + yy;
				if (sy < 0 || sy >= cv.h)
					continue;
				for (int xx = 0; xx < gw; xx++) {
					int sx = ox + xx;
					uint8_t a = bm[(size_t)yy * gw + xx];
					if (a && sx >= 0 && sx < cv.w)
						cv.px[(size_t)sy * cv.w + sx] = mix(cv.px[(size_t)sy * cv.w + sx], colour, a / 255.0f);
				}
			}
		}
		pen += adv * scale;
		if (i + 1 < text.size())
			pen += scale * stbtt_GetCodepointKernAdvance(&info->f, c, cp1252((unsigned char)text[i + 1]));
	}
}
