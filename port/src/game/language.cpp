#include "game/language.h"

#include "res/archive.h"
#include "xvga/inifile.h"

void Language::load(const std::string &dir)
{
	text.clear();
	IniFile ini;
	std::string path = find_file_ci(dir, "language.ini");
	if (path.empty() || !ini.load(path))
		return;
	static const char *sections[] = { "NEDERLANDS", "ENGELS", "DUITS" };
	int lang = ini.get_int("SETTINGS", "LANGUAGE", 0);
	const char *sec = sections[lang >= 0 && lang < 3 ? lang : 0];
	int count = ini.get_int("SETTINGS", "TEXT_COUNT", 0);
	for (int i = 0; i < count; i++)
		text.push_back(ini.get(sec, std::to_string(i)));
}

std::string Language::get(int n, const char *fallback) const
{
	if (n >= 0 && n < (int)text.size() && !text[(size_t)n].empty())
		return text[(size_t)n];
	return fallback;
}
