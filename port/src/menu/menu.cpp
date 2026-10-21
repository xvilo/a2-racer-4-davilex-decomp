#include "menu/menu.h"

#include <cstdio>
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
	IniFile caps, menu_ini;
	caps.load(find_file_ci(menu_dir, "MenuCaps.ini"));
	menu_ini.load(find_file_ci(menu_dir, "menu.ini"));
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
	bool quit = false, race = false;
	main.handlers["optQuickRaceClick"] = [&]() { quick = true; show_mode(); };
	main.handlers["optTourClick"] = [&]() { quick = false; show_mode(); };
	main.handlers["btnCloseClick"] = [&]() { quit = true; };
	main.handlers["btnNextClick"] = [&]() { race = true; };
	if (!screenshot.empty()) {
		main.draw(cv, res);
		png_write_rgba(screenshot.c_str(), cv.px.data(), cv.w, cv.h);
		return 0;
	}
	SysInput in;
	while (!quit && !sys_quit_requested()) {
		sys_poll(in);
		if (in.key == KEY_ESCAPE)
			break;
		main.input(in);
		if (race) {
			race = false;
			RaceOptions ro;
			ro.stage = 0;
			race_main(data_dir, race_rcs, ro);
			continue;
		}
		main.draw(cv, res);
		sys_present(cv.px.data());
		sys_sleep(10);
	}
	return 0;
}
