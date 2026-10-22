//! A2 Racer 4 port: entry point. Takes the place of A2Racer4.exe, the launcher, which ran
//! the menu (Menu.exe) and the race (spel.dat) in turn.
#![cfg_attr(windows, windows_subsystem = "windows")]
// The formats' readers are kept whole, also where the game doesn't use every part.
#![allow(dead_code)]

mod audio;
mod engine;
mod game;
mod gfx;
mod menu;
mod platform;
mod race;
mod res;
mod third_party;
mod xvga;

use std::ffi::{CStr, CString};
use std::fs;
use std::path::{Path, PathBuf};
use std::rc::Rc;

use menu::menu::menu_main;
use platform::sys::{SysOptions, sys_init, sys_shutdown};
use race::race::{RaceOptions, race_main};
use race::race_view::race_view;
use res::archive::{NamedArchive, find_file_ci};
use res::discimage::{disc_image_unpack, is_disc_image};

/// A fatal error: on the console, and on Windows (where a double-clicked game has no
/// console) in a message box.
fn fatal(msg: &str) -> i32 {
	eprintln!("{msg}");
	#[cfg(windows)]
	{
		let title = CString::new("A2 Racer 4").unwrap_or_default();
		let text = CString::new(msg).unwrap_or_default();
		// SAFETY: two NUL-terminated strings and no parent window.
		unsafe {
			sdl2_sys::SDL_ShowSimpleMessageBox(
				sdl2_sys::SDL_MessageBoxFlags::SDL_MESSAGEBOX_ERROR as u32,
				title.as_ptr(),
				text.as_ptr(),
				std::ptr::null_mut(),
			)
		};
	}
	1
}

fn usage() -> i32 {
	fatal(
		"usage: a2racer4 [--data] <disc image or directory> [options]\n\
		 \x20 --data <dir|image>   the A2 Racer 4 CD image (.bin/.iso) or a copy of its files\n\
		 \x20 --save <dir>         where options and players go (default: user data folder)\n\
		 \x20 --scale <n>          window size as a multiple of 800x600\n\
		 \x20 --screenshot <file>  draw the main menu, save it as PNG and exit\n\
		 \x20 --race <stage>       drive a stage (0..11) straight away\n\
		 \x20 --car <n>            the car for --race (CAR_CFG.INI [league<n>] entry)\n\
		 \x20 --race-view <stage>  fly along a stage's road (0..11; tests the 3D code)\n\
		 \x20 --league <n>         the league (0..2) for --race-view\n\
		 \x20 --script <file>      scripted input for testing (see platform/sys.rs)\n\
		 \n\
		 Without --data the game looks for its files itself: unpacked from a CD image on an\n\
		 earlier run, next to a2racer4 (the CD's files, a folder with them, or a .bin/.iso),\n\
		 and on a CD in a drive.",
	)
}

/// SDL's string result, freed.
fn sdl_string(p: *mut std::ffi::c_char) -> Option<String> {
	if p.is_null() {
		return None;
	}
	// SAFETY: SDL returned a NUL-terminated string it allocated; it is freed right after.
	unsafe {
		let s = CStr::from_ptr(p).to_string_lossy().into_owned();
		sdl2_sys::SDL_free(p as *mut std::ffi::c_void);
		Some(s)
	}
}

/// The user's data folder (saves, and the files unpacked from a CD image).
fn pref_dir() -> String {
	let org = CString::new("Davilex").unwrap_or_default();
	let app = CString::new("A2 Racer 4").unwrap_or_default();
	// SAFETY: two NUL-terminated strings.
	sdl_string(unsafe { sdl2_sys::SDL_GetPrefPath(org.as_ptr(), app.as_ptr()) }).unwrap_or_else(|| ".".into())
}

/// The game's Data folder within dir: dir itself, or its Data subfolder (the CD's root).
fn data_folder(dir: &str) -> String {
	if !find_file_ci(dir, "spel.dat").is_empty() {
		return dir.to_string();
	}
	let sub = find_file_ci(dir, "Data");
	if !sub.is_empty() && !find_file_ci(&sub, "spel.dat").is_empty() {
		return sub;
	}
	String::new()
}

fn sorted_entries(d: &Path) -> Vec<PathBuf> {
	let mut entries: Vec<PathBuf> =
		fs::read_dir(d).map(|r| r.flatten().map(|e| e.path()).collect()).unwrap_or_default();
	entries.sort();
	entries
}

