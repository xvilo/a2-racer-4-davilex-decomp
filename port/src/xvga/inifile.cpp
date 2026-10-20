#include "xvga/inifile.h"

#include <cstdio>
#include <cstdlib>

#include "res/archive.h"

static std::string trim(const std::string &s)
{
	size_t a = 0, b = s.size();
	while (a < b && (unsigned char)s[a] <= ' ')
		a++;
	while (b > a && (unsigned char)s[b - 1] <= ' ')
		b--;
	return s.substr(a, b - a);
}

bool IniFile::load(const std::string &path)
{
	lines.clear();
	FILE *f = fopen(path.c_str(), "rb");
	if (!f)
		return false;
	std::string section;
	char buf[4096];
	while (fgets(buf, sizeof buf, f)) {
		Line l;
		l.text = buf;
		while (!l.text.empty() && (l.text.back() == '\n' || l.text.back() == '\r'))
			l.text.pop_back();
		std::string t = trim(l.text);
		if (!t.empty() && t[0] == '[') {
			size_t end = t.find(']');
			section = trim(t.substr(1, end == std::string::npos ? std::string::npos : end - 1));
		}
		else if (!t.empty() && t[0] != ';') {
			size_t eq = t.find('=');
			if (eq != std::string::npos) {
				l.key = trim(t.substr(0, eq));
				l.value = trim(t.substr(eq + 1));
				/* GetPrivateProfileString drops one pair of quotes around a value. */
				if (l.value.size() >= 2 && (l.value[0] == '"' || l.value[0] == '\'') && l.value.back() == l.value[0])
					l.value = l.value.substr(1, l.value.size() - 2);
			}
		}
		l.section = section;
		lines.push_back(std::move(l));
	}
	fclose(f);
	return true;
}

bool IniFile::save(const std::string &path) const
{
	FILE *f = fopen(path.c_str(), "wb");
	if (!f)
		return false;
	for (const auto &l : lines)
		fprintf(f, "%s\r\n", l.text.c_str());
	return fclose(f) == 0;
}

const IniFile::Line *IniFile::find(const std::string &section, const std::string &key) const
{
	for (const auto &l : lines) {
		if (!l.key.empty() && equal_ci(l.section, section) && equal_ci(l.key, key))
			return &l;
	}
	return nullptr;
}

std::string IniFile::get(const std::string &section, const std::string &key, const std::string &def) const
{
	const Line *l = find(section, key);
	return l ? l->value : def;
}

int IniFile::get_int(const std::string &section, const std::string &key, int def) const
{
	const Line *l = find(section, key);
	if (!l)
		return def;
	const char *s = l->value.c_str();
	char *end;
	long v = strtol(s, &end, 10);
	return end == s ? def : (int)v;
}

double IniFile::get_float(const std::string &section, const std::string &key, double def) const
{
	const Line *l = find(section, key);
	if (!l)
		return def;
	const char *s = l->value.c_str();
	char *end;
	double v = strtod(s, &end);
	return end == s ? def : v;
}

bool IniFile::has(const std::string &section, const std::string &key) const
{
	return find(section, key) != nullptr;
}

void IniFile::set(const std::string &section, const std::string &key, const std::string &value)
{
	for (auto &l : lines) {
		if (!l.key.empty() && equal_ci(l.section, section) && equal_ci(l.key, key)) {
			l.value = value;
			l.text = l.key + "=" + value;
			return;
		}
	}
	/* A new key goes at the end of its section, or a new section at the end. */
	size_t at = lines.size();
	bool found = false;
	for (size_t i = 0; i < lines.size(); i++) {
		if (equal_ci(lines[i].section, section)) {
			found = true;
			std::string t = trim(lines[i].text);
			if (!lines[i].key.empty() || (!t.empty() && t[0] == '['))
				at = i + 1;
		}
	}
	if (!found) {
		lines.push_back({ "[" + section + "]", section, "", "" });
		at = lines.size();
	}
	lines.insert(lines.begin() + (long)at, { key + "=" + value, section, key, value });
}

void IniFile::set_int(const std::string &section, const std::string &key, int value)
{
	set(section, key, std::to_string(value));
}

std::vector<std::string> IniFile::keys(const std::string &section) const
{
	std::vector<std::string> out;
	for (const auto &l : lines) {
		if (!l.key.empty() && equal_ci(l.section, section))
			out.push_back(l.key);
	}
	return out;
}

std::vector<std::string> split_fields(const std::string &value, char sep)
{
	std::vector<std::string> out;
	size_t start = 0;
	while (true) {
		size_t c = value.find(sep, start);
		out.push_back(trim(value.substr(start, c == std::string::npos ? std::string::npos : c - start)));
		if (c == std::string::npos)
			break;
		start = c + 1;
	}
	return out;
}
