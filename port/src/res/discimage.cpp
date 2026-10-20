#include "res/discimage.h"

#include <cctype>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <vector>

#include "res/archive.h"

namespace fs = std::filesystem;

static const int SECTOR = 2048;
static const uint8_t sync_pattern[12] = { 0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0 };

namespace {

struct Disc {
	FILE *f = nullptr;
	bool raw = false; /* 2352-byte sectors */
	/* Joliet (UCS-2 names, case kept) when the disc has it, else ISO 9660 ("NAME;1"). */
	bool joliet = false;

	~Disc()
	{
		if (f)
			fclose(f);
	}

	/* The 2048 user bytes of a sector. */
	bool read_sector(uint32_t lba, uint8_t *out)
	{
		if (!raw) {
			return fseek(f, (long)lba * SECTOR, SEEK_SET) == 0 && fread(out, 1, SECTOR, f) == SECTOR;
		}
		uint8_t s[2352];
		if (fseek(f, (long)lba * 2352, SEEK_SET) != 0 || fread(s, 1, sizeof s, f) != sizeof s)
			return false;
		if (memcmp(s, sync_pattern, 12) != 0) {
			memset(out, 0, SECTOR);
			return true;
		}
		/* Mode 1: data after the 16-byte header; Mode 2 XA form 1: after the subheader too. */
		memcpy(out, s + (s[15] == 1 ? 16 : 24), SECTOR);
		return true;
	}

	bool read_extent(uint32_t lba, uint32_t size, std::vector<uint8_t> &out)
	{
		out.resize(size);
		uint8_t sector[SECTOR];
		for (uint32_t done = 0; done < size; done += SECTOR, lba++) {
			if (!read_sector(lba, sector))
				return false;
			uint32_t n = size - done < (uint32_t)SECTOR ? size - done : SECTOR;
			memcpy(out.data() + done, sector, n);
		}
		return true;
	}
};

uint32_t rd32(const uint8_t *p)
{
	return (uint32_t)(p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24);
}

std::string record_name(const uint8_t *r, bool joliet)
{
	int n = r[32];
	std::string name;
	if (joliet) {
		/* UCS-2 big endian; the game's names are plain ASCII. */
		for (int i = 0; i + 1 < n; i += 2) {
			int c = r[33 + i] << 8 | r[34 + i];
			name += (char)(c < 0x100 ? c : '_');
		}
	}
	else {
		name.assign((const char *)r + 33, n);
	}
	size_t semi = name.find(';');
	if (semi != std::string::npos)
		name.erase(semi);
	if (!name.empty() && name.back() == '.')
		name.pop_back();
	return name;
}

/* Copies the directory at lba (size bytes) into out, recursively. */
std::string unpack_dir(Disc &d, uint32_t lba, uint32_t size, const fs::path &out, int &files)
{
	std::vector<uint8_t> dir;
	if (!d.read_extent(lba, size, dir))
		return "cannot read the disc's directories";
	std::error_code ec;
	fs::create_directories(out, ec);
	for (uint32_t i = 0; i < size;) {
		uint8_t len = dir[i];
		if (len == 0) {
			i = (i / SECTOR + 1) * SECTOR; /* records don't cross sectors */
			continue;
		}
		const uint8_t *r = dir.data() + i;
		i += len;
		if (r[32] == 0 || (r[32] == 1 && r[33] <= 1))
			continue; /* "." and ".." */
		std::string name = record_name(r, d.joliet);
		if (r[25] & 2) {
			std::string err = unpack_dir(d, rd32(r + 2), rd32(r + 10), out / name, files);
			if (!err.empty())
				return err;
			continue;
		}
		std::vector<uint8_t> data;
		fs::path path = out / name;
		FILE *o = fopen(path.string().c_str(), "wb");
		bool ok = o && d.read_extent(rd32(r + 2), rd32(r + 10), data) &&
			fwrite(data.data(), 1, data.size(), o) == data.size();
		if (o)
			fclose(o);
		if (!ok) {
			fs::remove(path, ec);
			return "cannot unpack " + name + " into " + out.string();
		}
		files++;
	}
	return "";
}

bool ends_with_ci(const std::string &s, const char *suffix)
{
	size_t m = strlen(suffix);
	if (s.size() < m)
		return false;
	for (size_t i = 0; i < m; i++) {
		if (tolower((unsigned char)s[s.size() - m + i]) != suffix[i])
			return false;
	}
	return true;
}

} // namespace

bool is_disc_image(const std::string &path)
{
	return ends_with_ci(path, ".bin") || ends_with_ci(path, ".iso") || ends_with_ci(path, ".img");
}

std::string disc_image_unpack(const std::string &image, const std::string &out_dir)
{
	if (!find_file_ci(out_dir, "spel.dat").empty())
		return "";
	Disc d;
	d.f = fopen(image.c_str(), "rb");
	if (!d.f)
		return "cannot open " + image;
	uint8_t head[12];
	d.raw = fread(head, 1, sizeof head, d.f) == sizeof head && !memcmp(head, sync_pattern, 12);
	/* The volume descriptors from sector 16: the primary one (1), a Joliet one (2, with the
	 * UCS-2 escape sequence), up to the terminator (255). */
	uint8_t vd[SECTOR], root[34] = {};
	bool found = false;
	for (uint32_t s = 16; s < 32 && d.read_sector(s, vd) && vd[0] != 255; s++) {
		if (memcmp(vd + 1, "CD001", 5) != 0)
			break;
		bool joliet = vd[0] == 2 && vd[88] == '%' && vd[89] == '/' && strchr("@CE", vd[90]);
		if (vd[0] == 1 || joliet) {
			if (!found || joliet) {
				memcpy(root, vd + 156, sizeof root);
				d.joliet = joliet;
			}
			found = true;
		}
	}
	if (!found)
		return image + ": not an ISO 9660 CD image";
	/* The game's files are all under Data. */
	std::vector<uint8_t> dir;
	if (!d.read_extent(rd32(root + 2), rd32(root + 10), dir))
		return "cannot read " + image;
	for (size_t i = 0; i < dir.size();) {
		uint8_t len = dir[i];
		if (len == 0) {
			i = (i / SECTOR + 1) * SECTOR;
			continue;
		}
		const uint8_t *r = dir.data() + i;
		i += len;
		if ((r[25] & 2) && equal_ci(record_name(r, d.joliet), "data")) {
			fprintf(stderr, "unpacking %s into %s (once)\n", image.c_str(), out_dir.c_str());
			int files = 0;
			std::string err = unpack_dir(d, rd32(r + 2), rd32(r + 10), out_dir, files);
			if (err.empty())
				fprintf(stderr, "unpacked %d files\n", files);
			return err;
		}
	}
	return image + ": no Data folder (is this the A2 Racer 4 CD?)";
}