/// Where the game's files are when --data isn't given (the game double-clicked).
fn find_data() -> String {
	let disc = pref_dir() + "disc";
	if !data_folder(&disc).is_empty() {
		return disc;
	}
	let mut dirs: Vec<PathBuf> = Vec::new();
	// SAFETY: plain SDL call; the result is freed by sdl_string.
	if let Some(base) = sdl_string(unsafe { sdl2_sys::SDL_GetBasePath() }) {
		dirs.push(base.into());
	}
	if let Ok(cwd) = std::env::current_dir() {
		dirs.push(cwd);
	}
	for d in &dirs {
		let ds = d.to_string_lossy();
		if !data_folder(&ds).is_empty() {
			return ds.into_owned();
		}
		let entries = sorted_entries(d);
		for e in &entries {
			let es = e.to_string_lossy();
			if e.is_dir() && !data_folder(&es).is_empty() {
				return es.into_owned();
			}
		}
		for e in &entries {
			let es = e.to_string_lossy();
			if e.is_file() && is_disc_image(&es) {
				return es.into_owned();
			}
		}
	}
	// The CD in a drive.
	let mut drives: Vec<String> = Vec::new();
	#[cfg(windows)]
	for c in b'D'..=b'Z' {
		drives.push(format!("{}:\\", c as char));
	}
	#[cfg(not(windows))]
	{
		let u = std::env::var("USER").unwrap_or_default();
		for b in
			["/Volumes".to_string(), format!("/media/{u}"), format!("/run/media/{u}"), "/media".into(), "/mnt".into()]
		{
			for e in fs::read_dir(&b).into_iter().flatten().flatten() {
				drives.push(e.path().to_string_lossy().into_owned());
			}
		}
	}
	for d in &drives {
		if !data_folder(d).is_empty() {
			return d.clone();
		}
	}
	String::new()
}

#[derive(Default)]
struct Args {
	data: String,
	save: String,
	script: String,
	screenshot: String,
	scale: i32,
	race_view: i32,
	race: i32,
	league: i32,
	car: i32,
}

fn parse_args(argv: &[String]) -> Option<Args> {
	use xvga::inifile::atoi;
	let mut a = Args { scale: 1, race_view: -1, race: -1, ..Default::default() };
	if let Ok(env) = std::env::var("A2_DATA") {
		a.data = env;
	}
	let mut i = 1;
	while i < argv.len() {
		let opt = argv[i].as_str();
		let v = argv.get(i + 1).cloned();
		let takes_value = matches!(
			opt,
			"--data"
				| "--save" | "--script"
				| "--screenshot"
				| "--scale" | "--race"
				| "--car" | "--race-view"
				| "--league"
		);
		if takes_value {
			let v = v?;
			i += 1;
			match opt {
				"--data" => a.data = v,
				"--save" => a.save = v,
				"--script" => a.script = v,
				"--screenshot" => a.screenshot = v,
				"--scale" => a.scale = atoi(&v),
				"--race" => a.race = atoi(&v),
				"--car" => a.car = atoi(&v),
				"--race-view" => a.race_view = atoi(&v),
				_ => a.league = atoi(&v),
			}
		} else if !opt.is_empty() && !opt.starts_with('-') {
			a.data = opt.to_string(); // a CD image or folder dropped onto the executable
		} else {
			return None;
		}
		i += 1;
	}
	Some(a)
}

fn run() -> i32 {
	let argv: Vec<String> = std::env::args().collect();
	let Some(args) = parse_args(&argv) else {
		return usage();
	};
	let mut data = if args.data.is_empty() { find_data() } else { args.data.clone() };
	if data.is_empty() {
		return fatal(
			"Can't find the A2 Racer 4 game files.\n\n\
			 Put a2racer4 next to the A2 Racer 4 CD image (.bin or .iso) or a copy of the CD's \
			 files, insert the CD, or drag the CD image onto a2racer4.\n\n\
			 From a command line: a2racer4 --data <CD image or folder>",
		);
	}
	// A CD image: its Data folder is unpacked once into the user's data folder.
	if is_disc_image(&data) {
		let disc = pref_dir() + "disc";
		let err = disc_image_unpack(&data, &disc);
		if !err.is_empty() {
			return fatal(&err);
		}
		data = disc;
	}
	let game = data_folder(&data);
	if game.is_empty() {
		return fatal(&format!("No A2 Racer 4 game files (spel.dat) in {data}."));
	}

	let mut menu_files = NamedArchive::default();
	if !menu_files.open(&game, "MenuData/MenuRcs") {
		return fatal(&format!("Cannot read the menu's archive (MenuData/MenuRcs.IND/.IMG) in {game}."));
	}

	let opt = SysOptions { scale: args.scale, hidden: !args.screenshot.is_empty(), script: args.script.clone() };
	if !sys_init("A2 Racer 4", &opt) {
		// SAFETY: SDL_GetError returns a valid NUL-terminated string.
		let err = unsafe { CStr::from_ptr(sdl2_sys::SDL_GetError()).to_string_lossy().into_owned() };
		return fatal(&format!("Cannot open the window: {err}"));
	}

	let mut rcs = NamedArchive::default();
	if !rcs.open(&game, "rcs") {
		return fatal(&format!("Cannot read the race's archive (rcs.IND/.IMG) in {game}."));
	}
	let rcs = Rc::new(rcs);
	let r = if args.race >= 0 {
		// Testing: A2_AUTOPILOT=1 drives by itself.
		let ap = std::env::var("A2_AUTOPILOT").unwrap_or_default();
		let ro = RaceOptions {
			stage: args.race,
			league: args.league,
			car: args.car,
			autopilot: !ap.is_empty() && !ap.starts_with('0'),
			..Default::default()
		};
		race_main(&game, &rcs, &ro, None)
	} else if args.race_view >= 0 {
		race_view(&game, &rcs, args.race_view, args.league)
	} else {
		// The menu (Menu.exe), which runs the races.
		menu_main(&game, &rcs, &args.screenshot, &if args.save.is_empty() { pref_dir() } else { args.save.clone() })
	};
	sys_shutdown();
	r
}

fn main() {
	std::process::exit(run());
}
