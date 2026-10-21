/* A player's save (DataPlayer.pas, TSaveGame): SaveGame<n>.RCR, a packed little-endian
 * record, the same bytes the original writes, so saves can move between the two:
 *   header    string[32] name (length byte + 32), i32 tour character (for the portrait)
 *   settings  i32 difficulty, resolution, fx/music/voices volume; 8 x u8 FXON, MUSICON,
 *             VOICESON, SHOWSTARTINFO, AlphaBlending, BilinearFiltering, WaitVbl,
 *             Mipmapping; i32 gamma, texture memory, driver, render focus
 *   controls  7 x i32 keys (up, down, left, right, turbo, handbrake, horn), i32 control
 *             type, joystick and wheel sensitivity
 *   tour      i32 character, track ([TOURRACE] list indices); per tour character
 *             i32 next undriven track, money, turbo amount, 5 x u8 upgrades
 *   quick     i32 character, track, u8 unlock popup shown
 *   then      i32 the track to drive */
#pragma once

#include <cstdint>
#include <string>
#include <vector>

class IniFile;

struct SaveGame {
	static constexpr int NAME_LENGTH = 12; /* TfrmNewPlayer's txtName.MaxLength */

	std::string name;
	int portrait_char = 0;

	int difficulty = 1, resolution = 3, fx_volume = 50, music_volume = 50, voices_volume = 100;
	enum { FX_ON, MUSIC_ON, VOICES_ON, SHOW_START_INFO, ALPHA_BLENDING, BILINEAR, WAIT_VBL, MIPMAPPING };
	uint8_t flags[8] = { 1, 1, 1, 1, 1, 1, 0, 0 };
	int gamma = 0, texture_memory = 2, driver = 0, render_focus = 1;

	int keys[7] = { 38, 40, 37, 39, 17, 18, 32 };
	int control_type = 0, joy_sensitivity = 50, wheel_sensitivity = 50;

	int tour_char = 0, tour_track = 0;
	struct CharResult {
		int next_track = 0, money = 0, turbo = 0;
		uint8_t upgrades[5] = {};
	};
	std::vector<CharResult> chars; /* one per [TOURRACE] CHARIX entry */

	int quick_char = 0, quick_track = 0;
	uint8_t unlock_popup_shown = 0;
	int track_to_drive = 0;

	/* A new player: static.ini [DEFAULTSETTINGS], [TOURRACE]/[QUICKRACE] DEFAULTCHAR. */
	void defaults(const IniFile &static_ini, int tour_chars);
	bool load(const std::string &path, int tour_chars);
	bool save(const std::string &path) const;
	/* Only the header (name and portrait), as the player list reads it. */
	static bool peek(const std::string &path, std::string &name, int &portrait_char);
};

/* The players' saves in a folder: SaveGame<n>.RCR, n = 0..9. */
struct Players {
	std::string dir;
	std::string path(int n) const;
	bool exists(int n) const;
	/* The lowest free number, or -1 when all ten are taken. */
	int free_slot() const;
	std::vector<int> list() const;
};
