/* Textures from the race's archive (rcs), as OpenGL textures. Every texture is there as an
 * 8-bit PCX and as a 24-bit TGA; the original loads the TGA in its 16-bit (3D card) modes,
 * and so does the port. Magenta (255, 0, 255) is the transparent colour. */
#pragma once

#include <cstdint>
#include <map>
#include <string>

class NamedArchive;

class TextureManager {
public:
	explicit TextureManager(const NamedArchive &rcs) : rcs(rcs) {}
	~TextureManager();
	/* The texture of that name ("e00_weg", "general.pcx": the extension is replaced), loaded
	 * on first use; 0 if there is none. */
	unsigned get(const std::string &name);
	/* Whether the texture has transparent (colour-keyed) pixels. */
	bool transparent(unsigned texture) const;

private:
	const NamedArchive &rcs;
	std::map<std::string, unsigned> by_name;
	std::map<unsigned, bool> keyed;
};
