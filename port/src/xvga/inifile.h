/* INI files, read and written the way Windows' GetPrivateProfileString and
 * WritePrivateProfileString do (dxdraw/Inifile.cpp wraps those): sections and keys match
 * without regard to case, values are trimmed, lines starting with ';' are comments. The
 * game keeps all its settings and the hand-over between menu and race in such files. */
#pragma once

#include <string>
#include <vector>

class IniFile {
public:
	/* Reads the file; false if it cannot be opened (the object is then empty). */
	bool load(const std::string &path);
	/* Writes the file back (keeping comments and the order of everything). */
	bool save(const std::string &path) const;

	std::string get(const std::string &section, const std::string &key, const std::string &def = "") const;
	/* GetPrivateProfileInt: the leading integer of the value, or def. */
	int get_int(const std::string &section, const std::string &key, int def = 0) const;
	double get_float(const std::string &section, const std::string &key, double def = 0) const;
	bool has(const std::string &section, const std::string &key) const;
	void set(const std::string &section, const std::string &key, const std::string &value);
	void set_int(const std::string &section, const std::string &key, int value);
	/* The keys of a section, in file order. */
	std::vector<std::string> keys(const std::string &section) const;

private:
	struct Line {
		std::string text;     /* the line as read (or made) */
		std::string section;  /* the section it is in */
		std::string key;      /* empty unless the line is key=value */
		std::string value;
	};
	std::vector<Line> lines;
	const Line *find(const std::string &section, const std::string &key) const;
};

/* "1,etappe0,e00_weg,..." split at commas, each part trimmed. */
std::vector<std::string> split_fields(const std::string &value, char sep = ',');
