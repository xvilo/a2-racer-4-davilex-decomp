/* A2 Racer 4 port: entry point. Takes the place of A2Racer4.exe, the launcher, which ran
 * the menu (Menu.exe) and the race (spel.dat) in turn. */

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

#include <SDL.h>

#include "gfx/png.h"
#include "platform/sys.h"
#include "race/race.h"
#include "race/race_view.h"
#include "res/archive.h"
#include "res/discimage.h"
#include "res/image.h"

namespace fs = std::filesystem;

/* The screen the menu draws on. */
static std::vector<uint32_t> screen(SCREEN_W *SCREEN_H, rgba(0, 0, 0));

static void save_screen(const char *path)
{
	png_write_rgba(path, screen.data(), SCREEN_W, SCREEN_H);
}

/* A fatal error: on the console, and on Windows (where a double-clicked game has no
 * console) in a message box. */
static int fatal(const std::string &msg)
{
	fprintf(stderr, "%s\n", msg.c_str());
#ifdef _WIN32
	SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "A2 Racer 4", msg.c_str(), nullptr);
#endif
	return 1;
}

static int usage()
{
	return fatal(
		"usage: a2racer4 [--data] <disc image or directory> [options]\n"
		"  --data <dir|image>   the A2 Racer 4 CD image (.bin/.iso) or a copy of its files\n"
		"  --save <dir>         where options and players go (default: user data folder)\n"
		"  --scale <n>          window size as a multiple of 800x600\n"
		"  --screenshot <file>  draw the main menu, save it as PNG and exit\n"
		"  --race <stage>       drive a stage (0..11) straight away\n"
		"  --car <n>            the car for --race (CAR_CFG.INI [league<n>] entry)\n"
		"  --race-view <stage>  fly along a stage's road (0..11; tests the 3D code)\n"
		"  --league <n>         the league (0..2) for --race-view\n"
		"  --script <file>      scripted input for testing (see platform/sys.cpp)\n"
		"\n"
		"Without --data the game looks for its files itself: unpacked from a CD image on an\n"
		"earlier run, next to a2racer4 (the CD's files, a folder with them, or a .bin/.iso),\n"
		"and on a CD in a drive.");
}

/* The user's data folder (saves, and the files unpacked from a CD image). */
static std::string pref_dir()
{
	char *p = SDL_GetPrefPath("Davilex", "A2 Racer 4");
	std::string s = p ? p : ".";
	SDL_free(p);
	return s;
}

/* The game's Data folder within dir: dir itself, or its Data subfolder (the CD's root). */
static std::string data_folder(const std::string &dir)
{
	if (!find_file_ci(dir, "spel.dat").empty())
		return dir;
	std::string sub = find_file_ci(dir, "Data");
	if (!sub.empty() && !find_file_ci(sub, "spel.dat").empty())
		return sub;
	return "";
}

/* Where the game's files are when --data isn't given (the game double-clicked). */
static std::string find_data()
{
	std::string disc = pref_dir() + "disc";
	if (!data_folder(disc).empty())
		return disc;
	std::vector<fs::path> dirs;
	char *base = SDL_GetBasePath();
	if (base) {
		dirs.emplace_back(base);
		SDL_free(base);
	}
	std::error_code ec;
	dirs.push_back(fs::current_path(ec));
	for (const auto &d : dirs) {
		if (!data_folder(d.string()).empty())
			return d.string();
		std::vector<fs::path> entries;
		for (const auto &e : fs::directory_iterator(d, ec))
			entries.push_back(e.path());
		std::sort(entries.begin(), entries.end());
		for (const auto &e : entries) {
			if (fs::is_directory(e, ec) && !data_folder(e.string()).empty())
				return e.string();
		}
		for (const auto &e : entries) {
			if (fs::is_regular_file(e, ec) && is_disc_image(e.string()))
				return e.string();
		}
	}
	/* The CD in a drive. */
	std::vector<std::string> drives;
#ifdef _WIN32
	for (char c = 'D'; c <= 'Z'; c++)
		drives.push_back(std::string(1, c) + ":\\");
#else
	const char *user = getenv("USER");
	std::string u = user ? user : "";
	for (const std::string &b : { std::string("/Volumes"), "/media/" + u, "/run/media/" + u,
			std::string("/media"), std::string("/mnt") }) {
		for (const auto &e : fs::directory_iterator(b, ec))
			drives.push_back(e.path().string());
	}
#endif
	for (const auto &d : drives) {
		if (!data_folder(d).empty())
			return d;
	}
	return "";
}

