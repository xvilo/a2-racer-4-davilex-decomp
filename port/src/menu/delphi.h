/* What the port takes from the menu program itself (Data/MenuData/Menu.exe, a Delphi
 * program): its forms, stored as binary DFM resources (RCDATA, named after their class:
 * TFRMMAINSCREEN), and its classes' ancestry, from the class tables (VMTs) Delphi keeps
 * for every class, since an inherited form's DFM only holds what differs from its
 * parent's. The program is read, never run. */
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <vector>

class DelphiProgram {
public:
	bool load(const std::string &path);
	/* An RCDATA resource by name (case-insensitive); empty if missing. */
	std::vector<uint8_t> rcdata(const std::string &name) const;
	/* A class's parent class name; empty if unknown. */
	std::string parent(const std::string &cls) const;

private:
	std::vector<uint8_t> d;
	struct Section {
		uint32_t va, size, raw, raw_size;
	};
	std::vector<Section> sections;
	uint32_t base = 0;
	std::map<std::string, std::vector<uint8_t>> resources; /* upper-case name -> bytes */
	std::map<std::string, std::string> parents;
	long off(uint32_t va) const;
	uint32_t u32(uint32_t va) const;
	std::string sstr(uint32_t va) const;
};
