#include "menu/menu.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "menu/delphi.h"
#include "menu/dfm.h"
#include "menu/forms.h"
#include "gfx/png.h"
#include "platform/sys.h"
#include "race/race.h"
#include "res/archive.h"
#include "xvga/inifile.h"

namespace {

/* The graphics TData.ReadDefGraphics gives the shared button definitions. */
const std::map<std::string, std::string> data_buttons = {
	{ "gdfBtnPreviousItem", "back2" }, { "gdfBtnNextItem", "next2" }, { "gdfBtnClose", "end" },
	{ "gdfBtnHelp", "helpm" }, { "gdfBtnOkDlg", "okay" }, { "gdfBtnOkSingleDlg", "okas" },
	{ "gdfBtnNext", "nextm" }, { "gdfBtnNextSingle", "nexts" }, { "gdfBtnPrevious", "backm" },
	{ "gdfBtnCancelDlg", "cance" }, { "gdfBtnCloseDlg", "cross" }, { "gdfBtnYesDlg", "ryes" },
	{ "gdfBtnNoDlg", "lno" }, { "gdfRadioBtn", "radio" }, { "gdfCheckBox", "check" },
};

std::map<std::string, std::string> with(std::map<std::string, std::string> extra)
{
	extra.insert(data_buttons.begin(), data_buttons.end());
	return extra;
}

/* A picture named prefix + two-digit number (FUN_00489e40: "trname", 3 -> trname03.tga). */
std::string numbered(const std::string &prefix, int n, const char *ext = ".tga")
{
	char buf[64];
	snprintf(buf, sizeof buf, "%s%02d%s", prefix.c_str(), n, ext);
	return buf;
}

std::vector<int> int_list(const std::string &s)
{
	std::vector<int> out;
	for (const std::string &f : split_fields(s))
		if (!f.empty())
			out.push_back(atoi(f.c_str()));
	return out;
}

/* static.ini: the tracks ([TRACK<n>]) and characters ([char<n>]) the menu offers. */
struct Static {
	struct Track {
		std::string name, type;
		int stage = 0;
	};
	struct Character {
		std::string name;
		int car = 0; /* indexingame: the CAR_CFG.INI racer */
		int accel = 3, speed = 3, handling = 3, brakes = 3;
	};
	std::map<int, Track> tracks;
	std::map<int, Character> chars;
	std::vector<int> quick_tracks, quick_chars, tour_tracks, tour_chars;
	int quick_default_char = 0;

	void load(const IniFile &ini)
	{
		for (int i = 0; i < ini.get_int("GENERAL", "TRACKCOUNT", 10); i++) {
			std::string sec = "TRACK" + std::to_string(i);
			tracks[i] = { ini.get(sec, "NAME"), ini.get(sec, "TYPE"), ini.get_int(sec, "INDEXINGAME", i) };
		}
		for (int i = 0; i < ini.get_int("GENERAL", "CHARCOUNT", 9); i++) {
			std::string sec = "char" + std::to_string(i);
			Character c;
			c.name = ini.get(sec, "name");
			c.car = ini.get_int(sec, "indexingame", i);
			c.accel = ini.get_int(sec, "accell", 3);
			c.speed = ini.get_int(sec, "speed", 3);
			c.handling = ini.get_int(sec, "handling", 3);
			c.brakes = ini.get_int(sec, "brakes", 3);
			chars[i] = c;
		}
		quick_tracks = int_list(ini.get("QUICKRACE", "TRACKIX"));
		quick_chars = int_list(ini.get("QUICKRACE", "CHARIX"));
		tour_tracks = int_list(ini.get("TOURRACE", "TRACKIX"));
		tour_chars = int_list(ini.get("TOURRACE", "CHARIX"));
		quick_default_char = ini.get_int("QUICKRACE", "DEFAULTCHAR", 0);
	}
};

Canvas *shot_canvas;
void save_shot(const char *path)
{
	if (shot_canvas)
		png_write_rgba(path, shot_canvas->px.data(), shot_canvas->w, shot_canvas->h);
}

} // namespace

