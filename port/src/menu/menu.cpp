#include "menu/menu.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "audio/mixer.h"
#include "menu/delphi.h"
#include "menu/savegame.h"
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
		std::string name, type, story, win, qualify, lose;
		int stage = 0;
		int laps = 0;
		int qualify_position[3] = { 3, 3, 3 }; /* per difficulty */
		bool chase = false;                     /* CHASETIME set: escape the police */
	};
	struct Character {
		std::string name, story, win;
		int car = 0; /* indexingame: the CAR_CFG.INI racer */
		int accel = 3, speed = 3, handling = 3, brakes = 3;
	};
	std::map<int, Track> tracks;
	std::map<int, Character> chars;
	std::vector<int> quick_tracks, quick_chars, tour_tracks, tour_chars;
	int quick_default_char = 0, tour_default_char = 0;
	/* [TUNEUPS] SPECS<n>= name, price, and what it adds to speed, acceleration, brakes,
	 * handling; TEXT<n>. 0 motor, 1 tyres, 2 ABS, 3 gearbox, 4 turbo oil. */
	struct TuneUp {
		std::string name, text;
		int price = 0, speed = 0, accel = 0, brakes = 0, handling = 0;
	};
	std::vector<TuneUp> tuneups;

	void load(const IniFile &ini)
	{
		for (int i = 0; i < ini.get_int("GENERAL", "TRACKCOUNT", 10); i++) {
			std::string sec = "TRACK" + std::to_string(i);
			Track t;
			t.name = ini.get(sec, "NAME");
			t.type = ini.get(sec, "TYPE");
			t.story = ini.get(sec, "STORY");
			t.win = ini.get(sec, "WINTEXT");
			t.qualify = ini.get(sec, "QUALIFYTEXT");
			t.lose = ini.get(sec, "LOSETEXT");
			t.stage = ini.get_int(sec, "INDEXINGAME", i);
			t.laps = ini.get_int(sec, "NRLAPS", 0);
			std::vector<int> q = int_list(ini.get(sec, "QUALIFYPOSITION"));
			for (size_t k = 0; k < 3 && k < q.size(); k++)
				t.qualify_position[k] = q[k];
			for (int c : int_list(ini.get(sec, "CHASETIME")))
				t.chase = t.chase || c > 0;
			tracks[i] = t;
		}
		for (int i = 0; i < ini.get_int("GENERAL", "CHARCOUNT", 9); i++) {
			std::string sec = "char" + std::to_string(i);
			Character c;
			c.name = ini.get(sec, "name");
			c.story = ini.get(sec, "story");
			c.win = ini.get(sec, "winracetext");
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
		tour_default_char = ini.get_int("TOURRACE", "DEFAULTCHAR", 0);
		for (int i = 0; ini.has("TUNEUPS", "SPECS" + std::to_string(i)); i++) {
			std::vector<std::string> f = split_fields(ini.get("TUNEUPS", "SPECS" + std::to_string(i)));
			TuneUp u;
			u.name = f.empty() ? "" : f[0];
			int *vals[5] = { &u.price, &u.speed, &u.accel, &u.brakes, &u.handling };
			for (size_t k = 0; k < 5 && k + 1 < f.size(); k++)
				*vals[k] = atoi(f[k + 1].c_str());
			u.text = ini.get("TUNEUPS", "TEXT" + std::to_string(i));
			tuneups.push_back(u);
		}
	}
};

/* The menu's voices and sounds (MenuRcs WAVs; TData's PlaySample: "<prefix><nn>_<k>.wav",
 * one of the variants that exist, picked at random). */
struct MenuSound {
	const NamedArchive *rcs = nullptr;
	int voice = 0;
	unsigned rnd = 1;

	bool play(const std::string &file)
	{
		std::vector<uint8_t> bytes;
		if (!rcs || !rcs->read(file, bytes))
			return false;
		Mixer &mx = Mixer::get();
		mx.stop(voice);
		voice = mx.play(decode_wav(bytes), 1.0f);
		return voice != 0;
	}

	/* A sound over whatever is being said (TData's PlaySound, e.g. PEEP). */
	void effect(const std::string &file)
	{
		std::vector<uint8_t> bytes;
		if (rcs && rcs->read(file, bytes))
			Mixer::get().play(decode_wav(bytes), 1.0f);
	}

