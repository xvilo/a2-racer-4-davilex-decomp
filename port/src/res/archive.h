/* Files on the disc and Davilex's resource archives (the xvga library's .IND/.IMG pairs).
 *
 *   named   (Data/rcs, Data/MenuData/MenuRcs)
 *           IND: u16 count, then count x 24-byte entries
 *                { char name[16]; u32 unused; u32 offset into IMG }
 *           An entry runs to the next entry's offset (or the end of the IMG).
 *   sprites (Data/RC)
 *           IND: u16 count, then count x u32 offset into IMG
 *           IMG: { u16 width, height, center_x, center_y; u8 pixels[w*h] } per sprite
 */
#pragma once

#include <cstdint>
#include <string>
#include <vector>

/* ASCII case-insensitive equality. */
bool equal_ci(const std::string &a, const std::string &b);
/* The path of rel ("MenuData/MenuRcs.IND") under dir, matching each name without regard to
 * case (the disc's names are mixed case, and copies may differ); empty if missing. */
std::string find_file_ci(const std::string &dir, const std::string &rel);
/* A whole file found with find_file_ci; false if missing or unreadable. */
bool read_file_ci(const std::string &dir, const std::string &rel, std::vector<uint8_t> &out);

class NamedArchive {
public:
	/* Reads <dir>/<name>.IND and keeps <name>.IMG open for reading entries. */
	bool open(const std::string &dir, const std::string &name);
	/* The file's bytes; false if the archive has no such file (names ignore case). */
	bool read(const std::string &file, std::vector<uint8_t> &out) const;
	bool has(const std::string &file) const;

private:
	struct Entry {
		std::string name;
		uint32_t offset, size;
	};
	std::vector<Entry> entries;
	std::string img_path;
	const Entry *find(const std::string &file) const;
};

struct Sprite {
	int width = 0, height = 0, center_x = 0, center_y = 0;
	std::vector<uint8_t> pixels; /* 8-bit palette indices */
};

bool load_sprites(const std::string &dir, const std::string &name, std::vector<Sprite> &out);