int menu_main(const std::string &data_dir, const NamedArchive &race_rcs, const std::string &screenshot)
{
	std::string menu_dir = find_file_ci(data_dir, "MenuData");
	DelphiProgram prog;
	if (menu_dir.empty() || !prog.load(find_file_ci(menu_dir, "Menu.exe"))) {
		fprintf(stderr, "menu: cannot read MenuData/Menu.exe\n");
		return 1;
	}
	NamedArchive rcs;
	if (!rcs.open(menu_dir, "MenuRcs")) {
		fprintf(stderr, "menu: cannot read MenuData/MenuRcs\n");
		return 1;
	}
	IniFile caps, menu_ini, static_ini;
	caps.load(find_file_ci(menu_dir, "MenuCaps.ini"));
	menu_ini.load(find_file_ci(menu_dir, "menu.ini"));
	static_ini.load(find_file_ci(menu_dir, "static.ini"));
	Static info;
	info.load(static_ini);
	/* The menu's font is embedded in the data module's form (MenuFont1: a length, then
	 * the TrueType file). */
	TrueType font;
	if (auto data = load_form(prog, "TData")) {
		if (DfmObject *f = data->find("MenuFont1")) {
			const DfmValue *v = f->prop("Data");
			if (v && v->kind == DfmValue::BINARY && v->s.size() > 4)
				font.load(std::vector<uint8_t>(v->s.begin() + 4, v->s.end()));
		}
	}
	MenuResources res;
	res.prog = &prog;
	res.rcs = &rcs;
	res.caps = &caps;
	res.font = &font;
	Canvas cv;
	shot_canvas = &cv;
	sys_set_screenshot(save_shot);

	/* The main screen (TfrmMainScreen): Tour or Quick Race, the player, the options. */
	Form main;
	if (!main.load(res, "TfrmMainScreen",
			with({ { "gdfBtnTour", "tour" }, { "gdfBtnQR", "quick" }, { "gdfBtnInternet", "inter" },
				{ "gdfBtnOptions", "optio" }, { "gdfBtnPlayer", "playe" } }))) {
		fprintf(stderr, "menu: no main screen in Menu.exe\n");
		return 1;
	}
	bool quick = true;
	auto show_mode = [&]() {
		if (Control *c = main.get("optQuickRace"))
			c->checked = quick;
		if (Control *c = main.get("optTour"))
			c->checked = !quick;
		main.set_graphic(res, "imgItem", quick ? "quick.tga" : "tour.tga");
	};
	show_mode();
	enum Screen { MAIN, DIFFICULTY, QUICK, RACE, RESULTS, QUIT } screen = MAIN;
	main.handlers["optQuickRaceClick"] = [&]() { quick = true; show_mode(); };
	main.handlers["optTourClick"] = [&]() { quick = false; show_mode(); };
	main.handlers["btnCloseClick"] = [&]() { screen = QUIT; };
	main.handlers["btnNextClick"] = [&]() { screen = DIFFICULTY; };

	/* The difficulty (TfrmDifficulty): easy, normal or hard, with its picture; the
	 * heading says which game. */
	Form diff;
	diff.load(res, "TfrmDifficulty",
		with({ { "gdfBtnEasy", "easy" }, { "gdfBtnMedium", "norma" }, { "gdfBtnHard", "hard" } }));
	diff.background = res.image("quickdif.bmp");
	int difficulty = 1;
	auto show_difficulty = [&]() {
		const char *opts[3] = { "optEasy", "optMedium", "optHard" };
		for (int k = 0; k < 3; k++)
			if (Control *c = diff.get(opts[k]))
				c->checked = k == difficulty;
		diff.set_graphic(res, "imgItem", numbered("diffic", difficulty));
		diff.set_graphic(res, "imgItemName", quick ? "headquic.tga" : "headtour.tga");
	};
	show_difficulty();
	diff.handlers["optEasyClick"] = [&]() { difficulty = 0; show_difficulty(); };
	diff.handlers["optMediumClick"] = [&]() { difficulty = 1; show_difficulty(); };
	diff.handlers["optHardClick"] = [&]() { difficulty = 2; show_difficulty(); };
	diff.handlers["btnPreviousClick"] = [&]() { screen = MAIN; };
	diff.handlers["btnCloseClick"] = [&]() { screen = QUIT; };
	diff.handlers["btnNextClick"] = [&]() { screen = QUICK; };

	/* Quick Race (TfrmQuickRace): a track and a character, each with its pictures; the
	 * track's preview pictures cycle every two seconds (timCycler). */
	Form qr;
	qr.load(res, "TfrmQuickRace", with({}));
	size_t track_ix = 0, char_ix = 0;
	for (size_t k = 0; k < info.quick_chars.size(); k++) {
		if (info.quick_chars[k] == info.quick_default_char)
			char_ix = k;
	}
	int cycle = 0;
	uint32_t next_cycle = 0;
	auto show_track = [&]() {
		if (info.quick_tracks.empty())
			return;
		int t = info.quick_tracks[track_ix % info.quick_tracks.size()];
		const Static::Track &tr = info.tracks[t];
		qr.set_graphic(res, "imgTrackName", numbered("trname", t));
		if (Control *c = qr.get("lblType"))
			c->caption = tr.type;
		if (Control *c = qr.get("lblTime"))
			c->caption = "";
		if (Control *c = qr.get("lblRecName"))
			c->caption = "";
		if (Control *c = qr.get("lblLocked"))
			c->visible = false;
		qr.set_graphic(res, "imgTrack1", numbered("qtc", t, "") + numbered("_", cycle));
		if (Control *c = qr.get("imgTrack2"))
			c->visible = false;
	};
	auto show_char = [&]() {
		if (info.quick_chars.empty())
			return;
		int ch = info.quick_chars[char_ix % info.quick_chars.size()];
		qr.set_graphic(res, "imgCharName", numbered("chara_", ch));
		qr.set_graphic(res, "imgItem", numbered("qr_CH", ch));
		/* The character's speed, acceleration, handling and brakes as rows of dots, from
		 * the anchors lblAncInd00 (the first), 01 (the next across) and 10 (the next row). */
		qr.extras.clear();
		const Static::Character &cc = info.chars[ch];
		Control *a00 = qr.get("lblAncInd00"), *a01 = qr.get("lblAncInd01"), *a10 = qr.get("lblAncInd10");
		if (a00 && a01 && a10) {
			const int values[4] = { cc.speed, cc.accel, cc.handling, cc.brakes };
			for (int row = 0; row < 4; row++)
				for (int k = 0; k < std::min(values[row] * 9 / 5, 9); k++)
					qr.extras.push_back({ res.image("redin_up.tga"), a00->x + k * (a01->x - a00->x),
						a00->y + row * (a10->y - a00->y) });
		}
		if (Control *c = qr.get("lblCharLocked"))
			c->visible = false;
	};
	show_track();
	show_char();
	auto step = [](size_t &ix, size_t n, int d) { ix = n ? (ix + n + (size_t)(d + (int)n)) % n : 0; };
	qr.handlers["btnNextTrack1Click"] = [&]() { step(track_ix, info.quick_tracks.size(), 1); show_track(); };
	qr.handlers["btnPrevTrack1Click"] = [&]() { step(track_ix, info.quick_tracks.size(), -1); show_track(); };
	qr.handlers["btnNextCharClick"] = [&]() { step(char_ix, info.quick_chars.size(), 1); show_char(); };
	qr.handlers["btnPrevCharClick"] = [&]() { step(char_ix, info.quick_chars.size(), -1); show_char(); };
	qr.handlers["btnPreviousClick"] = [&]() { screen = DIFFICULTY; };
	qr.handlers["btnCloseClick"] = [&]() { screen = QUIT; };
	qr.handlers["btnNextClick"] = [&]() { screen = RACE; };

	/* The results (TfrmResults): the field in finishing order, portraits and times
	 * (the winner's, then the others' differences), the player's row highlighted, the
	 * winner's picture; QUICKRES.bmp after a quick race. */
	Form results;
	results.load(res, "TfrmResults", with({}));
	results.background = res.image("quickres.bmp");
	results.handlers["btnNextClick"] = [&]() { screen = QUICK; };
	results.handlers["btnCloseClick"] = [&]() { screen = QUIT; };
	RaceResult last;
	auto show_results = [&]() {
		results.extras.clear();
		Control *pt = results.get("lblTopImage"), *p2 = results.get("lbl2ndImage");
		Control *pm = results.get("lblTime"), *pf = results.get("lblFocus");
		if (!pt || !p2 || !pm || !pf || last.order.empty())
			return;
		/* Copies: adding the rows below moves the controls. */
		Control top = *pt, second = *p2, time_proto = *pm, focus = *pf;
		const Control *time = &time_proto;
		int step = second.y - top.y;
		results.set_graphic(res, "imgItem", numbered("win_ch", last.order[0].car));
		for (size_t k = 0; k < last.order.size(); k++) {
			const RaceResult::Entry &e = last.order[k];
			results.extras.push_back({ res.image(numbered("res_ch", e.car)), top.x, top.y + step * (int)k });
			int t = (int)((k == 0 ? e.time : e.time - last.order[0].time) * 100 + 0.5f);
			char buf[32];
			snprintf(buf, sizeof buf, "%s%d:%02d:%02d", k ? "+" : "", t / 6000, t / 100 % 60, t % 100);
			Control lbl = *time;
			lbl.name = "row" + std::to_string(k);
			lbl.caption = buf;
			lbl.y = time->y + step * (int)k;
			/* The template label itself is hidden; the rows the program makes show. */
			lbl.visible = true;
			results.controls.push_back(lbl);
		}
		if (Control *f = results.get("imgFocus")) {
			f->picture = res.image("focus.tga");
			f->x = focus.x;
			f->y = focus.y + step * (last.position - 1);
		}
	};

	if (!screenshot.empty()) {
		/* Testing: "quick:<file>" shows the Quick Race screen. */
		Form &f = screenshot.rfind("quick:", 0) == 0 ? qr : main;
		f.draw(cv, res);
		std::string file = screenshot.rfind("quick:", 0) == 0 ? screenshot.substr(6) : screenshot;
		png_write_rgba(file.c_str(), cv.px.data(), cv.w, cv.h);
		return 0;
	}
	SysInput in;
	while (screen != QUIT && !sys_quit_requested()) {
		sys_poll(in);
		Form &f = screen == QUICK ? qr : screen == RESULTS ? results : screen == DIFFICULTY ? diff : main;
		if (in.key == KEY_ESCAPE)
			screen = screen == MAIN ? QUIT : MAIN;
		f.input(in);
		if (screen == DIFFICULTY)
			show_difficulty();
		if (screen == QUICK && sys_ticks() >= next_cycle) {
			next_cycle = sys_ticks() + 2000;
			cycle = (cycle + 1) % 6;
			show_track();
		}
		if (screen == RACE) {
			RaceOptions ro;
			ro.stage = info.quick_tracks.empty() ? 0 : info.tracks[info.quick_tracks[track_ix]].stage;
			ro.car = info.quick_chars.empty() ? 0 : info.chars[info.quick_chars[char_ix]].car;
			ro.difficulty = difficulty;
			last = RaceResult();
			race_main(data_dir, race_rcs, ro, &last);
			if (last.quit || last.order.empty()) {
				screen = QUICK;
				continue;
			}
			/* Drop the rows of an earlier results screen. */
			results.controls.erase(std::remove_if(results.controls.begin(), results.controls.end(),
									   [](const Control &c) { return c.name.rfind("row", 0) == 0; }),
				results.controls.end());
			show_results();
			screen = RESULTS;
			continue;
		}
		f.draw(cv, res);
		sys_present(cv.px.data());
		sys_sleep(10);
	}
	return 0;
}