struct Args {
	std::string data, save, script, screenshot;
	int scale = 1;
	int race_view = -1, race = -1, league = 0, car = 0;
};

static bool parse_args(int argc, char **argv, Args &a)
{
	if (const char *env = getenv("A2_DATA"))
		a.data = env;
	for (int i = 1; i < argc; i++) {
		std::string opt = argv[i];
		auto value = [&]() -> const char * { return i + 1 < argc ? argv[++i] : nullptr; };
		const char *v = nullptr;
		if (opt == "--data" && (v = value()))
			a.data = v;
		else if (opt == "--save" && (v = value()))
			a.save = v;
		else if (opt == "--script" && (v = value()))
			a.script = v;
		else if (opt == "--screenshot" && (v = value()))
			a.screenshot = v;
		else if (opt == "--scale" && (v = value()))
			a.scale = atoi(v);
		else if (opt == "--race" && (v = value()))
			a.race = atoi(v);
		else if (opt == "--car" && (v = value()))
			a.car = atoi(v);
		else if (opt == "--race-view" && (v = value()))
			a.race_view = atoi(v);
		else if (opt == "--league" && (v = value()))
			a.league = atoi(v);
		else if (!opt.empty() && opt[0] != '-')
			a.data = opt; /* a CD image or folder dropped onto the executable */
		else
			return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	Args args;
	if (!parse_args(argc, argv, args))
		return usage();
	std::string data = args.data.empty() ? find_data() : args.data;
	if (data.empty()) {
		return fatal("Can't find the A2 Racer 4 game files.\n\n"
			"Put a2racer4 next to the A2 Racer 4 CD image (.bin or .iso) or a copy of the CD's "
			"files, insert the CD, or drag the CD image onto a2racer4.\n\n"
			"From a command line: a2racer4 --data <CD image or folder>");
	}
	/* A CD image: its Data folder is unpacked once into the user's data folder. */
	if (is_disc_image(data)) {
		std::string disc = pref_dir() + "disc";
		std::string err = disc_image_unpack(data, disc);
		if (!err.empty())
			return fatal(err);
		data = disc;
	}
	std::string game = data_folder(data);
	if (game.empty())
		return fatal("No A2 Racer 4 game files (spel.dat) in " + data + ".");

	NamedArchive menu_files;
	if (!menu_files.open(game, "MenuData/MenuRcs"))
		return fatal("Cannot read the menu's archive (MenuData/MenuRcs.IND/.IMG) in " + game + ".");

	SysOptions opt;
	opt.scale = args.scale;
	opt.hidden = !args.screenshot.empty();
	opt.script = args.script;
	if (!sys_init("A2 Racer 4", opt))
		return fatal(std::string("Cannot open the window: ") + SDL_GetError());
	sys_set_screenshot(save_screen);

	if (args.race_view >= 0 || args.race >= 0) {
		NamedArchive rcs;
		if (!rcs.open(game, "rcs"))
			return fatal("Cannot read the race's archive (rcs.IND/.IMG) in " + game + ".");
		int r;
		if (args.race >= 0) {
			RaceOptions ro;
			ro.stage = args.race;
			ro.league = args.league;
			ro.car = args.car;
			/* Testing: A2_AUTOPILOT=1 drives by itself. */
			const char *ap = getenv("A2_AUTOPILOT");
			ro.autopilot = ap && *ap && *ap != '0';
			r = race_main(game, rcs, ro);
		}
		else {
			r = race_view(game, rcs, args.race_view, args.league);
		}
		sys_shutdown();
		return r;
	}

	/* The main menu's background (Menu.exe's TfrmMainScreen). */
	std::vector<uint8_t> bytes;
	Image img;
	if (menu_files.read("mainscre.bmp", bytes) && decode_bmp(bytes, img)) {
		for (int y = 0; y < SCREEN_H && y < img.height; y++) {
			for (int x = 0; x < SCREEN_W && x < img.width; x++)
				screen[(size_t)y * SCREEN_W + x] = img.pixels[(size_t)y * img.width + x];
		}
	}
	if (!args.screenshot.empty()) {
		save_screen(args.screenshot.c_str());
		sys_shutdown();
		return 0;
	}
	SysInput in;
	while (!sys_quit_requested()) {
		sys_poll(in);
		if (in.key == KEY_ESCAPE)
			break;
		sys_present(screen.data());
		sys_sleep(10);
	}
	sys_shutdown();
	return 0;
}
