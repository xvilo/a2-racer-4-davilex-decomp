#include "menu/delphi.h"

#include <cctype>
#include <cstdio>
#include <cstring>

#include "res/archive.h"

static uint32_t rd32(const uint8_t *p)
{
	return (uint32_t)(p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24);
}

static uint16_t rd16(const uint8_t *p)
{
	return (uint16_t)(p[0] | p[1] << 8);
}

static std::string upper(std::string s)
{
	for (char &c : s)
		c = (char)toupper((unsigned char)c);
	return s;
}

long DelphiProgram::off(uint32_t va) const
{
	for (const Section &s : sections) {
		if (va >= s.va && va < s.va + s.size && va - s.va < s.raw_size)
			return (long)(s.raw + (va - s.va));
	}
	return -1;
}

uint32_t DelphiProgram::u32(uint32_t va) const
{
	long o = off(va);
	return o < 0 || (size_t)o + 4 > d.size() ? 0 : rd32(&d[(size_t)o]);
}

std::string DelphiProgram::sstr(uint32_t va) const
{
	long o = off(va);
	if (o < 0 || (size_t)o >= d.size())
		return "";
	size_t n = d[(size_t)o];
	if ((size_t)o + 1 + n > d.size())
		return "";
	return std::string((const char *)&d[(size_t)o + 1], n);
}

bool DelphiProgram::load(const std::string &path)
{
	FILE *f = fopen(path.c_str(), "rb");
	if (!f)
		return false;
	fseek(f, 0, SEEK_END);
	long n = ftell(f);
	fseek(f, 0, SEEK_SET);
	d.resize((size_t)n);
	bool ok = fread(d.data(), 1, d.size(), f) == d.size();
	fclose(f);
	if (!ok || d.size() < 0x40 || d[0] != 'M' || d[1] != 'Z')
		return false;
	uint32_t pe = rd32(&d[0x3c]);
	if (pe + 0x18 + 0x60 + 0x80 > d.size() || memcmp(&d[pe], "PE\0\0", 4))
		return false;
	size_t opt = pe + 24;
	unsigned count = rd16(&d[pe + 6]), opt_size = rd16(&d[pe + 20]);
	base = rd32(&d[opt + 28]);
	uint32_t res_rva = rd32(&d[opt + 96 + 2 * 8]);
	for (unsigned i = 0; i < count; i++) {
		size_t s = opt + opt_size + i * 40;
		if (s + 40 > d.size())
			break;
		sections.push_back({ base + rd32(&d[s + 12]), rd32(&d[s + 8]), rd32(&d[s + 20]), rd32(&d[s + 16]) });
		if (sections.back().size < sections.back().raw_size)
			sections.back().size = sections.back().raw_size;
	}
	/* Resources: type RT_RCDATA (10) -> name -> language -> data. */
	if (res_rva) {
		uint32_t root = base + res_rva;
		auto dir_entries = [&](uint32_t dir, auto &&fn) {
			long o = off(dir);
			if (o < 0)
				return;
			unsigned named = rd16(&d[(size_t)o + 12]), ids = rd16(&d[(size_t)o + 14]);
			for (unsigned k = 0; k < named + ids; k++) {
				uint32_t name = u32(dir + 16 + k * 8), ptr = u32(dir + 20 + k * 8);
				fn(name, ptr);
			}
		};
		auto name_of = [&](uint32_t name) {
			if (!(name & 0x80000000))
				return std::to_string(name);
			long o = off(root + (name & 0x7fffffff));
			std::string s;
			if (o < 0)
				return s;
			unsigned len = rd16(&d[(size_t)o]);
			for (unsigned k = 0; k < len; k++)
				s += (char)d[(size_t)o + 2 + 2 * k];
			return s;
		};
		dir_entries(root, [&](uint32_t type, uint32_t ptr) {
			if (type != 10 || !(ptr & 0x80000000))
				return;
			dir_entries(root + (ptr & 0x7fffffff), [&](uint32_t name, uint32_t p2) {
				std::string nm = upper(name_of(name));
				if (!(p2 & 0x80000000))
					return;
				dir_entries(root + (p2 & 0x7fffffff), [&](uint32_t, uint32_t p3) {
					if (p3 & 0x80000000)
						return;
					uint32_t rva = u32(root + p3), size = u32(root + p3 + 4);
					long o = off(base + rva);
					if (o >= 0 && (size_t)o + size <= d.size())
						resources[nm].assign(d.begin() + o, d.begin() + o + size);
				});
			});
		});
	}
	/* Class tables: a CODE dword equal to its own address plus 76 is a VMT's self pointer
	 * (Delphi 3..7); the name and the parent's VMT sit at fixed places below the VMT. */
	for (const Section &s : sections) {
		for (uint32_t k = 0; k + 80 < s.raw_size; k += 4) {
			uint32_t v = rd32(&d[s.raw + k]);
			if (v != s.va + k + 76)
				continue;
			std::string name = sstr(u32(v - 44));
			if (name.empty() || !(isalpha((unsigned char)name[0]) || name[0] == '_'))
				continue;
			uint32_t pp = u32(v - 36);
			std::string par = pp ? sstr(u32(u32(pp) - 44)) : "";
			parents[upper(name)] = par;
		}
	}
	return !resources.empty();
}

std::vector<uint8_t> DelphiProgram::rcdata(const std::string &name) const
{
	auto it = resources.find(upper(name));
	return it == resources.end() ? std::vector<uint8_t>() : it->second;
}

std::string DelphiProgram::parent(const std::string &cls) const
{
	auto it = parents.find(upper(cls));
	return it == parents.end() ? "" : it->second;
}
