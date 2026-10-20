#include "res/archive.h"

#include <cctype>
#include <cstdio>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

static uint16_t rd16(const uint8_t *p)
{
	return (uint16_t)(p[0] | p[1] << 8);
}

static uint32_t rd32(const uint8_t *p)
{
	return (uint32_t)(p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24);
}

bool equal_ci(const std::string &a, const std::string &b)
{
	if (a.size() != b.size())
		return false;
	for (size_t i = 0; i < a.size(); i++) {
		if (tolower((unsigned char)a[i]) != tolower((unsigned char)b[i]))
			return false;
	}
	return true;
}

std::string find_file_ci(const std::string &dir, const std::string &rel)
{
	fs::path path = dir;
	size_t start = 0;
	std::error_code ec;
	while (start <= rel.size()) {
		size_t slash = rel.find_first_of("/\\", start);
		std::string part = rel.substr(start, slash == std::string::npos ? std::string::npos : slash - start);
		start = slash == std::string::npos ? rel.size() + 1 : slash + 1;
		if (part.empty())
			continue;
		if (fs::exists(path / part, ec)) {
			path /= part;
			continue;
		}
		bool found = false;
		for (const auto &e : fs::directory_iterator(path, ec)) {
			if (equal_ci(e.path().filename().string(), part)) {
				path = e.path();
				found = true;
				break;
			}
		}
		if (!found)
			return "";
	}
	return path.string();
}

bool read_file_ci(const std::string &dir, const std::string &rel, std::vector<uint8_t> &out)
{
	std::string path = find_file_ci(dir, rel);
	if (path.empty())
		return false;
	FILE *f = fopen(path.c_str(), "rb");
	if (!f)
		return false;
	fseek(f, 0, SEEK_END);
	long n = ftell(f);
	fseek(f, 0, SEEK_SET);
	out.resize(n > 0 ? (size_t)n : 0);
	bool ok = fread(out.data(), 1, out.size(), f) == out.size();
	fclose(f);
	return ok;
}

bool NamedArchive::open(const std::string &dir, const std::string &name)
{
	std::vector<uint8_t> ind;
	img_path = find_file_ci(dir, name + ".IMG");
	if (img_path.empty() || !read_file_ci(dir, name + ".IND", ind) || ind.size() < 2)
		return false;
	std::error_code ec;
	uint32_t img_size = (uint32_t)fs::file_size(img_path, ec);
	size_t n = rd16(ind.data());
	if (ind.size() < 2 + n * 24)
		return false;
	entries.clear();
	for (size_t i = 0; i < n; i++) {
		const uint8_t *e = &ind[2 + i * 24];
		size_t len = 0;
		while (len < 16 && e[len])
			len++;
		entries.push_back({ std::string((const char *)e, len), rd32(e + 20), 0 });
	}
	/* Each entry runs to the next higher offset. */
	for (auto &e : entries) {
		uint32_t end = img_size;
		for (const auto &o : entries) {
			if (o.offset > e.offset && o.offset < end)
				end = o.offset;
		}
		e.size = end > e.offset ? end - e.offset : 0;
	}
	return true;
}

const NamedArchive::Entry *NamedArchive::find(const std::string &file) const
{
	for (const auto &e : entries) {
		if (equal_ci(e.name, file))
			return &e;
	}
	return nullptr;
}

bool NamedArchive::has(const std::string &file) const
{
	return find(file) != nullptr;
}

bool NamedArchive::read(const std::string &file, std::vector<uint8_t> &out) const
{
	const Entry *e = find(file);
	if (!e)
		return false;
	FILE *f = fopen(img_path.c_str(), "rb");
	if (!f)
		return false;
	out.resize(e->size);
	bool ok = fseek(f, (long)e->offset, SEEK_SET) == 0 && fread(out.data(), 1, out.size(), f) == out.size();
	fclose(f);
	return ok;
}

bool load_sprites(const std::string &dir, const std::string &name, std::vector<Sprite> &out)
{
	std::vector<uint8_t> ind, img;
	if (!read_file_ci(dir, name + ".IND", ind) || !read_file_ci(dir, name + ".IMG", img) || ind.size() < 2)
		return false;
	size_t n = rd16(ind.data());
	out.clear();
	for (size_t i = 0; i < n && 2 + i * 4 + 4 <= ind.size(); i++) {
		uint32_t off = rd32(&ind[2 + i * 4]);
		Sprite s;
		if (off + 8 <= img.size()) {
			s.width = rd16(&img[off]);
			s.height = rd16(&img[off + 2]);
			s.center_x = rd16(&img[off + 4]);
			s.center_y = rd16(&img[off + 6]);
			size_t px = (size_t)s.width * s.height;
			if (off + 8 + px <= img.size())
				s.pixels.assign(img.begin() + off + 8, img.begin() + off + 8 + px);
		}
		out.push_back(std::move(s));
	}
	return true;
}
