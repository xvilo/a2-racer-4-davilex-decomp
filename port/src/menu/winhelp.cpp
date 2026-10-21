#include "menu/winhelp.h"

#include <cstdint>
#include <cstdio>
#include <cstring>

namespace {

int32_t rd32(const std::vector<uint8_t> &d, size_t at)
{
	if (at + 4 > d.size())
		return 0;
	return (int32_t)((uint32_t)d[at] | (uint32_t)d[at + 1] << 8 | (uint32_t)d[at + 2] << 16 | (uint32_t)d[at + 3] << 24);
}

int rd16(const std::vector<uint8_t> &d, size_t at)
{
	if (at + 2 > d.size())
		return 0;
	return d[at] | d[at + 1] << 8;
}

/* WinHelp's LZ77: a flag byte for eight items, each a byte as it is or (bit set) a
 * 16-bit word: length (top 4 bits) + 3, distance back (low 12) + 1. */
std::vector<uint8_t> lz77(const uint8_t *p, size_t n)
{
	std::vector<uint8_t> out;
	size_t i = 0;
	while (i < n) {
		int flags = p[i++];
		for (int b = 0; b < 8 && i < n; b++) {
			if (flags & (1 << b)) {
				if (i + 2 > n)
					return out;
				int w = p[i] | p[i + 1] << 8;
				i += 2;
				size_t len = (size_t)(w >> 12) + 3, back = (size_t)(w & 0xfff) + 1;
				for (size_t k = 0; k < len; k++)
					out.push_back(back <= out.size() ? out[out.size() - back] : 0);
			}
			else
				out.push_back(p[i++]);
		}
	}
	return out;
}

} // namespace

bool WinHelp::load(const std::string &path)
{
	std::vector<uint8_t> d;
	FILE *f = fopen(path.c_str(), "rb");
	if (!f)
		return false;
	uint8_t buf[65536];
	size_t n;
	while ((n = fread(buf, 1, sizeof buf, f)) > 0)
		d.insert(d.end(), buf, buf + n);
	fclose(f);
	if (d.size() < 16 || rd32(d, 0) != 0x00035F3F)
		return false;

	/* The directory: a B+ tree after a 9-byte file header and its 38-byte header. */
	std::map<std::string, size_t> files;
	{
		size_t dir = (size_t)rd32(d, 4), bt = dir + 9;
		int page_size = rd16(d, bt + 4), root = rd16(d, bt + 26), levels = rd16(d, bt + 32);
		size_t pages = bt + 38;
		int page = root;
		for (int l = 1; l < levels; l++)
			page = (int16_t)rd16(d, pages + (size_t)page * (size_t)page_size + 4);
		for (int guard = 0; page >= 0 && page != 0xffff && guard < 10000; guard++) {
			size_t p = pages + (size_t)page * (size_t)page_size;
			int count = rd16(d, p + 2);
			int next = (int16_t)rd16(d, p + 6);
			size_t q = p + 8;
			for (int i = 0; i < count && q < d.size(); i++) {
				size_t e = q;
				while (e < d.size() && d[e])
					e++;
				std::string name(d.begin() + (long)q, d.begin() + (long)e);
				files[name] = (size_t)rd32(d, e + 1);
				q = e + 5;
			}
			page = next;
		}
	}
	auto file = [&](const char *name, std::vector<uint8_t> &out) {
		auto it = files.find(name);
		if (it == files.end() || it->second + 9 > d.size())
			return false;
		size_t used = (size_t)rd32(d, it->second + 4), at = it->second + 9;
		out.assign(d.begin() + (long)at, d.begin() + (long)std::min(at + used, d.size()));
		return true;
	};
	std::vector<uint8_t> sys, top, map;
	if (!file("|SYSTEM", sys) || !file("|TOPIC", top))
		return false;
	int minor = rd16(sys, 2), flags = rd16(sys, 10);
	bool packed = minor > 16 && (flags & 4);
	size_t block = minor <= 16 ? 2048 : (flags & 8) ? 2048 : 4096;
	size_t block_data = packed ? 16384 : block - 12;

	/* The blocks' data one after another; a topic position is block << 14 + its place in
	 * the block counted from the block's start (header included). */
	std::vector<uint8_t> stream;
	for (size_t b = 0; b + 12 <= top.size(); b += block) {
		size_t end = std::min(b + block, top.size());
		std::vector<uint8_t> part = packed ? lz77(&top[b + 12], end - b - 12)
										   : std::vector<uint8_t>(top.begin() + (long)b + 12, top.begin() + (long)end);
		part.resize(block_data);
		stream.insert(stream.end(), part.begin(), part.end());
	}
	auto spos = [&](int32_t tp) -> long {
		return (long)((size_t)(tp >> 14) * block_data) + (tp & 0x3fff) - 12;
	};
	long pos = spos(rd32(top, 4));
	int cur_block = -1, chars = 0;
	for (int guard = 0; pos >= 0 && (size_t)pos + 21 <= stream.size() && guard < 100000; guard++) {
		size_t p = (size_t)pos;
		int32_t size = rd32(stream, p), len2 = rd32(stream, p + 4), next = rd32(stream, p + 12),
				len1 = rd32(stream, p + 16);
		int type = stream[p + 20];
		if (size <= 0 || len1 < 21 || p + (size_t)size > stream.size())
			break;
		int blk = (int)(p / block_data);
		if (blk != cur_block) {
			cur_block = blk;
			chars = 0;
		}
		/* The text: 0-separated pieces (phrase compression isn't used by this file). */
		std::string text;
		for (size_t i = p + (size_t)len1; i < p + (size_t)size; i++)
			if (stream[i])
				text += (char)stream[i];
		if (type == 2) {
			topics.push_back({ (blk << 15) + chars, text, "" });
		}
		else if ((type == 0x20 || type == 0x23 || type == 1) && !topics.empty()) {
			while (!text.empty() && text[0] == ' ')
				text.erase(0, 1);
			/* The first paragraph repeats the title. */
			if (!text.empty() && !(topics.back().text.empty() && text == topics.back().title)) {
				if (!topics.back().text.empty())
					topics.back().text += "\n";
				topics.back().text += text;
			}
			chars += len2;
		}
		if (next <= 0 || spos(next) == pos)
			break;
		pos = spos(next);
	}
	if (file("|CTXOMAP", map)) {
		int count = rd16(map, 0);
		for (int i = 0; i < count; i++)
			contexts[rd32(map, 2 + 8 * (size_t)i)] = rd32(map, 6 + 8 * (size_t)i);
	}
	return !topics.empty();
}

bool WinHelp::topic(int id, std::string &title, std::string &text) const
{
	auto c = contexts.find(id);
	if (c == contexts.end())
		return false;
	/* The topic at or before the offset; at a block's very start, the block's first. */
	const Topic *best = nullptr;
	for (const Topic &t : topics) {
		if (t.offset <= c->second)
			best = &t;
	}
	if (!best)
		return false;
	if (c->second - best->offset > 4096) {
		for (const Topic &t : topics) {
			if (t.offset > best->offset) {
				best = &t;
				break;
			}
		}
	}
	title = best->title;
	text = best->text;
	return true;
}
