#include "menu/savegame.h"

#include <algorithm>
#include <cstdio>
#include <cstring>

#include "xvga/inifile.h"

namespace {

struct Writer {
	std::vector<uint8_t> out;
	void u8(uint8_t v) { out.push_back(v); }
	void i32(int v)
	{
		for (int k = 0; k < 4; k++)
			out.push_back((uint8_t)((uint32_t)v >> (8 * k)));
	}
};

struct Reader {
	const std::vector<uint8_t> &in;
	size_t at = 0;
	bool ok = true;
	uint8_t u8()
	{
		if (at + 1 > in.size()) {
			ok = false;
			return 0;
		}
		return in[at++];
	}
	int i32()
	{
		if (at + 4 > in.size()) {
			ok = false;
			return 0;
		}
		uint32_t v = in[at] | in[at + 1] << 8 | in[at + 2] << 16 | (uint32_t)in[at + 3] << 24;
		at += 4;
		return (int)v;
	}
};

bool read_file(const std::string &path, std::vector<uint8_t> &data)
{
	FILE *f = fopen(path.c_str(), "rb");
	if (!f)
		return false;
	uint8_t buf[4096];
	size_t n;
	while ((n = fread(buf, 1, sizeof buf, f)) > 0)
		data.insert(data.end(), buf, buf + n);
	fclose(f);
	return true;
}

void read_header(Reader &r, std::string &name, int &portrait)
{
	size_t len = std::min<size_t>(r.u8(), 32);
	name.clear();
	for (size_t k = 0; k < 32; k++) {
		uint8_t c = r.u8();
		if (k < len)
			name += (char)c;
	}
	portrait = r.i32();
}

} // namespace

void SaveGame::defaults(const IniFile &ini, int tour_chars)
{
	*this = SaveGame();
	const char *s = "DEFAULTSETTINGS";
	difficulty = ini.get_int(s, "DIFFICULTY", difficulty);
	resolution = ini.get_int(s, "RESOLUTION", resolution);
	fx_volume = ini.get_int(s, "FXVOLUME", fx_volume);
	music_volume = ini.get_int(s, "MUSICVOLUME", music_volume);
	voices_volume = ini.get_int(s, "VOICESVOLUME", voices_volume);
	static const char *flag_keys[8] = { "FXON", "MUSICON", "VOICESON", "SHOWSTARTINFO", "AlphaBlending",
		"BiliniarFiltering", "WaitVbl", "MIPMAPPING" };
	for (int k = 0; k < 8; k++)
		flags[k] = (uint8_t)ini.get_int(s, flag_keys[k], flags[k]);
	gamma = ini.get_int(s, "Gamma", gamma);
	render_focus = ini.get_int(s, "RenderFocus", render_focus);
	driver = ini.get_int(s, "DriverIndex", driver);
	static const char *key_keys[7] = { "UP", "DOWN", "LEFT", "RIGHT", "EXTRA1", "EXTRA2", "EXTRA3" };
	for (int k = 0; k < 7; k++)
		keys[k] = ini.get_int(s, key_keys[k], keys[k]);
	control_type = ini.get_int(s, "CONTROLTYPE", control_type);
	joy_sensitivity = ini.get_int(s, "JOYSENSITIVITY", joy_sensitivity);
	wheel_sensitivity = ini.get_int(s, "WHEELSENSITIVITY", wheel_sensitivity);
	chars.assign((size_t)std::max(tour_chars, 0), CharResult());
}

bool SaveGame::load(const std::string &path, int tour_chars)
{
	std::vector<uint8_t> data;
	if (!read_file(path, data))
		return false;
	Reader r{ data };
	read_header(r, name, portrait_char);
	difficulty = r.i32();
	resolution = r.i32();
	fx_volume = r.i32();
	music_volume = r.i32();
	voices_volume = r.i32();
	for (uint8_t &f : flags)
		f = r.u8();
	gamma = r.i32();
	texture_memory = r.i32();
	driver = r.i32();
	render_focus = r.i32();
	for (int &k : keys)
		k = r.i32();
	control_type = r.i32();
	joy_sensitivity = r.i32();
	wheel_sensitivity = r.i32();
	tour_char = r.i32();
	tour_track = r.i32();
	chars.assign((size_t)std::max(tour_chars, 0), CharResult());
	for (CharResult &c : chars) {
		c.next_track = r.i32();
		c.money = r.i32();
		c.turbo = r.i32();
		for (uint8_t &u : c.upgrades)
			u = r.u8();
	}
	quick_char = r.i32();
	quick_track = r.i32();
	unlock_popup_shown = r.u8();
	track_to_drive = r.i32();
	return r.ok;
}

bool SaveGame::save(const std::string &path) const
{
	Writer w;
	std::string n = name.substr(0, NAME_MAX);
	w.u8((uint8_t)n.size());
	for (size_t k = 0; k < 32; k++)
		w.u8(k < n.size() ? (uint8_t)n[k] : 0);
	w.i32(tour_char);
	w.i32(difficulty);
	w.i32(resolution);
	w.i32(fx_volume);
	w.i32(music_volume);
	w.i32(voices_volume);
	for (uint8_t f : flags)
		w.u8(f);
	w.i32(gamma);
	w.i32(texture_memory);
	w.i32(driver);
	w.i32(render_focus);
	for (int k : keys)
		w.i32(k);
	w.i32(control_type);
	w.i32(joy_sensitivity);
	w.i32(wheel_sensitivity);
	w.i32(tour_char);
	w.i32(tour_track);
	for (const CharResult &c : chars) {
		w.i32(c.next_track);
		w.i32(c.money);
		w.i32(c.turbo);
		for (uint8_t u : c.upgrades)
			w.u8(u);
	}
	w.i32(quick_char);
	w.i32(quick_track);
	w.u8(unlock_popup_shown);
	w.i32(track_to_drive);
	FILE *f = fopen(path.c_str(), "wb");
	if (!f)
		return false;
	bool ok = fwrite(w.out.data(), 1, w.out.size(), f) == w.out.size();
	return fclose(f) == 0 && ok;
}

bool SaveGame::peek(const std::string &path, std::string &name, int &portrait_char)
{
	std::vector<uint8_t> data;
	if (!read_file(path, data))
		return false;
	Reader r{ data };
	read_header(r, name, portrait_char);
	return r.ok;
}

std::string Players::path(int n) const
{
	std::string d = dir;
	if (!d.empty() && d.back() != '/' && d.back() != '\\')
		d += '/';
	return d + "SaveGame" + std::to_string(n) + ".RCR";
}

bool Players::exists(int n) const
{
	FILE *f = fopen(path(n).c_str(), "rb");
	if (f)
		fclose(f);
	return f != nullptr;
}

int Players::free_slot() const
{
	for (int n = 0; n < 10; n++) {
		if (!exists(n))
			return n;
	}
	return -1;
}

std::vector<int> Players::list() const
{
	std::vector<int> out;
	for (int n = 0; n < 10; n++) {
		if (exists(n))
			out.push_back(n);
	}
	return out;
}