	bool say(const std::string &prefix, int n)
	{
		std::vector<std::string> have;
		for (int k = 0; k < 10; k++) {
			std::string f = numbered(numbered(prefix, n, "_"), k, ".wav");
			if (rcs && rcs->has(f))
				have.push_back(f);
		}
		if (have.empty())
			return false;
		rnd = rnd * 1103515245u + 12345u;
		return play(have[(rnd >> 8) % have.size()]);
	}
};

Canvas *shot_canvas;
void save_shot(const char *path)
{
	if (shot_canvas)
		png_write_rgba(path, shot_canvas->px.data(), shot_canvas->w, shot_canvas->h);
}

} // namespace

int menu_main(const std::string &data_dir, const NamedArchive &race_rcs, const std::string &screenshot,
	const std::string &save_dir)
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
	/* The player (TSaveGame): settings and Tour progress; see the Players section below. */
	SaveGame save;
	save.defaults(static_ini, (int)info.tour_chars.size());
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
	enum Screen { MAIN, DIFFICULTY, QUICK, RACE, RESULTS, CHARACTER, TRACK, GARAGE, TRACK_INTRO, TOUR_RACE, QUALIFY,
		WIN, LOSE, WIN_CHASE, LOSE_CHASE, WIN_FINAL, QUIT } screen = MAIN;
	MenuSound voice;
	voice.rcs = &rcs;
	/* A dialog shown over the screen (ShowModal); typing goes to its text field. */
	Form *dialog = nullptr;
	auto open_dialog = [&](Form &d, bool typing = false) {
		dialog = &d;
		sys_text_input(typing);
	};
	auto close_dialog = [&]() {
		dialog = nullptr;
		sys_text_input(false);
	};
	std::function<void()> show_garage;
	Mixer::get().open();
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
	diff.handlers["btnNextClick"] = [&]() { screen = quick ? QUICK : CHARACTER; };

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
				for (int k = 0; k < std::min(values[row], 9); k++)
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

	/* The Tour (static.ini [TOURRACE]): a character, then its tracks one by one. */
	size_t tour_char = 0, tour_ix = 0;
	for (size_t k = 0; k < info.tour_chars.size(); k++) {
		if (info.tour_chars[k] == info.tour_default_char)
			tour_char = k;
	}
	auto tour_ch = [&]() { return info.tour_chars.empty() ? 0 : info.tour_chars[tour_char % info.tour_chars.size()]; };
	auto tour_tr = [&]() { return info.tour_tracks.empty() ? 0 : info.tour_tracks[tour_ix % info.tour_tracks.size()]; };
	auto ratings = [&](Form &f, const Static::Character &cc) {
		f.extras.clear();
		Control *a00 = f.get("lblAncInd00"), *a01 = f.get("lblAncInd01"), *a10 = f.get("lblAncInd10");
		if (!a00 || !a01 || !a10)
			return;
		const int values[4] = { cc.speed, cc.accel, cc.handling, cc.brakes };
		for (int row = 0; row < 4; row++)
			for (int k = 0; k < std::min(values[row], 9); k++)
				f.extras.push_back({ res.image("redin_up.tga"), a00->x + k * (a01->x - a00->x),
					a00->y + row * (a10->y - a00->y) });
	};
	auto caption = [](Form &f, const char *name, const std::string &text) {
		if (Control *c = f.get(name)) {
			c->caption = text;
			c->wrap = true;
		}
	};

	/* The character (TfrmCharacter): portrait with car, name, story and ratings; Verder
	 * plays the character's own words (CCS<nn>_<k>) and moves on when they end. */
	Form character;
	character.load(res, "TfrmCharacter", with({}));
	float char_leave = -1;
	auto show_character = [&]() {
		int ch = tour_ch();
		character.set_graphic(res, "imgItemName", numbered("chara_", ch));
		character.set_graphic(res, "imgItem", numbered("ch_", ch));
		caption(character, "lblTextBlock", info.chars[ch].story);
		ratings(character, info.chars[ch]);
	};
	show_character();
	character.handlers["btnNextCharClick"] = [&]() { step(tour_char, info.tour_chars.size(), 1); show_character(); };
	character.handlers["btnPrevCharClick"] = [&]() { step(tour_char, info.tour_chars.size(), -1); show_character(); };
	character.handlers["btnPreviousClick"] = [&]() { screen = DIFFICULTY; };
	character.handlers["btnCloseClick"] = [&]() { screen = QUIT; };
	character.handlers["btnNextClick"] = [&]() {
		/* TfrmTrack.FormShow: the character's next undriven track; once the Tour is done,
		 * the track chosen last. Testing: A2_TOUR_START=<n> begins at the n-th track. */
		const SaveGame::CharResult &cr = save.chars[tour_char % save.chars.size()];
		size_t n = info.tour_tracks.size();
		tour_ix = (size_t)cr.next_track < n ? (size_t)cr.next_track : (size_t)std::clamp(save.tour_track, 0, (int)n - 1);
		if (getenv("A2_TOUR_START"))
			tour_ix = (size_t)std::max(atoi(getenv("A2_TOUR_START")), 0);
		char_leave = voice.say("CCS", tour_ch()) ? 2.5f : 0.01f;
	};

	/* The next track (TfrmTrack): its name, preview pictures and story, with Miss
	 * Honeybunny telling about it (CTI07_<track>). */
	Form trackf;
	trackf.load(res, "TfrmTrack", with({}));
	auto show_tour_track = [&]() {
		int t = tour_tr();
		trackf.set_graphic(res, "imgTrackName", numbered("trname", t));
		trackf.set_graphic(res, "imgTrack1", numbered("ttc", t, "") + numbered("_", cycle));
		trackf.set_graphic(res, "imgItem", "hunny.tga");
		trackf.set_graphic(res, "imgShadow", "shadow.tga");
		if (Control *c = trackf.get("imgTrack2"))
			c->visible = false;
		if (Control *c = trackf.get("lblType"))
			c->caption = info.tracks[t].type;
		caption(trackf, "lblTextBlock", info.tracks[t].story);
		/* "%s Plaats" with the qualifying place (menu.ini [ordinalnumbers]); none for a chase. */
		if (Control *c = trackf.get("lblQualify")) {
			c->caption.clear();
			if (!info.tracks[t].chase) {
				int q = info.tracks[t].qualify_position[std::clamp(difficulty, 0, 2)] + 1;
				std::string fmt = menu_ini.get("MENUSTRINGS", "14"), ord = menu_ini.get("ordinalnumbers", std::to_string(q));
				size_t at = fmt.find("%s");
				c->caption = at == std::string::npos ? ord : fmt.replace(at, 2, ord);
			}
		}
		/* The stages driven so far, and this one, on the row of dots. */
		trackf.extras.clear();
		size_t driven = (size_t)std::max(save.chars[tour_char % save.chars.size()].next_track, 0);
		Control *d0 = trackf.get("lblAncTrackInd00"), *d1 = trackf.get("lblAncTrackInd01");
		if (d0 && d1)
			for (size_t k = 0; k < info.tour_tracks.size(); k++)
				if (k < driven || k == tour_ix)
					trackf.extras.push_back({ res.image("redin_up.tga"), d0->x + (int)k * (d1->x - d0->x), d0->y });
		/* Earlier tracks can be driven again, later ones not yet (FUN_00499f80). */
		size_t last = std::min(driven, info.tour_tracks.size() - 1);
		if (Control *c = trackf.get("btnPrevTrack"))
			c->visible = tour_ix > 0;
		if (Control *c = trackf.get("btnNextTrack"))
			c->visible = tour_ix < last;
		for (const char *n : { "lblTime", "lblRecName", "imgFocus" })
			if (Control *c = trackf.get(n))
				c->visible = false;
	};
	trackf.handlers["btnPreviousClick"] = [&]() { screen = CHARACTER; };
	trackf.handlers["btnPrevTrackClick"] = [&]() {
		if (tour_ix > 0)
			tour_ix--;
		show_tour_track();
	};
	trackf.handlers["btnNextTrackClick"] = [&]() {
		tour_ix++;
		show_tour_track();
	};
	trackf.handlers["btnCloseClick"] = [&]() { screen = QUIT; };
	bool just_qualified = false; /* the last race was won or qualified (TData flag 2) */
	trackf.handlers["btnNextClick"] = [&]() {
		save.tour_track = (int)tour_ix;
		show_garage();
		/* FUN_00499538: D.T. Harry's comment on coming in. */
		voice.say(just_qualified ? "CGR" : "CBR", 7);
		screen = GARAGE;
	};

	/* The garage (TfrmGarage): tune-ups for this race, paid from the character's money;
	 * turbo oil (10 per buy, up to 100) stays. The dots: speed, acceleration, handling,
	 * brakes as the character has them with what is bought (red), what this tune-up would
	 * add (green, klrondje) or take (blue, blind_up); then the turbo. */
	Form garage;
	garage.load(res, "TfrmGarage",
		with({ { "gdfBtnBuyTU", "buy" }, { "gdfBtnPrevious3", "back3" }, { "gdfBtnNext3", "next3" } }));
	Form nomoney;
	nomoney.load(res, "TfrmNoMoney", with({}));
	size_t tuneup = 0;
	show_garage = [&]() {
		SaveGame::CharResult &cr = save.chars[tour_char % save.chars.size()];
		const Static::Character &cc = info.chars[tour_ch()];
		garage.set_graphic(res, "imgItemName", numbered("tune_", (int)tuneup));
		garage.set_graphic(res, "imgItem", numbered("tuneup", (int)tuneup));
		const Static::TuneUp *u = tuneup < info.tuneups.size() ? &info.tuneups[tuneup] : nullptr;
		caption(garage, "lblTextBlock", u ? u->text : "");
		if (Control *c = garage.get("lblPoints"))
			c->caption = std::to_string(cr.money);
		if (Control *c = garage.get("lblPrice")) {
			std::string fmt = menu_ini.get("MENUSTRINGS", "13", "%s");
			size_t at = fmt.find("%s");
			std::string price = std::to_string(u ? u->price : 0);
			c->caption = at == std::string::npos ? price : fmt.replace(at, 2, price);
		}
		int have[4] = { cc.speed, cc.accel, cc.handling, cc.brakes };
		for (size_t k = 0; k < 4 && k < info.tuneups.size(); k++) {
			if (!cr.upgrades[k])
				continue;
			const Static::TuneUp &t = info.tuneups[k];
			have[0] += t.speed;
			have[1] += t.accel;
			have[2] += t.handling;
			have[3] += t.brakes;
		}
		int add[4] = {};
		if (u && tuneup < 4 && !cr.upgrades[tuneup]) {
			add[0] = u->speed;
			add[1] = u->accel;
			add[2] = u->handling;
			add[3] = u->brakes;
		}
		garage.extras.clear();
		Control *a00 = garage.get("lblAncInd00"), *a01 = garage.get("lblAncInd01"), *a10 = garage.get("lblAncInd10");
		auto row = [&](int r, int value, int delta) {
			if (!a00 || !a01 || !a10)
				return;
			for (int j = 0; j < 9; j++) {
				const char *img = j < value ? (j < value + delta ? "redin_up.tga" : "blind_up.tga")
											: (j < value + delta ? "klrondje.tga" : nullptr);
				if (img)
					garage.extras.push_back({ res.image(img), a00->x + j * (a01->x - a00->x), a00->y + r * (a10->y - a00->y) });
			}
		};
		for (int r = 0; r < 4; r++)
			row(r, have[r], add[r]);
		row(4, (cr.turbo * 9 + 50) / 100, tuneup == 4 ? 1 : 0);
		if (Control *c = garage.get("btnBuyTuneUp"))
			c->enabled = tuneup == 4 ? cr.turbo < 100 : tuneup < 4 && !cr.upgrades[tuneup];
	};
	garage.handlers["btnNextTUClick"] = [&]() { tuneup = (tuneup + 1) % 5; show_garage(); };
	garage.handlers["btnPrevTUClick"] = [&]() { tuneup = (tuneup + 4) % 5; show_garage(); };
	garage.handlers["btnBuyTuneUpClick"] = [&]() {
		SaveGame::CharResult &cr = save.chars[tour_char % save.chars.size()];
		if (tuneup >= info.tuneups.size())
			return;
		if (cr.money < info.tuneups[tuneup].price) {
			open_dialog(nomoney);
			return;
		}
		cr.money -= info.tuneups[tuneup].price;
		if (tuneup == 4)
			cr.turbo = std::min(cr.turbo + static_ini.get_int("GAMEVALUES", "TURBOOILAMOUNT", 10), 100);
		else
			cr.upgrades[tuneup] = 1;
		voice.effect("peep.wav");
		show_garage();
	};
	garage.handlers["btnPreviousClick"] = [&]() { show_tour_track(); screen = TRACK; };
	garage.handlers["btnCloseClick"] = [&]() { screen = QUIT; };
	garage.handlers["btnNextClick"] = [&]() { screen = TOUR_RACE; };
	for (const char *b : { "btnOk1", "btnClose" })
		nomoney.handlers[b] = [&]() { close_dialog(); };

	/* After the race: won, qualified, lost (and for a chase: escaped or caught), with the
	 * track's texts and D.T. Harry's comments. */
	Form qualify, win, lose, win_chase, lose_chase, win_final, intro;
	qualify.load(res, "TfrmQualify", with({}));
	win.load(res, "TfrmWinNormal", with({}));
	lose.load(res, "TfrmLoseNormal", with({}));
	win_chase.load(res, "TfrmWinChase", with({}));
	lose_chase.load(res, "TfrmLoseChase", with({}));
	win_final.load(res, "TfrmWinFinal", with({}));
	intro.load(res, "TfrmTrackIntro", with({}));
	float intro_leave = -1;
	bool tour_done = false; /* the race just won finished the Tour */
	auto advance = [&]() {
		size_t next = (size_t)save.chars[tour_char % save.chars.size()].next_track;
		tour_ix = std::min(next, info.tour_tracks.size() - 1);
		if (tour_done) {
			tour_done = false;
			int ch = tour_ch();
			/* The original plays the winner's film (medWinner, between the anchors); until
			 * films play, the character's winning picture stands where WinNormal has it. */
			win_final.extras.clear();
			if (Control *at = win.get("imgItem"))
				win_final.extras.push_back({ res.image(numbered("win_ch", ch)), at->x, at->y });
			caption(win_final, "lblTextBlock", info.chars[ch].win);
			voice.say("CCW08_", 0) || voice.say("CDW07_", 4);
			screen = WIN_FINAL;
		}
		else {
			intro_leave = 4;
			voice.play("nexttr.wav");
			screen = TRACK_INTRO;
		}
	};
	for (Form *f : { &qualify, &win, &win_chase })
		f->handlers["btnNextClick"] = [&]() { advance(); };
	for (Form *f : { &lose, &lose_chase })
		f->handlers["btnNextClick"] = [&]() { show_tour_track(); screen = TRACK; };
	win_final.handlers["btnNextClick"] = [&]() { screen = MAIN; };
	for (Form *f : { &qualify, &win, &lose, &win_chase, &lose_chase, &win_final, &intro, &trackf, &character })
		if (!f->handlers.count("btnCloseClick"))
			f->handlers["btnCloseClick"] = [&]() { screen = QUIT; };
	intro.handlers["imgBackGroundClick"] = [&]() { intro_leave = 0.01f; };
	std::function<void()> store_player;
	auto tour_outcome = [&](const RaceResult &r) {
		int t = tour_tr(), ch = tour_ch();
		const Static::Track &tr = info.tracks[t];
		int place = std::max(r.position, 1);
		/* FillRaceResultsTour: a won or qualified race opens the next track (first
		 * place also pays FirstPlaceBonus); the last one ends the Tour. */
		bool through = tr.chase ? r.finished
								: r.finished && place - 1 <= tr.qualify_position[std::clamp(difficulty, 0, 2)];
		SaveGame::CharResult &cr = save.chars[tour_char % save.chars.size()];
		just_qualified = through;
		/* The tune-ups last one race. */
		if (r.finished)
			std::fill(cr.upgrades, cr.upgrades + 4, 0);
		if (through && (size_t)cr.next_track == tour_ix) {
			cr.next_track++;
			tour_done = (size_t)cr.next_track >= info.tour_tracks.size();
		}
		if (r.finished && place == 1 && !tr.chase)
			cr.money += static_ini.get_int("GAMEVALUES", "FirstPlaceBonus", 2500);
		save.tour_track = (int)tour_ix;
		store_player();
		if (tr.chase) {
			Form &f = r.finished ? win_chase : lose_chase;
			f.set_graphic(res, "imgTrackName", numbered("trname", t));
			f.set_graphic(res, "imgItem", r.finished ? "copangry.tga" : "cophappy.tga");
			caption(f, "lblTextBlock", r.finished ? tr.win : tr.lose);
			voice.say(r.finished ? "CDW05_" : "CDL05_", t);
			screen = r.finished ? WIN_CHASE : LOSE_CHASE;
			return;
		}
		if (r.finished && place == 1) {
			win.set_graphic(res, "imgTrackName", numbered("trname", t));
			win.set_graphic(res, "imgItem", numbered("win_ch", ch));
			caption(win, "lblTextBlock", tr.win);
			if (Control *c = win.get("lblBonus"))
				c->visible = false; /* the prize money: not kept yet */
			voice.say("CDW07_", t);
			screen = WIN;
		}
		else if (r.finished && place - 1 <= tr.qualify_position[std::clamp(difficulty, 0, 2)]) {
			qualify.set_graphic(res, "imgTrackName", numbered("trname", t));
			qualify.set_graphic(res, "imgItem", numbered("win_ch", r.order.empty() ? ch : r.order[0].car));
			qualify.set_graphic(res, "imgWinnerName", numbered("chara_", r.order.empty() ? ch : r.order[0].car));
			caption(qualify, "lblTextBlock", tr.qualify);
			voice.say("CDQ07_", t);
			screen = QUALIFY;
		}
		else {
			lose.set_graphic(res, "imgTrackName", numbered("trname", t));
			lose.set_graphic(res, "imgItem", numbered("los_ch", ch));
			caption(lose, "lblTextBlock", tr.lose);
			voice.say("CDL07_", t);
			screen = LOSE;
		}
	};

	/* Players (FormPlayer.pas, DataPlayer.pas): each one's save in the user's folder, the
	 * current one remembered there in menu.ini [GENERAL] CURRENTPLAYER (the original keeps
	 * it in the game's own menu.ini). */
	Players players;
	players.dir = save_dir;
	std::string port_ini_path = save_dir + (save_dir.empty() || save_dir.back() == '/' ? "" : "/") + "menu.ini";
	IniFile port_ini;
	port_ini.load(port_ini_path);
	int current = -1;
	auto list_index = [](const std::vector<int> &list, int v, size_t def) {
		for (size_t k = 0; k < list.size(); k++)
			if (list[k] == v)
				return k;
		return def;
	};
	/* The menu shows the save's choices. */
	auto apply_player = [&]() {
		difficulty = std::clamp(save.difficulty, 0, 2);
		size_t nc = info.tour_chars.size();
		tour_char = save.tour_char >= 0 && (size_t)save.tour_char < nc ? (size_t)save.tour_char : 0;
		if (save.quick_char >= 0 && (size_t)save.quick_char < info.quick_chars.size())
			char_ix = (size_t)save.quick_char;
		if (save.quick_track >= 0 && (size_t)save.quick_track < info.quick_tracks.size())
			track_ix = (size_t)save.quick_track;
		show_difficulty();
		show_character();
		show_track();
	};
	store_player = [&]() {
		if (current < 0)
			return;
		save.difficulty = difficulty;
		save.tour_char = (int)tour_char;
		save.quick_char = (int)char_ix;
		save.quick_track = (int)track_ix;
		if (!save.save(players.path(current)))
			fprintf(stderr, "menu: cannot save %s\n", players.path(current).c_str());
		port_ini.set_int("GENERAL", "CURRENTPLAYER", current);
		port_ini.save(port_ini_path);
	};
	auto load_player = [&](int n) {
		if (!save.load(players.path(n), (int)info.tour_chars.size()))
			return false;
		current = n;
		apply_player();
		return true;
	};
	auto new_player = [&](const std::string &name) {
		int n = players.free_slot();
		if (n < 0)
			return false;
		store_player();
		save.defaults(static_ini, (int)info.tour_chars.size());
		save.name = name.substr(0, SaveGame::NAME_MAX);
		save.tour_char = (int)list_index(info.tour_chars, info.tour_default_char, 0);
		save.quick_char = (int)list_index(info.quick_chars, info.quick_default_char, 0);
		current = n;
		apply_player();
		store_player();
		return true;
	};

	/* Dialogs over the screen: the name of a new player, the list of players, deleting. */
	Form newp, playerf, deletep;
	newp.load(res, "TfrmNewPlayer", with({}));
	playerf.load(res, "TfrmPlayer", with({ { "gdfBtnDeletePlayer", "delet" }, { "defEmpty", "butp1" } }));
	deletep.load(res, "TfrmDeletePlayer", with({}));
	auto set_look = [&](Control &c, const std::string &prefix) {
		static const char *states[5] = { "_up", "_hi", "_do", "_fo", "_di" };
		for (int k = 0; k < 5; k++)
			c.look[k] = res.image(prefix + states[k] + ".tga");
		c.region = res.image(prefix + "_re.bmp");
		if (c.look[0]) {
			c.w = c.look[0]->width;
			c.h = c.look[0]->height;
		}
	};
	/* TfrmPlayer.UpdateScreen: the current player first, then the others, then an empty
	 * place for a new one. The buttons' Tag is the player's number (-1: new). */
	std::map<std::string, int> slot_player;
	bool newp_from_players = false; /* the new player's name was asked from the list */
	auto show_players = [&]() {
		std::vector<int> others;
		for (int n : players.list())
			if (n != current)
				others.push_back(n);
		for (int b = 0; b < 5; b++) {
			std::string bn = "btn" + std::to_string(b);
			Control *c = playerf.get(bn);
			if (!c)
				continue;
			int who = b == 0 ? current : (size_t)(b - 1) < others.size() ? others[(size_t)b - 1] : -2;
			if (b > 0 && who == -2 && (size_t)(b - 1) == others.size() && players.free_slot() >= 0)
				who = -1;
			slot_player[bn] = who;
			c->visible = who != -2;
			c->show_caption = true;
			c->font_px = 16;
			if (who == -1) {
				set_look(*c, "butp1");
				c->caption = "";
			}
			else if (who >= 0) {
				std::string nm;
				int pc = 0;
				if (who == current) {
					nm = save.name;
					pc = (int)tour_char;
				}
				else
					SaveGame::peek(players.path(who), nm, pc);
				int ch = info.tour_chars.empty() ? 0 : info.tour_chars[(size_t)std::max(pc, 0) % info.tour_chars.size()];
				set_look(*c, numbered("PCH", ch, ""));
				c->caption = nm;
			}
		}
		if (Control *c = playerf.get("btnDeletePlayer"))
			c->enabled = !others.empty();
	};
	/* InitDlg backs up every save; Annuleren puts them back (ReplaceFiles). */
	std::map<int, std::vector<uint8_t>> backup;
	int backup_current = -1;
	auto read_all = [](const std::string &path, std::vector<uint8_t> &out) {
		FILE *f = fopen(path.c_str(), "rb");
		if (!f)
			return false;
		int ch;
		while ((ch = fgetc(f)) != EOF)
			out.push_back((uint8_t)ch);
		fclose(f);
		return true;
	};
	auto open_players = [&]() {
		store_player();
		backup.clear();
		backup_current = current;
		for (int n : players.list())
			read_all(players.path(n), backup[n]);
		show_players();
		open_dialog(playerf);
	};
	main.handlers["btnPlayerClick"] = open_players;
	auto pick = [&](const std::string &bn) {
		int who = slot_player.count(bn) ? slot_player[bn] : -2;
		if (who == -1) {
			newp_from_players = true;
			newp.text().clear();
			open_dialog(newp, true);
		}
		else if (who >= 0 && who != current) {
			store_player();
			load_player(who);
			show_players();
		}
	};
	for (int b = 1; b < 5; b++) {
		std::string bn = "btn" + std::to_string(b);
		playerf.handlers[bn] = [&, bn]() { pick(bn); };
	}
	/* The buttons all name btn1Click: the Form calls the OnClick handler; route by name. */
	for (Control &c : playerf.controls)
		if (c.on_click == "btn1Click")
			c.on_click.clear();
	playerf.handlers["btnOk1"] = [&]() { close_dialog(); };
	for (const char *b : { "btnCancel", "btnClose" })
		playerf.handlers[b] = [&]() {
			for (int n : players.list())
				if (!backup.count(n))
					remove(players.path(n).c_str());
			for (auto &[n, bytes] : backup) {
				if (FILE *f = fopen(players.path(n).c_str(), "wb")) {
					fwrite(bytes.data(), 1, bytes.size(), f);
					fclose(f);
				}
			}
			current = -1;
			if (backup_current >= 0)
				load_player(backup_current);
			store_player();
			close_dialog();
		};
	playerf.handlers["btnDeletePlayerClick"] = [&]() {
		if (Control *c = deletep.get("lblSure")) {
			std::string fmt = menu_ini.get("MENUSTRINGS", "4", "%s?");
			size_t at = fmt.find("%s");
			c->caption = at == std::string::npos ? fmt : fmt.replace(at, 2, save.name);
			c->wrap = true;
		}
		open_dialog(deletep);
	};
	deletep.handlers["btnOk1"] = [&]() {
		remove(players.path(current).c_str());
		current = -1;
		std::vector<int> left = players.list();
		if (!left.empty())
			load_player(left[0]);
		show_players();
		open_dialog(playerf);
	};
	for (const char *b : { "btnCancel", "btnClose" })
		deletep.handlers[b] = [&]() { open_dialog(playerf); };
	/* TfrmNewPlayer: a name of up to 12 letters; Enter or OK makes the player. Without
	 * any player yet the menu can't go on: cancelling quits. */
	auto newp_done = [&](bool ok) {
		std::string nm = newp.text();
		while (!nm.empty() && nm.back() == ' ')
			nm.pop_back();
		if (ok && nm.empty())
			return;
		if (ok)
			new_player(nm);
		if (current < 0) {
			screen = QUIT;
			close_dialog();
		}
		else if (newp_from_players) {
			show_players();
			open_dialog(playerf);
		}
		else
			close_dialog();
	};
	newp.handlers["btnOk1"] = [&]() { newp_done(true); };
	for (const char *b : { "btnCancel", "btnClose" })
		newp.handlers[b] = [&]() { newp_done(false); };

	int wanted = port_ini.get_int("GENERAL", "CURRENTPLAYER", -1);
	if (!(wanted >= 0 && load_player(wanted))) {
		std::vector<int> have = players.list();
		if (!have.empty())
			load_player(have[0]);
	}
	if (current < 0 && screenshot.empty())
		open_dialog(newp, true);

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
		Form *fp = &main;
		switch (screen) {
		case QUICK: fp = &qr; break;
		case RESULTS: fp = &results; break;
		case DIFFICULTY: fp = &diff; break;
		case CHARACTER: fp = &character; break;
		case TRACK: fp = &trackf; break;
		case GARAGE: fp = &garage; break;
		case TRACK_INTRO: fp = &intro; break;
		case QUALIFY: fp = &qualify; break;
		case WIN: fp = &win; break;
		case LOSE: fp = &lose; break;
		case WIN_CHASE: fp = &win_chase; break;
		case LOSE_CHASE: fp = &lose_chase; break;
		case WIN_FINAL: fp = &win_final; break;
		default: break;
		}
		Form &f = *fp;
		float dt = 0.01f;
		if (dialog) {
			Form *d = dialog;
			d->input(in);
			if (dialog == d && in.key == KEY_ESCAPE && d->handlers.count("btnCancel"))
				d->handlers["btnCancel"]();
			else if (dialog == d && in.key == KEY_ENTER && d == &newp)
				newp.handlers["btnOk1"](); /* txtNameKeyDown */
			f.draw(cv, res);
			if (dialog)
				dialog->draw(cv, res);
			sys_present(cv.px.data());
			sys_sleep(10);
			continue;
		}
		if (in.key == KEY_ESCAPE)
			screen = screen == MAIN ? QUIT : MAIN;
		f.input(in);
		if (screen == DIFFICULTY)
			show_difficulty();
		/* The character's words, then the track. */
		if (char_leave > 0 && (char_leave -= dt) <= 0) {
			char_leave = -1;
			show_tour_track();
			voice.say("CTI07_", tour_tr()) || voice.say("CTI08_", tour_tr());
			screen = TRACK;
		}
		if (screen == TRACK_INTRO && intro_leave > 0 && (intro_leave -= dt) <= 0) {
			intro_leave = -1;
			show_tour_track();
			voice.say("CTI07_", tour_tr()) || voice.say("CTI08_", tour_tr());
			screen = TRACK;
		}
		if (screen == TRACK && sys_ticks() >= next_cycle) {
			next_cycle = sys_ticks() + 2000;
			cycle = (cycle + 1) % 6;
			show_tour_track();
		}
		if (screen == TOUR_RACE) {
			int t = tour_tr();
			RaceOptions ro;
			ro.stage = info.tracks[t].stage;
			ro.car = info.chars[tour_ch()].car;
			ro.difficulty = difficulty;
			ro.laps = info.tracks[t].laps;
			const SaveGame::CharResult &cr = save.chars[tour_char % save.chars.size()];
			ro.motor = cr.upgrades[0];
			ro.tyres = cr.upgrades[1];
			ro.abs = cr.upgrades[2];
			ro.gearbox = cr.upgrades[3];
			if (info.tracks[t].chase) {
				std::vector<int> ct = int_list(static_ini.get("TRACK" + std::to_string(t), "CHASETIME"));
				if (!ct.empty())
					ro.time_limit = ct[(size_t)std::clamp(difficulty, 0, (int)ct.size() - 1)] / 1000.0f;
			}
			Mixer::get().stop(voice.voice);
			RaceResult r;
			race_main(data_dir, race_rcs, ro, &r);
			Mixer::get().open();
			if (r.quit) {
				show_tour_track();
				screen = TRACK;
			}
			else
				tour_outcome(r);
			continue;
		}
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
	store_player();
	return 0;
}
