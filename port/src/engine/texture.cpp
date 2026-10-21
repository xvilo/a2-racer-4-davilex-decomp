#include "engine/texture.h"

#include <algorithm>
#include <vector>

#include "platform/gl.h"
#include "res/archive.h"
#include "res/image.h"

TextureManager::~TextureManager()
{
	for (auto &t : by_name) {
		if (t.second)
			glDeleteTextures(1, &t.second);
	}
}

static std::string lower(std::string s)
{
	for (char &c : s)
		c = (char)tolower((unsigned char)c);
	return s;
}

unsigned TextureManager::get(const std::string &name)
{
	std::string base = lower(name);
	size_t dot = base.rfind('.');
	if (dot != std::string::npos)
		base.erase(dot);
	auto it = by_name.find(base);
	if (it != by_name.end())
		return it->second;
	unsigned tex = 0;
	std::vector<uint8_t> bytes;
	Image img;
	bool ok = (rcs.read(base + ".tga", bytes) && decode_tga(bytes, img)) ||
		(rcs.read(base + ".pcx", bytes) && decode_pcx(bytes, img));
	if (ok && img.width > 0 && img.height > 0) {
		/* A 768x512 TGA holds the 512x512 texture with its smaller mipmaps to the right:
		 * the texture is the square on the left. */
		if (img.width == img.height * 3 / 2) {
			std::vector<uint32_t> sq((size_t)img.height * img.height);
			for (int y = 0; y < img.height; y++)
				std::copy_n(&img.pixels[(size_t)y * img.width], img.height, &sq[(size_t)y * img.height]);
			img.pixels.swap(sq);
			img.width = img.height;
		}
		bool any = false;
		const uint32_t key = rgba(255, 0, 127);
		for (uint32_t &p : img.pixels) {
			if ((p | rgba(0, 0, 0, 255)) == key) {
				p = rgba(0, 0, 0, 0);
				any = true;
			}
		}
		glGenTextures(1, &tex);
		glBindTexture(GL_TEXTURE_2D, tex);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
		glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, img.width, img.height, 0, GL_RGBA, GL_UNSIGNED_BYTE,
			img.pixels.data());
		keyed[tex] = any;
	}
	by_name[base] = tex;
	return tex;
}

bool TextureManager::transparent(unsigned texture) const
{
	auto it = keyed.find(texture);
	return it != keyed.end() && it->second;
}
