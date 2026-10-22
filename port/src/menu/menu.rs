//! The menu (Menu.exe): its screens, and the hand-over to the race.

use std::cell::RefCell;
use std::collections::{BTreeMap, VecDeque};
use std::rc::Rc;
use std::sync::Arc;

use crate::audio::mixer::{Mixer, Sample, decode_wav};
use crate::gfx::png::png_write_rgba;
use crate::menu::agent::{AgentCharacter, AgentPlayer};
use crate::menu::canvas::{Canvas, TrueType};
use crate::menu::delphi::DelphiProgram;
use crate::menu::dfm::{DfmValue, load_form};
use crate::menu::film::{CinepakFilm, play_mpeg};
use crate::menu::forms::{Control, Extra, Form, MenuResources};
use crate::menu::savegame::{CharResult, Players, SaveGame};
use crate::menu::winhelp::WinHelp;
use crate::platform::sys::{
	KEY_DOWN, KEY_ENTER, KEY_ESCAPE, KEY_NONE, KEY_UP, SysInput, keyispressed, sys_open_url, sys_poll, sys_present,
	sys_quit_requested, sys_scripted, sys_set_screenshot, sys_sleep, sys_text_input, sys_ticks,
};
use crate::race::race::{RaceOptions, RaceResult, race_main};
use crate::res::archive::{NamedArchive, find_file_ci, latin1_bytes, read_file_ci};
use crate::res::image::{Image, rgb};
use crate::xvga::inifile::{IniFile, atoi, split_fields};

/// The graphics TData.ReadDefGraphics gives the shared button definitions.
const DATA_BUTTONS: [(&str, &str); 15] = [
	("gdfBtnPreviousItem", "back2"),
	("gdfBtnNextItem", "next2"),
	("gdfBtnClose", "end"),
	("gdfBtnHelp", "helpm"),
	("gdfBtnOkDlg", "okay"),
	("gdfBtnOkSingleDlg", "okas"),
	("gdfBtnNext", "nextm"),
	("gdfBtnNextSingle", "nexts"),
	("gdfBtnPrevious", "backm"),
	("gdfBtnCancelDlg", "cance"),
	("gdfBtnCloseDlg", "cross"),
	("gdfBtnYesDlg", "ryes"),
	("gdfBtnNoDlg", "lno"),
	("gdfRadioBtn", "radio"),
	("gdfCheckBox", "check"),
];

fn with(extra: &[(&str, &str)]) -> BTreeMap<String, String> {
	let mut m: BTreeMap<String, String> = extra.iter().map(|(k, v)| (k.to_string(), v.to_string())).collect();
	for (k, v) in DATA_BUTTONS {
		m.entry(k.to_string()).or_insert_with(|| v.to_string());
	}
	m
}

/// A picture named prefix + two-digit number (FUN_00489e40: "trname", 3 -> trname03.tga).
fn numbered(prefix: &str, n: i32, ext: &str) -> String {
	format!("{prefix}{n:02}{ext}")
}

fn int_list(s: &str) -> Vec<i32> {
	split_fields(s, ',').iter().filter(|f| !f.is_empty()).map(|f| atoi(f)).collect()
}

/// std::clamp: no panic when lo > hi.
fn clamp(v: i32, lo: i32, hi: i32) -> i32 {
	if v < lo {
		lo
	} else if hi < v {
		hi
	} else {
		v
	}
}

/// snprintf with a format from the game's ini files and int arguments (%d with flags,
/// width and precision).
fn format_ints(fmt: &str, args: &[i32]) -> String {
	let c: Vec<char> = fmt.chars().collect();
	let mut out = String::new();
	let mut next = args.iter();
	let mut i = 0;
	while i < c.len() {
		if c[i] != '%' {
			out.push(c[i]);
			i += 1;
			continue;
		}
		i += 1;
		if i < c.len() && c[i] == '%' {
			out.push('%');
			i += 1;
			continue;
		}
		let (mut left, mut zero, mut plus, mut space) = (false, false, false, false);
		while i < c.len() && "-0+ #".contains(c[i]) {
			match c[i] {
				'-' => left = true,
				'0' => zero = true,
				'+' => plus = true,
				' ' => space = true,
				_ => {}
			}
			i += 1;
		}
		let mut width = 0usize;
		while i < c.len() && c[i].is_ascii_digit() {
			width = width * 10 + c[i].to_digit(10).unwrap_or(0) as usize;
			i += 1;
		}
		let mut precision: Option<usize> = None;
		if i < c.len() && c[i] == '.' {
			i += 1;
			let mut p = 0usize;
			while i < c.len() && c[i].is_ascii_digit() {
				p = p * 10 + c[i].to_digit(10).unwrap_or(0) as usize;
				i += 1;
			}
			precision = Some(p);
		}
		while i < c.len() && "hlLqjzt".contains(c[i]) {
			i += 1;
		}
		if i >= c.len() {
			break;
		}
		let conv = c[i];
		i += 1;
		if conv != 'd' && conv != 'i' {
			continue;
		}
		let v = *next.next().unwrap_or(&0) as i64;
		let mut digits = v.unsigned_abs().to_string();
		if let Some(p) = precision {
			if p == 0 && v == 0 {
				digits.clear();
			}
			while digits.len() < p {
				digits.insert(0, '0');
			}
		}
		let sign = if v < 0 {
			"-"
		} else if plus {
			"+"
		} else if space {
			" "
		} else {
			""
		};
		let len = sign.len() + digits.len();
		if len >= width {
			out.push_str(sign);
			out.push_str(&digits);
		} else if left {
			out.push_str(sign);
			out.push_str(&digits);
			out.push_str(&" ".repeat(width - len));
		} else if zero && precision.is_none() {
			out.push_str(sign);
			out.push_str(&"0".repeat(width - len));
			out.push_str(&digits);
		} else {
			out.push_str(&" ".repeat(width - len));
			out.push_str(sign);
			out.push_str(&digits);
		}
	}
	out
}

/// fmt with its first %s replaced by s (none: as is).
fn replace_s(fmt: &str, s: &str) -> Option<String> {
	if fmt.contains("%s") { Some(fmt.replacen("%s", s, 1)) } else { None }
}

#[derive(Clone)]
#[allow(dead_code)]
struct StaticTrack {
	name: String,
	r#type: String,
	story: String,
	win: String,
	qualify: String,
	lose: String,
	stage: i32,
	laps: i32,
	/// per difficulty
	qualify_position: [i32; 3],
	/// CHASETIME set: escape the police
	chase: bool,
}

impl Default for StaticTrack {
	fn default() -> Self {
		Self {
			name: String::new(),
			r#type: String::new(),
			story: String::new(),
			win: String::new(),
			qualify: String::new(),
			lose: String::new(),
			stage: 0,
			laps: 0,
			qualify_position: [3, 3, 3],
			chase: false,
		}
	}
}

#[derive(Clone)]
#[allow(dead_code)]
struct StaticCharacter {
	name: String,
	story: String,
	win: String,
	locked: String,
	/// indexingame: the CAR_CFG.INI racer
	car: i32,
	accel: i32,
	speed: i32,
	handling: i32,
	brakes: i32,
}

impl Default for StaticCharacter {
	fn default() -> Self {
		Self {
			name: String::new(),
			story: String::new(),
			win: String::new(),
			locked: String::new(),
			car: 0,
			accel: 3,
			speed: 3,
			handling: 3,
			brakes: 3,
		}
	}
}

/// [TUNEUPS] SPECS<n>= name, price, and what it adds to speed, acceleration, brakes,
/// handling; TEXT<n>. 0 motor, 1 tyres, 2 ABS, 3 gearbox, 4 turbo oil.
#[derive(Clone, Default)]
#[allow(dead_code)]
struct TuneUp {
	name: String,
	text: String,
	price: i32,
	speed: i32,
	accel: i32,
	brakes: i32,
	handling: i32,
}

/// static.ini: the tracks ([TRACK<n>]) and characters ([char<n>]) the menu offers.
#[derive(Default)]
struct Static {
	tracks: BTreeMap<i32, StaticTrack>,
	chars: BTreeMap<i32, StaticCharacter>,
	quick_tracks: Vec<i32>,
	quick_chars: Vec<i32>,
	tour_tracks: Vec<i32>,
	tour_chars: Vec<i32>,
	quick_default_char: i32,
	tour_default_char: i32,
	/// [QUICKRACE] the places in CHARIX of the character to download (DOWNLOADCHARIX)
	/// and of the one the Tour unlocks (LOCKEDCHARIX: D.T. Harry).
	quick_download_ix: i32,
	quick_locked_ix: i32,
	download_section: String,
	tuneups: Vec<TuneUp>,
}

impl Static {
	fn load(&mut self, ini: &IniFile) {
		for i in 0..ini.get_int("GENERAL", "TRACKCOUNT", 10) {
			let sec = format!("TRACK{i}");
			let mut t = StaticTrack {
				name: ini.get(&sec, "NAME"),
				r#type: ini.get(&sec, "TYPE"),
				story: ini.get(&sec, "STORY"),
				win: ini.get(&sec, "WINTEXT"),
				qualify: ini.get(&sec, "QUALIFYTEXT"),
				lose: ini.get(&sec, "LOSETEXT"),
				stage: ini.get_int(&sec, "INDEXINGAME", i),
				laps: ini.get_int(&sec, "NRLAPS", 0),
				..Default::default()
			};
			let q = int_list(&ini.get(&sec, "QUALIFYPOSITION"));
			for k in 0..3.min(q.len()) {
				t.qualify_position[k] = q[k];
			}
			for c in int_list(&ini.get(&sec, "CHASETIME")) {
				t.chase = t.chase || c > 0;
			}
			self.tracks.insert(i, t);
		}
		for i in 0..ini.get_int("GENERAL", "CHARCOUNT", 9) {
			let sec = format!("char{i}");
			let c = StaticCharacter {
				name: ini.get(&sec, "name"),
				story: ini.get(&sec, "story"),
				win: ini.get(&sec, "winracetext"),
				locked: ini.get(&sec, "lockedtext"),
				car: ini.get_int(&sec, "indexingame", i),
				accel: ini.get_int(&sec, "accell", 3),
				speed: ini.get_int(&sec, "speed", 3),
				handling: ini.get_int(&sec, "handling", 3),
				brakes: ini.get_int(&sec, "brakes", 3),
			};
			self.chars.insert(i, c);
		}
		self.quick_tracks = int_list(&ini.get("QUICKRACE", "TRACKIX"));
		self.quick_chars = int_list(&ini.get("QUICKRACE", "CHARIX"));
		self.tour_tracks = int_list(&ini.get("TOURRACE", "TRACKIX"));
		self.tour_chars = int_list(&ini.get("TOURRACE", "CHARIX"));
		self.quick_default_char = ini.get_int("QUICKRACE", "DEFAULTCHAR", 0);
		self.tour_default_char = ini.get_int("TOURRACE", "DEFAULTCHAR", 0);
		self.quick_download_ix = ini.get_int("QUICKRACE", "DOWNLOADCHARIX", 7);
		self.quick_locked_ix = ini.get_int("QUICKRACE", "LOCKEDCHARIX", 5);
		self.download_section = ini.get_or("QUICKRACE", "DOWNLOADSECTION", "DOWNLOADCAR");
		let mut i = 0;
		while ini.has("TUNEUPS", &format!("SPECS{i}")) {
			let f = split_fields(&ini.get("TUNEUPS", &format!("SPECS{i}")), ',');
			let mut u = TuneUp { name: f.first().cloned().unwrap_or_default(), ..Default::default() };
			{
				let vals: [&mut i32; 5] = [&mut u.price, &mut u.speed, &mut u.accel, &mut u.brakes, &mut u.handling];
				for (k, v) in vals.into_iter().enumerate() {
					if k + 1 < f.len() {
						*v = atoi(&f[k + 1]);
					}
				}
			}
			u.text = ini.get("TUNEUPS", &format!("TEXT{i}"));
			self.tuneups.push(u);
			i += 1;
		}
	}

	/// tracks[t] as std::map's operator[] gives it.
	fn track(&mut self, t: i32) -> &StaticTrack {
		self.tracks.entry(t).or_default()
	}

	fn character(&mut self, c: i32) -> &StaticCharacter {
		self.chars.entry(c).or_default()
	}
}

/// The menu's voices and sounds (MenuRcs WAVs; TData's PlaySample: "<prefix><nn>_<k>.wav" or "<prefix><nn>.wav",
/// one of the variants that exist, picked at random).
struct MenuSound {
	rcs: Option<Rc<NamedArchive>>,
	/// MenuData, for the sounds beside the archive (unlock.wav)
	dir: String,
	voice: i32,
	/// the player's volumes, 0..1
	voices: f32,
	effects: f32,
	/// the last one said, in seconds
	length: f32,
	rnd: u32,
}

impl Default for MenuSound {
	fn default() -> Self {
		Self { rcs: None, dir: String::new(), voice: 0, voices: 1.0, effects: 1.0, length: 0.0, rnd: 1 }
	}
}

impl MenuSound {
	fn play(&mut self, file: &str) -> bool {
		let bytes = self
			.rcs
			.as_ref()
			.and_then(|r| r.read(file))
			.or_else(|| if !self.dir.is_empty() { read_file_ci(&self.dir, file) } else { None });
		let Some(bytes) = bytes else {
			return false;
		};
		let mx = Mixer::get();
		mx.stop(self.voice);
		let s = decode_wav(&bytes);
		self.length = match &s {
			Some(s) if s.rate > 0 => s.data.len() as f32 / s.rate as f32,
			_ => 0.0,
		};
		self.voice = mx.play(s, self.voices, false, 1.0, 0.0);
		self.voice != 0
	}

	/// A sound over whatever is being said (TData's PlaySound, e.g. PEEP).
	fn effect(&mut self, file: &str) {
		if let Some(bytes) = self.rcs.as_ref().and_then(|r| r.read(file)) {
			Mixer::get().play(decode_wav(&bytes), self.effects, false, 1.0, 0.0);
		}
	}

	fn say(&mut self, prefix: &str, n: i32) -> bool {
		let mut have: Vec<String> = Vec::new();
		let has = |f: &str| self.rcs.as_ref().is_some_and(|r| r.has(f));
		for k in 0..10 {
			let f = numbered(&numbered(prefix, n, "_"), k, ".wav");
			if has(&f) {
				have.push(f);
			}
		}
		// Those said one way only have no variants: CDW07_04 is cdw07_04.wav.
		if have.is_empty() && has(&numbered(prefix, n, ".wav")) {
			have.push(numbered(prefix, n, ".wav"));
		}
		if have.is_empty() {
			return false;
		}
		self.rnd = self.rnd.wrapping_mul(1103515245).wrapping_add(12345);
		let f = have[(self.rnd >> 8) as usize % have.len()].clone();
		self.play(&f)
	}
}

thread_local! {
	static SHOT_CANVAS: RefCell<Option<Rc<RefCell<Canvas>>>> = const { RefCell::new(None) };
}

fn save_shot(path: &str) {
	SHOT_CANVAS.with(|s| {
		if let Some(cv) = &*s.borrow() {
			if let Ok(cv) = cv.try_borrow() {
				png_write_rgba(path, &cv.px, cv.w, cv.h);
			}
		}
	});
}

#[derive(Clone, Copy, PartialEq, Eq)]
enum Screen {
	Main,
	Difficulty,
	Quick,
	Race,
	Results,
	Character,
	CurrentChar,
	Track,
	Garage,
	TrackIntro,
	TourRace,
	Qualify,
	Win,
	Lose,
	WinChase,
	LoseChase,
	WinFinal,
	Quit,
}

/// The menu's forms, for the handlers and the dialog stack to name.
#[derive(Clone, Copy, PartialEq, Eq)]
enum F {
	Main,
	Diff,
	Qr,
	Unlock,
	Results,
	Character,
	Current,
	Track,
	Garage,
	NoMoney,
	Qualify,
	Win,
	Lose,
	WinChase,
	LoseChase,
	WinFinal,
	Intro,
	NewP,
	Player,
	DeleteP,
	Options,
	KeySet,
	JoySet,
	WheelSet,
	StartInfo,
	StartInfoKb,
	CloseDlg,
	DoubleKeys,
	HighScore,
	Internet,
}

/// What a form's handler does; the handlers queue these, and the menu runs them as soon
/// as the form's input or click returns (the C++ handlers run inside it).
#[derive(Clone)]
enum Act {
	Quick(bool),
	Go(Screen),
	ShowCurrent,
	Difficulty(i32),
	DiffNext,
	StepTrack(i32),
	StepChar(i32),
	CloseDialog,
	OpenDialog(F),
	StepTourChar(i32),
	CharNext,
	ChooseChar,
	CurrentNext,
	PrevTrack,
	NextTrack,
	TrackNext,
	TrackScreen,
	StepTuneUp(usize),
	BuyTuneUp,
	Advance,
	WinFinalNext,
	IntroSkip,
	OpenPlayers,
	Pick(String),
	PlayersCancel,
	DeletePlayer,
	DeleteOk,
	NewPlayerDone(bool),
	SetControl(i32),
	Click(F, String),
	ShowVideo,
	OpenOptions,
	SliderSound,
	OptionsOk,
	OptionsCancel,
	Nothing,
	CaptureKey(i32),
	KeyDefaults,
	KeysOk,
	KeysCancel,
	SensitivityOk(F),
	Controls,
	StartInfoOk(F),
	RaceWithInfo(Screen),
	AskClose,
	CloseDlgOk,
	HighScoreOk,
	InternetOk,
	Help(F),
}

/// Dialogs shown over the screen (ShowModal), the last one on top; typing goes to its
/// text field.
#[derive(Clone, Copy)]
struct Shown {
	form: F,
	typing: bool,
}

/// TfrmWinNormal, TfrmQualify, TfrmLoseNormal: the character's own words (the winner's
/// when qualified), then after timSample's 4.5 s the host's about the track.
struct Later {
	prefix: String,
	n: i32,
	on: Screen,
	r#in: f32,
}

#[derive(Default)]
struct Balloon {
	open: bool,
	title: String,
	items: Vec<(String, i32)>,
	/// each item wrapped
	lines: Vec<Vec<String>>,
	title_lines: Vec<String>,
	x: i32,
	y: i32,
	w: i32,
	h: i32,
	hover: i32,
}

#[derive(Default)]
struct HelpTopic {
	open: bool,
	title: String,
	lines: Vec<String>,
	scroll: i32,
}

const HELP_PX: f32 = 13.0;
const TOPIC_PX: f32 = 15.0;
const TOPIC_W: i32 = 600;
const TOPIC_H: i32 = 440;
const TOPIC_X: i32 = (800 - TOPIC_W) / 2;
const TOPIC_Y: i32 = (600 - TOPIC_H) / 2;

/// Control type: 0 keyboard, 1 joystick, 2 joypad, 3 wheel.
const CONTROL_RADIO: [&str; 4] = ["optKeyboard", "optJoystick", "optJoyPad", "optWheel"];
const CONTROL_PICTURE: [&str; 4] = ["OPT_KEYB.bmp", "OPT_JOYS.bmp", "OPT_GPAD.bmp", "OPT_WHEE.bmp"];
const KEY_BUTTONS: [&str; 7] = ["btnGas", "btnBreak", "btnLeft", "btnRight", "btnTurbo", "btnParkingBrake", "btnHorn"];

fn caption(f: &mut Form, name: &str, text: &str) {
	if let Some(c) = f.get(name) {
		c.caption = text.to_string();
		c.wrap = true;
	}
}

fn checked(f: &mut Form, n: &str) -> bool {
	f.get(n).is_some_and(|c| c.checked)
}

fn set_checked(f: &mut Form, n: &str, on: bool) {
	if let Some(c) = f.get(n) {
		c.checked = on;
	}
}

fn anchor(f: &mut Form, n: &str) -> Option<(i32, i32)> {
	f.get(n).map(|c| (c.x, c.y))
}

fn ratings(f: &mut Form, res: &mut MenuResources, cc: &StaticCharacter) {
	f.extras.clear();
	let (Some(a00), Some(a01), Some(a10)) =
		(anchor(f, "lblAncInd00"), anchor(f, "lblAncInd01"), anchor(f, "lblAncInd10"))
	else {
		return;
	};
	let values = [cc.speed, cc.accel, cc.handling, cc.brakes];
	for row in 0..4 {
		for k in 0..values[row as usize].min(9) {
			f.extras.push(Extra {
				img: res.image("redin_up.tga"),
				x: a00.0 + k * (a01.0 - a00.0),
				y: a00.1 + row * (a10.1 - a00.1),
			});
		}
	}
}

fn set_look(c: &mut Control, res: &mut MenuResources, prefix: &str) {
	const STATES: [&str; 5] = ["_up", "_hi", "_do", "_fo", "_di"];
	for k in 0..5 {
		c.look[k] = res.image(&format!("{prefix}{}.tga", STATES[k]));
	}
	c.region = res.image(&format!("{prefix}_re.bmp"));
	if let Some(up) = &c.look[0] {
		c.w = up.width;
		c.h = up.height;
	}
}

fn list_index(list: &[i32], v: i32, def: usize) -> usize {
	list.iter().position(|&x| x == v).unwrap_or(def)
}

struct Menu {
	data_dir: String,
	menu_dir: String,
	race_rcs: Rc<NamedArchive>,
	res: MenuResources,
	font: Rc<TrueType>,
	menu_ini: IniFile,
	static_ini: IniFile,
	anim_ini: IniFile,
	agent_ini: IniFile,
	info: Static,
	save: SaveGame,
	cv: Rc<RefCell<Canvas>>,
	queue: Rc<RefCell<VecDeque<Act>>>,

	main: Form,
	diff: Form,
	qr: Form,
	unlockf: Form,
	results: Form,
	character: Form,
	currentf: Form,
	trackf: Form,
	garage: Form,
	nomoney: Form,
	qualify: Form,
	win: Form,
	lose: Form,
	win_chase: Form,
	lose_chase: Form,
	win_final: Form,
	intro: Form,
	newp: Form,
	playerf: Form,
	deletep: Form,
	options: Form,
	keyset: Form,
	joyset: Form,
	wheelset: Form,
	startinfo: Form,
	startinfo_kb: Form,
	closedlg: Form,
	doublekeys: Form,
	highscore: Form,
	internet: Form,

	quick: bool,
	screen: Screen,
	voice: MenuSound,
	dialogs: Vec<Shown>,
	/// the track records; the user's menu.ini once loaded
	port_ini: IniFile,
	port_ini_path: String,
	menu_music: Option<Arc<Sample>>,
	music_voice: i32,
	/// not before the intro film
	music_on: bool,
	difficulty: i32,
	char_chosen: bool,
	track_ix: usize,
	char_ix: usize,
	cycle: i32,
	next_cycle: u32,
	last: RaceResult,
	tour_char: usize,
	tour_ix: usize,
	char_leave: f32,
	track_voice_in: f32,
	/// the last race was won or qualified (TData flag 2)
	just_qualified: bool,
	tuneup: usize,
	intro_leave: f32,
	/// the race just won finished the Tour
	tour_done: bool,
	later: Later,
	final_sample: i32,
	final_next: f32,
	/// ... and the next Quick Race unlocks D.T. Harry
	unlock_due: bool,
	final_film: CinepakFilm,
	final_film_on: bool,
	final_film_start: u32,
	/// win_final.extras' entry showing the film's frame
	final_frame: Option<usize>,
	players: Players,
	current: i32,
	slot_player: BTreeMap<String, i32>,
	/// the new player's name was asked from the list
	newp_from_players: bool,
	backup: BTreeMap<i32, Vec<u8>>,
	backup_current: i32,
	/// the settings being changed
	edit: SaveGame,
	slider_none: i32,
	key_names: Vec<(i32, String)>,
	key_edit: [i32; 7],
	capturing: i32,
	start_race: Option<Screen>,
	record_track: i32,
	hunny: Rc<AgentCharacter>,
	agent: AgentPlayer,
	helpfile: WinHelp,
	balloon: Balloon,
	topic: HelpTopic,
}

macro_rules! forms {
	($($v:ident => $field:ident),* $(,)?) => {
		impl Menu {
			fn form(&mut self, f: F) -> &mut Form {
				match f {
					$(F::$v => &mut self.$field,)*
				}
			}
			fn form_ref(&self, f: F) -> &Form {
				match f {
					$(F::$v => &self.$field,)*
				}
			}
		}
	};
}

forms! {
	Main => main, Diff => diff, Qr => qr, Unlock => unlockf, Results => results, Character => character,
	Current => currentf, Track => trackf, Garage => garage, NoMoney => nomoney, Qualify => qualify, Win => win,
	Lose => lose, WinChase => win_chase, LoseChase => lose_chase, WinFinal => win_final, Intro => intro,
	NewP => newp, Player => playerf, DeleteP => deletep, Options => options, KeySet => keyset, JoySet => joyset,
	WheelSet => wheelset, StartInfo => startinfo, StartInfoKb => startinfo_kb, CloseDlg => closedlg,
	DoubleKeys => doublekeys, HighScore => highscore, Internet => internet,
}

impl Menu {
	fn on(&self, act: Act) -> Box<dyn FnMut()> {
		let q = self.queue.clone();
		Box::new(move || q.borrow_mut().push_back(act.clone()))
	}

	fn handle(&mut self, f: F, name: &str, act: Act) {
		let h = self.on(act);
		self.form(f).handlers.insert(name.to_string(), h);
	}

	fn drain(&mut self) {
		loop {
			let act = self.queue.borrow_mut().pop_front();
			let Some(act) = act else {
				break;
			};
			self.dispatch(act);
		}
	}

	fn click(&mut self, f: F, name: &str) {
		self.form(f).click(name);
		self.drain();
	}

	fn input(&mut self, f: F, inp: &SysInput) {
		self.form(f).input(inp);
		self.drain();
	}

	fn load(&mut self, f: F, klass: &str, extra: &[(&str, &str)]) -> bool {
		let prefixes = with(extra);
		let mut form = std::mem::take(self.form(f));
		let ok = form.load(&mut self.res, klass, &prefixes);
		*self.form(f) = form;
		ok
	}

	fn set_graphic(&mut self, f: F, control: &str, name: &str) {
		let img = self.res.image(name);
		if let Some(c) = self.form(f).get(control) {
			c.picture = img;
		}
	}

	fn open_dialog(&mut self, d: F, typing: bool) {
		self.dialogs.push(Shown { form: d, typing });
		sys_text_input(typing);
	}

	fn close_dialog(&mut self) {
		self.dialogs.pop();
		sys_text_input(self.dialogs.last().is_some_and(|s| s.typing));
	}

	fn show_mode(&mut self) {
		let quick = self.quick;
		if let Some(c) = self.main.get("optQuickRace") {
			c.checked = quick;
		}
		if let Some(c) = self.main.get("optTour") {
			c.checked = !quick;
		}
		self.set_graphic(F::Main, "imgItem", if quick { "quick.tga" } else { "tour.tga" });
	}

	/// The track records (menu.ini [HIGHSCORES]: <track>= best lap in ms, name<track>=);
	/// the original keeps them in its own menu.ini, the port in the user's folder (seeded
	/// from the game's).
	fn record(&self, t: i32) -> Option<(i32, String)> {
		let k = t.to_string();
		let src = if self.port_ini.has("HIGHSCORES", &k) { &self.port_ini } else { &self.menu_ini };
		let ms = src.get_int("HIGHSCORES", &k, 0);
		let name = src.get("HIGHSCORES", &format!("name{k}"));
		if ms > 0 { Some((ms, name)) } else { None }
	}

	/// [FORMAT] TIME=%d:%.2d:%.2d: minutes, seconds, hundredths.
	fn format_ms(&self, ms: i32) -> String {
		let fmt = self.menu_ini.get_or("FORMAT", "TIME", "%d:%.2d:%.2d");
		format_ints(&fmt, &[ms / 60000, ms / 1000 % 60, ms / 10 % 100])
	}

	fn show_record(&mut self, f: F, t: i32) {
		let rec = self.record(t);
		let time = rec.as_ref().map(|r| self.format_ms(r.0)).unwrap_or_default();
		let name = rec.map(|r| r.1).unwrap_or_default();
		if let Some(c) = self.form(f).get("lblTime") {
			c.caption = time;
			c.visible = true;
		}
		if let Some(c) = self.form(f).get("lblRecName") {
			c.caption = name;
			c.visible = true;
		}
	}

	/// TDaviSoundBuffer_LoadMusic: MenuData/menumsc.wav over the menu, looping, at the
	/// player's music volume.
	fn start_music(&mut self) {
		if self.menu_music.is_none() {
			if let Some(bytes) = read_file_ci(&self.data_dir, "MenuData/menumsc.wav") {
				self.menu_music = decode_wav(&bytes);
			}
		}
		let v = if self.save.flags[SaveGame::MUSIC_ON] != 0 { self.save.music_volume as f32 / 100.0 } else { 0.0 };
		if self.music_voice != 0 && Mixer::get().playing(self.music_voice) {
			Mixer::get().set(self.music_voice, v, 1.0, 0.0);
		} else if self.menu_music.is_some() && v > 0.0 {
			self.music_voice = Mixer::get().play(self.menu_music.clone(), v, true, 1.0, 0.0);
		}
	}

	fn stop_music(&mut self) {
		if self.music_voice != 0 {
			Mixer::get().stop(self.music_voice);
			self.music_voice = 0;
		}
	}

	fn apply_volumes(&mut self) {
		self.voice.voices = self.save.voices_volume as f32 / 100.0;
		self.voice.effects =
			if self.save.flags[SaveGame::FX_ON] != 0 { self.save.fx_volume as f32 / 100.0 } else { 0.0 };
		if self.music_on {
			self.start_music();
		}
	}

	/// What the race takes from the player's settings (game.ini [INPUT], Raser.ini [SOUND]
	/// in the original).
	fn player_race(&self, ro: &mut RaceOptions) {
		let save = &self.save;
		ro.keys[0] = save.keys[0];
		ro.keys[1] = save.keys[1];
		ro.keys[2] = save.keys[2];
		ro.keys[3] = save.keys[3];
		ro.keys[4] = save.keys[4];
		ro.keys[5] = save.keys[5];
		ro.keys[6] = save.keys[6];
		ro.device = save.control_type & 3;
		ro.sensitivity = if ro.device == 3 { save.wheel_sensitivity } else { save.joy_sensitivity };
		// Quick Race: no money, a full tank (WriteToInis).
		ro.money = 0;
		ro.turbo = 100.0;
		ro.music_volume = if save.flags[SaveGame::MUSIC_ON] != 0 { save.music_volume as f32 / 100.0 } else { 0.0 };
		ro.sfx_volume = if save.flags[SaveGame::FX_ON] != 0 { save.fx_volume as f32 / 100.0 } else { 0.0 };
	}

	fn show_difficulty(&mut self) {
		const OPTS: [&str; 3] = ["optEasy", "optMedium", "optHard"];
		for k in 0..3 {
			let on = k as i32 == self.difficulty;
			if let Some(c) = self.diff.get(OPTS[k]) {
				c.checked = on;
			}
		}
		self.set_graphic(F::Diff, "imgItem", &numbered("diffic", self.difficulty, ".tga"));
		self.set_graphic(F::Diff, "imgItemName", if self.quick { "headquic.tga" } else { "headtour.tga" });
	}

	/// What is locked (FUN_0049c78c, FUN_0049ca08): a track whose stage files are not all
	/// there (the download race), a chase until the player's Tour has got to it; the
	/// character to download until L0_ANIM.INI has it, D.T. Harry until the Tour is won.
	fn track_open(&mut self, ix: usize) -> bool {
		let qt = self.info.quick_tracks[ix];
		let tr = self.info.track(qt).clone();
		for ext in [".cmp", ".dmp", ".ini", ".omp", ".pmp", ".pth", ".rmp"] {
			if find_file_ci(&self.data_dir, &format!("etappe{}{ext}", tr.stage)).is_empty() {
				return false;
			}
		}
		if !tr.chase {
			return true;
		}
		let mut at = 0;
		while at < self.info.tour_tracks.len() && self.info.tour_tracks[at] != qt {
			at += 1;
		}
		self.save.chars.iter().any(|cr: &CharResult| cr.next_track as usize >= at)
	}

	fn char_open(&self, ix: usize) -> bool {
		if ix as i32 == self.info.quick_download_ix {
			return self.anim_ini.get_int(&self.info.download_section, "Count", 0) > 0;
		}
		if ix as i32 == self.info.quick_locked_ix {
			return self.save.unlock_popup_shown != 0;
		}
		true
	}

	fn update_next(&mut self) {
		let on = !self.info.quick_tracks.is_empty()
			&& !self.info.quick_chars.is_empty()
			&& self.track_open(self.track_ix % self.info.quick_tracks.len())
			&& self.char_open(self.char_ix % self.info.quick_chars.len());
		if let Some(c) = self.qr.get("btnNext") {
			c.enabled = on;
		}
	}

	fn show_track(&mut self) {
		if self.info.quick_tracks.is_empty() {
			return;
		}
		let n = self.info.quick_tracks.len();
		let t = self.info.quick_tracks[self.track_ix % n];
		let tr = self.info.track(t).clone();
		self.set_graphic(F::Qr, "imgTrackName", &numbered("trname", t, ".tga"));
		if let Some(c) = self.qr.get("lblType") {
			c.caption = tr.r#type.clone();
		}
		self.show_record(F::Qr, t);
		let open = self.track_open(self.track_ix % n);
		let locked = self.menu_ini.get("MENUSTRINGS", if tr.chase { "7" } else { "2" });
		if let Some(c) = self.qr.get("lblLocked") {
			c.visible = !open;
			c.caption = locked;
		}
		self.update_next();
		self.set_graphic(F::Qr, "imgTrack1", &(numbered("qtc", t, "") + &numbered("_", self.cycle, ".tga")));
		if let Some(c) = self.qr.get("imgTrack2") {
			c.visible = false;
		}
	}

	fn show_char(&mut self) {
		if self.info.quick_chars.is_empty() {
			return;
		}
		let n = self.info.quick_chars.len();
		let ch = self.info.quick_chars[self.char_ix % n];
		self.set_graphic(F::Qr, "imgCharName", &numbered("chara_", ch, ".tga"));
		self.set_graphic(F::Qr, "imgItem", &numbered("qr_CH", ch, ".tga"));
		// The character's speed, acceleration, handling and brakes as rows of dots, from
		// the anchors lblAncInd00 (the first), 01 (the next across) and 10 (the next row).
		let cc = self.info.character(ch).clone();
		ratings(&mut self.qr, &mut self.res, &cc);
		let open = self.char_open(self.char_ix % n);
		if let Some(c) = self.qr.get("lblCharLocked") {
			c.visible = !open;
			c.caption = cc.locked.clone();
		}
		self.update_next();
	}

	/// The results (TfrmResults): the field in finishing order, portraits and times
	/// (the winner's, then the others' differences), the player's row highlighted, the
	/// winner's picture; QUICKRES.bmp after a quick race.
	fn show_results(&mut self) {
		self.results.extras.clear();
		let pt = self.results.get("lblTopImage").cloned();
		let p2 = self.results.get("lbl2ndImage").cloned();
		let pm = self.results.get("lblTime").cloned();
		let pf = self.results.get("lblFocus").cloned();
		// Copies: adding the rows below moves the controls.
		let (Some(top), Some(second), Some(time), Some(focus)) = (pt, p2, pm, pf) else {
			return;
		};
		if self.last.order.is_empty() {
			return;
		}
		let step = second.y - top.y;
		self.set_graphic(F::Results, "imgItem", &numbered("win_ch", self.last.order[0].car, ".tga"));
		for k in 0..self.last.order.len() {
			let e = self.last.order[k].clone();
			let img = self.res.image(&numbered("res_ch", e.car, ".tga"));
			self.results.extras.push(Extra { img, x: top.x, y: top.y + step * k as i32 });
			let t = ((if k == 0 { e.time } else { e.time - self.last.order[0].time }) * 100.0 + 0.5) as i32;
			let buf = format!("{}{}:{:02}:{:02}", if k != 0 { "+" } else { "" }, t / 6000, t / 100 % 60, t % 100);
			let mut lbl = time.clone();
			lbl.name = format!("row{k}");
			lbl.caption = buf;
			lbl.y = time.y + step * k as i32;
			// The template label itself is hidden; the rows the program makes show.
			lbl.visible = true;
			self.results.controls.push(lbl);
		}
		let img = self.res.image("focus.tga");
		let position = self.last.position;
		if let Some(f) = self.results.get("imgFocus") {
			f.picture = img;
			f.x = focus.x;
			f.y = focus.y + step * (position - 1);
		}
	}

	fn tour_ch(&self) -> i32 {
		if self.info.tour_chars.is_empty() {
			0
		} else {
			self.info.tour_chars[self.tour_char % self.info.tour_chars.len()]
		}
	}

	fn tour_tr(&self) -> i32 {
		if self.info.tour_tracks.is_empty() {
			0
		} else {
			self.info.tour_tracks[self.tour_ix % self.info.tour_tracks.len()]
		}
	}

	fn cr(&mut self) -> &mut CharResult {
		let n = self.save.chars.len();
		&mut self.save.chars[self.tour_char % n]
	}

	fn show_character(&mut self) {
		let ch = self.tour_ch();
		self.set_graphic(F::Character, "imgItemName", &numbered("chara_", ch, ".tga"));
		self.set_graphic(F::Character, "imgItem", &numbered("ch_", ch, ".tga"));
		let cc = self.info.character(ch).clone();
		caption(&mut self.character, "lblTextBlock", &cc.story);
		ratings(&mut self.character, &mut self.res, &cc);
	}

	/// TfrmTrack.FormShow: the character's next undriven track; once the Tour is done, the
	/// track chosen last. Testing: A2_TOUR_START=<n> puts the character on the n-th track.
	fn choose_tour_track(&mut self) {
		let n = self.info.tour_tracks.len();
		if let Ok(v) = std::env::var("A2_TOUR_START") {
			self.cr().next_track = clamp(atoi(&v), 0, n as i32 - 1);
		}
		let next = self.cr().next_track;
		self.tour_ix =
			if (next as usize) < n { next as usize } else { clamp(self.save.tour_track, 0, n as i32 - 1) as usize };
	}

	/// The character so far (TfrmCurrentChar): portrait, name, money and the Tour's tracks
	/// driven (butbigci), with "Kies ander karakter" (newch) back to the choice.
	fn show_current(&mut self) {
		let ch = self.tour_ch();
		let cr = self.cr().clone();
		self.set_graphic(F::Current, "imgItemName", &numbered("chara_", ch, ".tga"));
		self.set_graphic(F::Current, "imgItem", &numbered("ch_", ch, ".tga"));
		if let Some(c) = self.currentf.get("lblPoints") {
			c.caption = cr.money.to_string();
		}
		self.currentf.extras.clear();
		let d0 = anchor(&mut self.currentf, "lblAncTrackInd00");
		let d1 = anchor(&mut self.currentf, "lblAncTrackInd01");
		if let (Some(d0), Some(d1)) = (d0, d1) {
			for k in 0..cr.next_track.min(self.info.tour_tracks.len() as i32) {
				let img = self.res.image("butbigci.tga");
				self.currentf.extras.push(Extra { img, x: d0.0 + k * (d1.0 - d0.0), y: d0.1 });
			}
		}
		let _ = self.voice.say("aud", 3) || self.voice.play("aud3.wav");
		self.screen = Screen::CurrentChar;
	}

	/// The next track (TfrmTrack): its name, preview pictures and story, with Miss
	/// Honeybunny telling about it (CTI07_<track>).
	fn show_tour_track(&mut self) {
		let t = self.tour_tr();
		let tr = self.info.track(t).clone();
		self.set_graphic(F::Track, "imgTrackName", &numbered("trname", t, ".tga"));
		self.set_graphic(F::Track, "imgTrack1", &(numbered("ttc", t, "") + &numbered("_", self.cycle, ".tga")));
		// FUN_00499d68: Miss Honeybunny tells about a race, the shadow about a chase;
		// tmrSound's 1.5 s later (CTI07_<track>, CTI08_<track>).
		self.set_graphic(F::Track, "imgItem", "hunny.tga");
		self.set_graphic(F::Track, "imgShadow", "shadow.tga");
		if let Some(c) = self.trackf.get("imgItem") {
			c.visible = !tr.chase;
		}
		if let Some(c) = self.trackf.get("imgShadow") {
			c.visible = tr.chase;
		}
		self.track_voice_in = 1.5;
		if let Some(c) = self.trackf.get("imgTrack2") {
			c.visible = false;
		}
		if let Some(c) = self.trackf.get("lblType") {
			c.caption = tr.r#type.clone();
		}
		caption(&mut self.trackf, "lblTextBlock", &tr.story);
		// "%s Plaats" with the qualifying place (menu.ini [ordinalnumbers]); none for a chase.
		let qualify = if !tr.chase {
			let q = tr.qualify_position[clamp(self.difficulty, 0, 2) as usize] + 1;
			let fmt = self.menu_ini.get("MENUSTRINGS", "14");
			let ord = self.menu_ini.get("ordinalnumbers", &q.to_string());
			replace_s(&fmt, &ord).unwrap_or(ord)
		} else {
			String::new()
		};
		if let Some(c) = self.trackf.get("lblQualify") {
			c.caption = qualify;
		}
		// The stages driven so far, and this one, on the row of dots.
		self.trackf.extras.clear();
		let driven = self.cr().next_track.max(0) as usize;
		let d0 = anchor(&mut self.trackf, "lblAncTrackInd00");
		let d1 = anchor(&mut self.trackf, "lblAncTrackInd01");
		if let (Some(d0), Some(d1)) = (d0, d1) {
			for k in 0..self.info.tour_tracks.len() {
				if k < driven || k == self.tour_ix {
					let img = self.res.image("redin_up.tga");
					self.trackf.extras.push(Extra { img, x: d0.0 + k as i32 * (d1.0 - d0.0), y: d0.1 });
				}
			}
		}
		// Earlier tracks can be driven again, later ones not yet (FUN_00499f80).
		let last = driven.min(self.info.tour_tracks.len().wrapping_sub(1));
		let tour_ix = self.tour_ix;
		if let Some(c) = self.trackf.get("btnPrevTrack") {
			c.visible = tour_ix > 0;
		}
		if let Some(c) = self.trackf.get("btnNextTrack") {
			c.visible = tour_ix < last;
		}
		self.show_record(F::Track, t);
		if let Some(c) = self.trackf.get("imgFocus") {
			c.visible = false;
		}
	}

	/// The garage (TfrmGarage): tune-ups for this race, paid from the character's money;
	/// turbo oil (10 per buy, up to 100) stays. The dots: speed, acceleration, handling,
	/// brakes as the character has them with what is bought (red), what this tune-up would
	/// add (green, klrondje) or take (blue, blind_up); then the turbo.
	fn show_garage(&mut self) {
		let cr = self.cr().clone();
		let ch = self.tour_ch();
		let cc = self.info.character(ch).clone();
		let tuneup = self.tuneup;
		self.set_graphic(F::Garage, "imgItemName", &numbered("tune_", tuneup as i32, ".tga"));
		self.set_graphic(F::Garage, "imgItem", &numbered("tuneup", tuneup as i32, ".tga"));
		let u = self.info.tuneups.get(tuneup).cloned();
		caption(&mut self.garage, "lblTextBlock", u.as_ref().map_or("", |u| &u.text));
		if let Some(c) = self.garage.get("lblPoints") {
			c.caption = cr.money.to_string();
		}
		let fmt = self.menu_ini.get_or("MENUSTRINGS", "13", "%s");
		if let Some(c) = self.garage.get("lblPrice") {
			let price = u.as_ref().map_or(0, |u| u.price).to_string();
			c.caption = replace_s(&fmt, &price).unwrap_or(price);
		}
		let mut have = [cc.speed, cc.accel, cc.handling, cc.brakes];
		for k in 0..4.min(self.info.tuneups.len()) {
			if cr.upgrades[k] == 0 {
				continue;
			}
			let t = &self.info.tuneups[k];
			have[0] += t.speed;
			have[1] += t.accel;
			have[2] += t.handling;
			have[3] += t.brakes;
		}
		let mut add = [0; 4];
		if let Some(u) = &u {
			if tuneup < 4 && cr.upgrades[tuneup] == 0 {
				add[0] = u.speed;
				add[1] = u.accel;
				add[2] = u.handling;
				add[3] = u.brakes;
			}
		}
		self.garage.extras.clear();
		let a00 = anchor(&mut self.garage, "lblAncInd00");
		let a01 = anchor(&mut self.garage, "lblAncInd01");
		let a10 = anchor(&mut self.garage, "lblAncInd10");
		let row = |m: &mut Menu, r: i32, value: i32, delta: i32| {
			let (Some(a00), Some(a01), Some(a10)) = (a00, a01, a10) else {
				return;
			};
			for j in 0..9 {
				let img = if j < value {
					Some(if j < value + delta { "redin_up.tga" } else { "blind_up.tga" })
				} else if j < value + delta {
					Some("klrondje.tga")
				} else {
					None
				};
				if let Some(img) = img {
					let img = m.res.image(img);
					m.garage.extras.push(Extra { img, x: a00.0 + j * (a01.0 - a00.0), y: a00.1 + r * (a10.1 - a00.1) });
				}
			}
		};
		for r in 0..4 {
			row(self, r, have[r as usize], add[r as usize]);
		}
		row(self, 4, (cr.turbo * 9 + 50) / 100, if tuneup == 4 { 1 } else { 0 });
		if let Some(c) = self.garage.get("btnBuyTuneUp") {
			c.enabled = if tuneup == 4 { cr.turbo < 100 } else { tuneup < 4 && cr.upgrades[tuneup] == 0 };
		}
	}

	fn say_later(&mut self, prefix: &str, n: i32, on: Screen) {
		self.later = Later { prefix: prefix.to_string(), n, on, r#in: 4.5 };
	}

	fn advance(&mut self) {
		let next = self.cr().next_track as usize;
		self.tour_ix = next.min(self.info.tour_tracks.len().wrapping_sub(1));
		if self.tour_done {
			self.tour_done = false;
			let ch = self.tour_ch();
			// The winner's film (medWinner: CH<nn>.avi between the anchors); without it, the
			// character's winning picture where WinNormal has it.
			self.win_final.extras.clear();
			self.final_frame = None;
			self.final_film_on = self.final_film.open(&find_file_ci(&self.menu_dir, &numbered("CH", ch, ".avi")));
			let tl = anchor(&mut self.win_final, "lblAncTopLeft");
			let br = anchor(&mut self.win_final, "lblAncBottomRight");
			let at = anchor(&mut self.win, "imgItem");
			if let (true, Some(tl), Some(br)) = (self.final_film_on, tl, br) {
				self.final_film_start = sys_ticks();
				let mut frame = Image::default();
				self.final_film.seek(0, &mut frame);
				self.final_frame = Some(self.win_final.extras.len());
				self.win_final.extras.push(Extra {
					img: Some(Rc::new(frame)),
					x: (tl.0 + br.0 - self.final_film.width()) / 2,
					y: (tl.1 + br.1 - self.final_film.height()) / 2,
				});
			} else if let Some(at) = at {
				let img = self.res.image(&numbered("win_ch", ch, ".tga"));
				self.win_final.extras.push(Extra { img, x: at.0, y: at.1 });
			}
			let win = self.info.character(ch).win.clone();
			caption(&mut self.win_final, "lblTextBlock", &win);
			// FormShowScreen, timSample1, timSample2: D.T. Harry (CDW07_04), the winner
			// (CCW08_<character>), then CCW08_05, each 1.5 s after the last ended.
			self.final_sample = 0;
			self.final_next = 0.0;
			self.screen = Screen::WinFinal;
		} else {
			self.intro_leave = 3.5;
			self.voice.play("nexttr.wav");
			self.screen = Screen::TrackIntro;
		}
	}

	fn tour_outcome(&mut self, r: &RaceResult) {
		let t = self.tour_tr();
		let ch = self.tour_ch();
		let tr = self.info.track(t).clone();
		let place = r.position.max(1);
		let qualify_position = tr.qualify_position[clamp(self.difficulty, 0, 2) as usize];
		// FillRaceResultsTour: a won or qualified race opens the next track (first
		// place also pays FirstPlaceBonus); the last one ends the Tour.
		let through = if tr.chase { r.finished } else { r.finished && place - 1 <= qualify_position };
		self.just_qualified = through;
		// The tune-ups last one race; the money and turbo oil left come back with a
		// finished race (TGameIni: [PLAYER] MONEY, TURBO_AMOUNT).
		if r.finished {
			let cr = self.cr();
			cr.upgrades[..4].fill(0);
			cr.money = r.money;
			cr.turbo = r.turbo as i32;
		}
		if through && self.cr().next_track as usize == self.tour_ix {
			self.cr().next_track += 1;
			self.tour_done = self.cr().next_track as usize >= self.info.tour_tracks.len();
			self.unlock_due = self.unlock_due || (self.tour_done && tr.chase);
		}
		if r.finished && place == 1 && !tr.chase {
			let bonus = self.static_ini.get_int("GAMEVALUES", "FirstPlaceBonus", 2500);
			self.cr().money += bonus;
		}
		self.save.tour_track = self.tour_ix as i32;
		self.store_player();
		if tr.chase {
			let f = if r.finished { F::WinChase } else { F::LoseChase };
			self.set_graphic(f, "imgTrackName", &numbered("trname", t, ".tga"));
			self.set_graphic(f, "imgItem", if r.finished { "copangry.tga" } else { "cophappy.tga" });
			caption(self.form(f), "lblTextBlock", if r.finished { &tr.win } else { &tr.lose });
			self.voice.say(if r.finished { "CDW05_" } else { "CDL05_" }, t);
			self.screen = if r.finished { Screen::WinChase } else { Screen::LoseChase };
			return;
		}
		let winner = if r.order.is_empty() { ch } else { r.order[0].car };
		if r.finished && place == 1 {
			self.set_graphic(F::Win, "imgTrackName", &numbered("trname", t, ".tga"));
			self.set_graphic(F::Win, "imgItem", &numbered("win_ch", ch, ".tga"));
			caption(&mut self.win, "lblTextBlock", &tr.win);
			if let Some(c) = self.win.get("lblBonus") {
				c.visible = false; // the prize money: not kept yet
			}
			self.voice.say("CDW", ch);
			self.say_later("CDW07_", t, Screen::Win);
			self.screen = Screen::Win;
		} else if r.finished && place - 1 <= qualify_position {
			self.set_graphic(F::Qualify, "imgTrackName", &numbered("trname", t, ".tga"));
			self.set_graphic(F::Qualify, "imgItem", &numbered("win_ch", winner, ".tga"));
			self.set_graphic(F::Qualify, "imgWinnerName", &numbered("chara_", winner, ".tga"));
			caption(&mut self.qualify, "lblTextBlock", &tr.qualify);
			self.voice.say("CDW", winner);
			self.say_later("CDQ07_", t, Screen::Qualify);
			self.screen = Screen::Qualify;
		} else {
			self.set_graphic(F::Lose, "imgTrackName", &numbered("trname", t, ".tga"));
			self.set_graphic(F::Lose, "imgItem", &numbered("los_ch", ch, ".tga"));
			caption(&mut self.lose, "lblTextBlock", &tr.lose);
			self.voice.say("CDL", ch);
			self.say_later("CDL07_", t, Screen::Lose);
			self.screen = Screen::Lose;
		}
	}

	/// The menu shows the save's choices.
	fn apply_player(&mut self) {
		self.char_chosen = false;
		self.difficulty = clamp(self.save.difficulty, 0, 2);
		let nc = self.info.tour_chars.len();
		self.tour_char = if self.save.tour_char >= 0 && (self.save.tour_char as usize) < nc {
			self.save.tour_char as usize
		} else {
			0
		};
		if self.save.quick_char >= 0 && (self.save.quick_char as usize) < self.info.quick_chars.len() {
			self.char_ix = self.save.quick_char as usize;
		}
		if self.save.quick_track >= 0 && (self.save.quick_track as usize) < self.info.quick_tracks.len() {
			self.track_ix = self.save.quick_track as usize;
		}
		self.show_difficulty();
		self.show_character();
		self.show_track();
	}

	fn store_player(&mut self) {
		if self.current < 0 {
			return;
		}
		self.save.difficulty = self.difficulty;
		self.save.tour_char = self.tour_char as i32;
		self.save.quick_char = self.char_ix as i32;
		self.save.quick_track = self.track_ix as i32;
		let path = self.players.path(self.current);
		if !self.save.save(&path) {
			eprintln!("menu: cannot save {path}");
		}
		self.port_ini.set_int("GENERAL", "CURRENTPLAYER", self.current);
		self.port_ini.save(&self.port_ini_path);
	}

	fn load_player(&mut self, n: i32) -> bool {
		if !self.save.load(&self.players.path(n), self.info.tour_chars.len() as i32) {
			return false;
		}
		self.current = n;
		self.apply_player();
		self.apply_volumes();
		true
	}

	fn new_player(&mut self, name: &str) -> bool {
		let n = self.players.free_slot();
		if n < 0 {
			return false;
		}
		self.store_player();
		self.save.defaults(&self.static_ini, self.info.tour_chars.len() as i32);
		self.save.name = name.chars().take(SaveGame::NAME_LENGTH as usize).collect();
		self.save.tour_char = list_index(&self.info.tour_chars, self.info.tour_default_char, 0) as i32;
		self.save.quick_char = list_index(&self.info.quick_chars, self.info.quick_default_char, 0) as i32;
		self.current = n;
		self.apply_player();
		self.store_player();
		true
	}

	/// TfrmPlayer.UpdateScreen: the current player first, then the others, then an empty
	/// place for a new one. The buttons' Tag is the player's number (-1: new).
	fn show_players(&mut self) {
		let current = self.current;
		let others: Vec<i32> = self.players.list().into_iter().filter(|&n| n != current).collect();
		for b in 0..5usize {
			let bn = format!("btn{b}");
			if self.playerf.get(&bn).is_none() {
				continue;
			}
			let mut who = if b == 0 {
				current
			} else if b - 1 < others.len() {
				others[b - 1]
			} else {
				-2
			};
			if b > 0 && who == -2 && b - 1 == others.len() && self.players.free_slot() >= 0 {
				who = -1;
			}
			self.slot_player.insert(bn.clone(), who);
			let mut look = None;
			if who >= 0 {
				let (nm, pc) = if who == current {
					(self.save.name.clone(), self.tour_char as i32)
				} else {
					SaveGame::peek(&self.players.path(who)).unwrap_or_default()
				};
				let ch = if self.info.tour_chars.is_empty() {
					0
				} else {
					self.info.tour_chars[pc.max(0) as usize % self.info.tour_chars.len()]
				};
				look = Some((numbered("PCH", ch, ""), nm));
			}
			let Some(c) = self.playerf.controls.iter_mut().find(|c| c.name == bn) else {
				continue;
			};
			c.visible = who != -2;
			c.show_caption = true;
			c.font_px = 16.0;
			if who == -1 {
				set_look(c, &mut self.res, "butp1");
				c.caption = String::new();
			} else if let Some((prefix, nm)) = look {
				set_look(c, &mut self.res, &prefix);
				c.caption = nm;
			}
		}
		if let Some(c) = self.playerf.get("btnDeletePlayer") {
			c.enabled = !others.is_empty();
		}
	}

	/// InitDlg backs up every save; Annuleren puts them back (ReplaceFiles).
	fn open_players(&mut self) {
		self.store_player();
		self.backup.clear();
		self.backup_current = self.current;
		for n in self.players.list() {
			let entry = self.backup.entry(n).or_default();
			if let Ok(bytes) = std::fs::read(self.players.path(n)) {
				*entry = bytes;
			}
		}
		self.show_players();
		self.open_dialog(F::Player, false);
	}

	fn pick(&mut self, bn: &str) {
		let who = self.slot_player.get(bn).copied().unwrap_or(-2);
		if who == -1 {
			self.newp_from_players = true;
			self.newp.text().clear();
			self.open_dialog(F::NewP, true);
		} else if who >= 0 && who != self.current {
			self.store_player();
			self.load_player(who);
			self.show_players();
		}
	}

	/// TfrmNewPlayer: a name of up to 12 letters; Enter or OK makes the player. Without
	/// any player yet the menu can't go on: cancelling quits.
	fn newp_done(&mut self, ok: bool) {
		let nm = self.newp.text().trim_end_matches(' ').to_string();
		if ok && nm.is_empty() {
			return;
		}
		if ok {
			self.new_player(&nm);
		}
		if self.current < 0 {
			self.screen = Screen::Quit;
			self.dialogs.clear();
		} else {
			if self.newp_from_players {
				self.show_players();
			}
			self.close_dialog();
		}
	}

	fn set_control(&mut self, t: i32) {
		self.edit.control_type = t;
		self.set_graphic(F::Options, "imgControl", CONTROL_PICTURE[(t & 3) as usize]);
		if let Some(c) = self.options.get("btnControls") {
			c.enabled = t != 2;
		}
	}

	fn show_video(&mut self) {
		let d3 = checked(&mut self.options, "chkVideo3d");
		if let Some(c) = self.options.get("optVideoLow") {
			c.enabled = !d3;
		}
		if let Some(c) = self.options.get("optVideoHigh") {
			c.enabled = d3;
		}
		if (!d3 && checked(&mut self.options, "optVideoHigh")) || (d3 && checked(&mut self.options, "optVideoLow")) {
			self.click(F::Options, "optVideoMedium");
		}
		let pic = if checked(&mut self.options, "optVideoLow") {
			"OPT_LOWR.bmp"
		} else if checked(&mut self.options, "optVideoHigh") {
			"OPT_HIGR.bmp"
		} else {
			"OPT_MIDR.bmp"
		};
		self.set_graphic(F::Options, "imgVideo", pic);
		if let Some(c) = self.options.get("imgVideo3d") {
			c.visible = d3;
		}
	}

	fn slider(&mut self, n: &str) -> &mut i32 {
		match self.options.controls.iter_mut().find(|c| c.name == n) {
			Some(c) => &mut c.value,
			None => &mut self.slider_none,
		}
	}

	fn open_options(&mut self) {
		self.edit = self.save.clone();
		for t in 0..4 {
			let on = t == (self.edit.control_type & 3);
			set_checked(&mut self.options, CONTROL_RADIO[t as usize], on);
		}
		self.set_control(self.edit.control_type & 3);
		let start_info = self.edit.flags[SaveGame::SHOW_START_INFO] != 0;
		set_checked(&mut self.options, "chkStartInfoOn", start_info);
		let d3 = self.edit.resolution >= 3 && self.edit.resolution != 5;
		set_checked(&mut self.options, "chkVideo3d", d3);
		let r = self.edit.resolution;
		set_checked(&mut self.options, "optVideoLow", r == 0 || r == 6);
		set_checked(&mut self.options, "optVideoMedium", r == 1 || r == 3);
		set_checked(&mut self.options, "optVideoHigh", !(r == 0 || r == 6 || r == 1 || r == 3));
		self.show_video();
		*self.slider("sldrMusic") = if self.edit.flags[SaveGame::MUSIC_ON] != 0 { self.edit.music_volume } else { 0 };
		*self.slider("sldrSound") = if self.edit.flags[SaveGame::FX_ON] != 0 { self.edit.fx_volume } else { 0 };
		*self.slider("sldrVoice") = self.edit.voices_volume;
		self.open_dialog(F::Options, false);
	}

	fn key_name(&self, vk: i32) -> String {
		self.key_names.iter().find(|(k, _)| *k == vk).map(|(_, n)| n.clone()).unwrap_or_default()
	}

	fn show_keys(&mut self) {
		for k in 0..7 {
			let cap = if k as i32 == self.capturing { String::new() } else { self.key_name(self.key_edit[k]) };
			let capturing = self.capturing;
			if let Some(c) = self.keyset.get(KEY_BUTTONS[k]) {
				c.caption = cap;
				c.show_caption = true;
				c.caption_middle = true;
				c.font_px = 13.0;
				c.colour = rgb(0, 0, 0);
				c.enabled = k as i32 != capturing;
			}
		}
		if let Some(c) = self.keyset.get("txtKey") {
			c.visible = false;
		}
	}

	/// The keys dialog's every frame: the key pressed while one is being chosen.
	fn keyset_frame(&mut self) {
		if self.capturing < 0 {
			return;
		}
		for i in 0..self.key_names.len() {
			let vk = self.key_names[i].0;
			if vk > 0 && keyispressed(vk) {
				self.key_edit[self.capturing as usize] = vk;
				self.capturing = -1;
				self.show_keys();
				return;
			}
		}
	}

	/// The joystick's and the wheel's sensitivity.
	fn sensitivity(&mut self, f: F) {
		let field = if f == F::JoySet { self.edit.joy_sensitivity } else { self.edit.wheel_sensitivity };
		if let Some(c) = self.form(f).get("sldrSensitivity") {
			c.value = field;
		}
		self.handle(f, "btnOk1", Act::SensitivityOk(f));
		for b in ["btnCancel", "btnClose"] {
			self.handle(f, b, Act::CloseDialog);
		}
		self.open_dialog(f, false);
	}

	/// Before a race, with SHOWSTARTINFO: how to drive (POPSTRT0 with the keys for the
	/// keyboard; POPSTRT2 joystick, POPSTRT1 joypad, POPSTRT3 wheel). OK races, and takes
	/// the box "show this again"; Annuleren stays.
	fn race_with_info(&mut self, go: Screen) {
		if self.save.flags[SaveGame::SHOW_START_INFO] == 0 {
			self.screen = go;
			return;
		}
		self.start_race = Some(go);
		let f = if self.save.control_type == 0 { F::StartInfoKb } else { F::StartInfo };
		const PICS: [&str; 4] = ["popstrt0.tga", "popstrt2.tga", "popstrt1.tga", "popstrt3.tga"];
		if let Some(p) = self.res.image(PICS[(self.save.control_type & 3) as usize]) {
			self.form(f).background = Some(p);
		}
		set_checked(self.form(f), "chkStartInfo", true);
		const LABELS: [&str; 7] = [
			"lblSetGas",
			"lblSetBrake",
			"lblSetLeft",
			"lblSetRight",
			"lblSetTurbo",
			"lblSetParkingBrake",
			"lblSetHorn",
		];
		for k in 0..7 {
			let name = self.key_name(self.save.keys[k]);
			if let Some(c) = self.form(f).get(LABELS[k]) {
				c.caption = name;
				c.centre = true;
			}
		}
		for b in ["btnHelp", "btnClose"] {
			if let Some(c) = self.form(f).get(b) {
				c.visible = false;
			}
		}
		self.open_dialog(f, false);
	}

	/// Einde (TfrmCloseDlg): back to the main screen, or stop playing.
	fn ask_close(&mut self) {
		set_checked(&mut self.closedlg, "optMainScreen", true);
		set_checked(&mut self.closedlg, "optQuit", false);
		self.open_dialog(F::CloseDlg, false);
	}

	/// A new track record (CheckIfBestLap): any lap of a finished race under the track's
	/// best; TfrmHighScoreDlg asks the name (the player's to start with) until one is
	/// given.
	fn check_record(&mut self, t: i32, r: &RaceResult) {
		if !r.finished {
			return;
		}
		let rec = self.record(t);
		let have = rec.is_some();
		let ms = rec.map_or(0, |r| r.0);
		let mut best = if have { ms } else { 0x7fffffff };
		for &lap in &r.lap_times {
			best = best.min((lap * 1000.0 + 0.5) as i32);
		}
		if best <= 0 || (have && best >= ms) || best == 0x7fffffff {
			return;
		}
		self.port_ini.set_int("HIGHSCORES", &t.to_string(), best);
		self.port_ini.save(&self.port_ini_path);
		self.record_track = t;
		*self.highscore.text() = self.save.name.clone();
		let _ = self.voice.say("aud", 2) || self.voice.play("aud2.wav");
		self.open_dialog(F::HighScore, true);
	}

	fn item_top(&self, k: usize) -> i32 {
		let mut y = self.balloon.y + 8 + (self.balloon.title_lines.len() as f32 * HELP_PX * 1.15) as i32 + 10;
		for i in 0..k {
			y += (self.balloon.lines[i].len() as f32 * HELP_PX * 1.15) as i32 + 4;
		}
		y
	}

	/// Help (btnHelpClick): Miss Honeybunny's balloon under the Help button with the
	/// screen's questions (Agent.ini [<form>] Caption, [<form>BalloonItems] question=help
	/// id), and she stands under it (Hunny.acs: Left the button's + 10, the balloon's
	/// bottom 6 above her), saying cmh07. A question opens its topic from Menu.hlp, which
	/// the original shows in WinHelp.
	fn open_help(&mut self, f: F) {
		let cls = self.form(f).cls.clone();
		self.balloon.items.clear();
		self.balloon.lines.clear();
		let sec = format!("{cls}BalloonItems");
		for k in self.agent_ini.keys(&sec) {
			let id = self.agent_ini.get_int(&sec, &k, -1);
			self.balloon.items.push((k, id));
		}
		if self.balloon.items.is_empty() {
			return;
		}
		self.balloon.title = self.agent_ini.get_or(&cls, "Caption", "Help");
		self.balloon.title_lines = self.font.wrap(&self.balloon.title, HELP_PX, self.balloon.w as f32 - 30.0);
		for it in &self.balloon.items {
			self.balloon.lines.push(self.font.wrap(&it.0, HELP_PX, self.balloon.w as f32 - 16.0));
		}
		let hb = anchor_size(self.form(f), "btnHelp");
		let bx = hb.map_or(600, |c| c.0);
		let by = hb.map_or(40, |c| c.1 + c.2);
		self.balloon.x = clamp(bx - 40, 4, 800 - self.balloon.w - 4);
		self.balloon.y = 0;
		self.balloon.h = self.item_top(self.balloon.items.len()) + 6;
		self.balloon.y = (by + 14).min(600 - 4 - self.balloon.h);
		self.balloon.open = true;
		self.balloon.hover = -1;
		self.agent.show(
			clamp(bx + 10, 0, 800 - self.hunny.width),
			(self.balloon.y + self.balloon.h + 6).min(600 - self.hunny.height),
		);
		self.voice.say("cmh", 7);
	}

	fn open_topic(&mut self, id: i32) {
		let Some((title, text)) = self.helpfile.topic(id) else {
			return;
		};
		self.topic.title = title;
		self.topic.lines.clear();
		for para in text.split('\n') {
			for l in self.font.wrap(para, TOPIC_PX, TOPIC_W as f32 - 40.0) {
				self.topic.lines.push(l);
			}
			self.topic.lines.push(String::new());
		}
		self.topic.scroll = 0;
		self.topic.open = true;
	}

	fn draw_help(&self, cv: &mut Canvas) {
		let black = rgb(0, 0, 0);
		let white = rgb(255, 255, 255);
		let font = &self.font;
		if let Some(a) = self.agent.frame() {
			cv.blit(a, self.agent.x, self.agent.y, 1.0);
		}
		let balloon = &self.balloon;
		if balloon.open {
			let (x, y, w, h) = (balloon.x, balloon.y, balloon.w, balloon.h);
			// The tail down to her, the body, its outline (TBalloonForm).
			let tx = clamp(self.agent.x + self.hunny.width / 2, x + 8, x + w - 20);
			for k in 0..6 {
				cv.fill(tx + k, y + h + k, 12 - 2 * k, 1, white, 1.0);
			}
			cv.fill(x - 1, y - 1, w + 2, h + 2, black, 1.0);
			cv.fill(x, y, w, h, white, 1.0);
			let lh = HELP_PX * 1.15;
			for (i, l) in balloon.title_lines.iter().enumerate() {
				font.draw(cv, x + 6, y + 6 + (i as f32 * lh) as i32, l, HELP_PX, black);
			}
			font.draw(cv, x + w - 14, y + 4, "x", HELP_PX, black);
			for k in 0..balloon.items.len() {
				let c = if k as i32 == balloon.hover { rgb(255, 0, 0) } else { rgb(116, 6, 31) };
				let ty = self.item_top(k);
				for (i, l) in balloon.lines[k].iter().enumerate() {
					let ly = ty + (i as f32 * lh) as i32;
					font.draw(cv, x + 8, ly, l, HELP_PX, c);
					cv.fill(x + 8, ly + HELP_PX as i32 + 1, font.width(l, HELP_PX) as i32, 1, c, 1.0);
				}
			}
		}
		let topic = &self.topic;
		if topic.open {
			cv.fill(TOPIC_X - 2, TOPIC_Y - 2, TOPIC_W + 4, TOPIC_H + 4, black, 1.0);
			cv.fill(TOPIC_X, TOPIC_Y, TOPIC_W, TOPIC_H, rgb(255, 255, 238), 1.0);
			font.draw(cv, TOPIC_X + 20, TOPIC_Y + 14, &topic.title, TOPIC_PX + 6.0, rgb(116, 6, 31));
			let lh = TOPIC_PX * 1.25;
			let rows = ((TOPIC_H - 70) as f32 / lh) as i32;
			let mut i = 0;
			while i < rows && topic.scroll + i < topic.lines.len() as i32 {
				font.draw(
					cv,
					TOPIC_X + 20,
					TOPIC_Y + 52 + (i as f32 * lh) as i32,
					&topic.lines[(topic.scroll + i) as usize],
					TOPIC_PX,
					black,
				);
				i += 1;
			}
			font.draw(cv, TOPIC_X + TOPIC_W - 18, TOPIC_Y + 8, "x", TOPIC_PX, black);
		}
	}

	/// The balloon and the topic take the input while they're open.
	fn help_input(&mut self, inp: &SysInput) -> bool {
		if self.topic.open {
			let lh = TOPIC_PX * 1.25;
			let rows = ((TOPIC_H - 70) as f32 / lh) as i32;
			if inp.key == KEY_DOWN {
				self.topic.scroll = (self.topic.scroll + 1).min(0.max(self.topic.lines.len() as i32 - rows));
			} else if inp.key == KEY_UP {
				self.topic.scroll = (self.topic.scroll - 1).max(0);
			} else if inp.key != KEY_NONE || inp.mouse_clicked {
				self.topic.open = false;
			}
			return true;
		}
		if !self.balloon.open {
			return false;
		}
		self.balloon.hover = -1;
		for k in 0..self.balloon.items.len() {
			let ty = self.item_top(k);
			let th = (self.balloon.lines[k].len() as f32 * HELP_PX * 1.15) as i32;
			let b = &self.balloon;
			if inp.mouse_x >= b.x && inp.mouse_x < b.x + b.w && inp.mouse_y >= ty && inp.mouse_y < ty + th {
				self.balloon.hover = k as i32;
			}
		}
		if inp.key == KEY_ESCAPE {
			self.balloon.open = false;
		} else if inp.mouse_clicked {
			if self.balloon.hover >= 0 {
				let id = self.balloon.items[self.balloon.hover as usize].1;
				self.open_topic(id);
			} else {
				self.balloon.open = false;
			}
		}
		true
	}

	fn dispatch(&mut self, act: Act) {
		match act {
			Act::Quick(q) => {
				self.quick = q;
				self.show_mode();
			}
			Act::Go(s) => self.screen = s,
			Act::ShowCurrent => self.show_current(),
			Act::Difficulty(d) => {
				self.difficulty = d;
				self.show_difficulty();
			}
			// TfrmDifficulty's FlowToNext: the character the player has once they have chosen
			// one (TfrmCurrentChar), else the choice.
			Act::DiffNext => {
				if self.quick {
					self.screen = Screen::Quick;
				} else if self.char_chosen {
					self.show_current();
				} else {
					self.screen = Screen::Character;
				}
			}
			Act::StepTrack(d) => {
				step(&mut self.track_ix, self.info.quick_tracks.len(), d);
				self.show_track();
			}
			Act::StepChar(d) => {
				step(&mut self.char_ix, self.info.quick_chars.len(), d);
				self.show_char();
			}
			Act::CloseDialog => self.close_dialog(),
			Act::OpenDialog(f) => self.open_dialog(f, false),
			Act::StepTourChar(d) => {
				step(&mut self.tour_char, self.info.tour_chars.len(), d);
				self.show_character();
			}
			Act::CharNext => {
				self.choose_tour_track();
				let ch = self.tour_ch();
				self.voice.say("CCS", ch);
				self.char_leave = 2.0;
			}
			Act::ChooseChar => {
				self.show_character();
				self.screen = Screen::Character;
			}
			Act::CurrentNext => {
				self.choose_tour_track();
				self.show_tour_track();
				self.screen = Screen::Track;
			}
			Act::PrevTrack => {
				if self.tour_ix > 0 {
					self.tour_ix -= 1;
				}
				self.show_tour_track();
			}
			Act::NextTrack => {
				self.tour_ix += 1;
				self.show_tour_track();
			}
			Act::TrackNext => {
				self.save.tour_track = self.tour_ix as i32;
				self.show_garage();
				// FUN_00499538: D.T. Harry's comment on coming in.
				self.voice.say(if self.just_qualified { "CGR" } else { "CBR" }, 7);
				self.screen = Screen::Garage;
			}
			Act::TrackScreen => {
				self.show_tour_track();
				self.screen = Screen::Track;
			}
			Act::StepTuneUp(d) => {
				self.tuneup = (self.tuneup + d) % 5;
				self.show_garage();
			}
			Act::BuyTuneUp => {
				let tuneup = self.tuneup;
				if tuneup >= self.info.tuneups.len() {
					return;
				}
				let price = self.info.tuneups[tuneup].price;
				if self.cr().money < price {
					self.open_dialog(F::NoMoney, false);
					return;
				}
				self.cr().money -= price;
				if tuneup == 4 {
					let amount = self.static_ini.get_int("GAMEVALUES", "TURBOOILAMOUNT", 10);
					let cr = self.cr();
					cr.turbo = (cr.turbo + amount).min(100);
				} else {
					self.cr().upgrades[tuneup] = 1;
				}
				self.voice.effect("peep.wav");
				self.show_garage();
			}
			Act::Advance => self.advance(),
			// On to the Quick Race while it has D.T. Harry to unlock, else the characters.
			Act::WinFinalNext => {
				self.final_sample = 3;
				if self.save.unlock_popup_shown == 0 {
					self.quick = true;
					self.show_mode();
					self.screen = Screen::Quick;
				} else {
					self.show_character();
					self.screen = Screen::Character;
				}
			}
			Act::IntroSkip => self.intro_leave = 0.01,
			Act::OpenPlayers => self.open_players(),
			Act::Pick(bn) => self.pick(&bn),
			Act::PlayersCancel => {
				for n in self.players.list() {
					if !self.backup.contains_key(&n) {
						let _ = std::fs::remove_file(self.players.path(n));
					}
				}
				for (n, bytes) in &self.backup {
					let _ = std::fs::write(self.players.path(*n), bytes);
				}
				self.current = -1;
				if self.backup_current >= 0 {
					self.load_player(self.backup_current);
				}
				self.store_player();
				self.close_dialog();
			}
			Act::DeletePlayer => {
				let fmt = self.menu_ini.get_or("MENUSTRINGS", "4", "%s?");
				let text = replace_s(&fmt, &self.save.name).unwrap_or(fmt);
				if let Some(c) = self.deletep.get("lblSure") {
					c.caption = text;
					c.wrap = true;
				}
				self.open_dialog(F::DeleteP, false);
			}
			Act::DeleteOk => {
				let _ = std::fs::remove_file(self.players.path(self.current));
				self.current = -1;
				let left = self.players.list();
				if !left.is_empty() {
					self.load_player(left[0]);
				}
				self.show_players();
				self.close_dialog();
			}
			Act::NewPlayerDone(ok) => self.newp_done(ok),
			Act::SetControl(t) => self.set_control(t),
			Act::Click(f, name) => self.click(f, &name),
			Act::ShowVideo => self.show_video(),
			Act::OpenOptions => self.open_options(),
			// The sliders let one hear the volume (wavIrritatingAsHell).
			Act::SliderSound => {
				self.voice.effects = *self.slider("sldrSound") as f32 / 100.0;
				self.voice.effect("peep.wav");
			}
			Act::OptionsOk => {
				self.edit.flags[SaveGame::SHOW_START_INFO] = checked(&mut self.options, "chkStartInfoOn") as u8;
				let d3 = checked(&mut self.options, "chkVideo3d");
				let r = self.edit.resolution;
				let custom = !(r == 0 || r == 6 || r == 1 || r == 3 || r == 4);
				if !custom {
					self.edit.resolution = if checked(&mut self.options, "optVideoLow") {
						if d3 { 6 } else { 0 }
					} else if checked(&mut self.options, "optVideoMedium") {
						if d3 { 3 } else { 1 }
					} else {
						4
					};
				}
				self.edit.music_volume = *self.slider("sldrMusic");
				self.edit.fx_volume = *self.slider("sldrSound");
				self.edit.voices_volume = *self.slider("sldrVoice");
				self.edit.flags[SaveGame::MUSIC_ON] = (self.edit.music_volume > 0) as u8;
				self.edit.flags[SaveGame::FX_ON] = (self.edit.fx_volume > 0) as u8;
				// Only the settings: the Tour went on meanwhile in nothing, but keep it as is.
				let chars = std::mem::take(&mut self.save.chars);
				self.save = self.edit.clone();
				self.save.chars = chars;
				self.store_player();
				self.apply_volumes();
				self.close_dialog();
			}
			Act::OptionsCancel => {
				self.apply_volumes();
				self.close_dialog();
			}
			Act::Nothing => {}
			Act::CaptureKey(k) => {
				self.capturing = k;
				self.show_keys();
			}
			Act::KeyDefaults => {
				let mut d = SaveGame::default();
				d.defaults(&self.static_ini, 0);
				self.key_edit = d.keys;
				self.capturing = -1;
				self.show_keys();
			}
			Act::KeysOk => {
				if self.capturing >= 0 {
					return;
				}
				let mut twice = 0;
				for i in 0..6 {
					for j in i + 1..7 {
						if self.key_edit[i] == self.key_edit[j] {
							twice = self.key_edit[i];
						}
					}
				}
				if twice != 0 {
					let fmt = self.menu_ini.get_or("MENUSTRINGS", "6", "%s");
					let text = replace_s(&fmt, &self.key_name(twice)).unwrap_or(fmt);
					if let Some(c) = self.doublekeys.get("lblDouble") {
						c.caption = text;
						c.wrap = true;
					}
					self.open_dialog(F::DoubleKeys, false);
					return;
				}
				self.edit.keys = self.key_edit;
				self.close_dialog();
			}
			Act::KeysCancel => {
				self.capturing = -1;
				self.close_dialog();
			}
			Act::SensitivityOk(f) => {
				if let Some(v) = self.form(f).get("sldrSensitivity").map(|c| c.value) {
					if f == F::JoySet {
						self.edit.joy_sensitivity = v;
					} else {
						self.edit.wheel_sensitivity = v;
					}
				}
				self.close_dialog();
			}
			Act::Controls => match self.edit.control_type {
				0 => {
					self.key_edit = self.edit.keys;
					self.capturing = -1;
					self.show_keys();
					self.open_dialog(F::KeySet, false);
				}
				1 => self.sensitivity(F::JoySet),
				3 => self.sensitivity(F::WheelSet),
				_ => {}
			},
			Act::StartInfoOk(f) => {
				self.save.flags[SaveGame::SHOW_START_INFO] = checked(self.form(f), "chkStartInfo") as u8;
				self.store_player();
				self.close_dialog();
				if let Some(s) = self.start_race {
					self.screen = s;
				}
			}
			Act::RaceWithInfo(s) => self.race_with_info(s),
			Act::AskClose => self.ask_close(),
			Act::CloseDlgOk => {
				self.close_dialog();
				self.screen = if checked(&mut self.closedlg, "optQuit") { Screen::Quit } else { Screen::Main };
			}
			Act::HighScoreOk => {
				let nm = self.highscore.text().trim_end_matches(' ').to_string();
				if nm.is_empty() {
					return;
				}
				self.port_ini.set("HIGHSCORES", &format!("name{}", self.record_track), &nm);
				self.port_ini.save(&self.port_ini_path);
				self.close_dialog();
				self.show_track();
			}
			Act::InternetOk => {
				self.close_dialog();
				let url = self.static_ini.get("GENERAL", "DOWNLOADURL");
				if !url.is_empty() && !sys_open_url(&url) {
					eprintln!("menu: cannot open {url}");
				}
			}
			Act::Help(f) => self.open_help(f),
		}
	}

	fn screen_form(&self) -> F {
		match self.screen {
			Screen::Quick => F::Qr,
			Screen::Results => F::Results,
			Screen::Difficulty => F::Diff,
			Screen::Character => F::Character,
			Screen::CurrentChar => F::Current,
			Screen::Track => F::Track,
			Screen::Garage => F::Garage,
			Screen::TrackIntro => F::Intro,
			Screen::Qualify => F::Qualify,
			Screen::Win => F::Win,
			Screen::Lose => F::Lose,
			Screen::WinChase => F::WinChase,
			Screen::LoseChase => F::LoseChase,
			Screen::WinFinal => F::WinFinal,
			_ => F::Main,
		}
	}

	fn draw_screen(&self, f: F, help: bool, agent: bool) {
		let mut cv = self.cv.borrow_mut();
		self.form_ref(f).draw(&mut cv, &self.res);
		if help || !agent {
			for sh in &self.dialogs {
				self.form_ref(sh.form).draw(&mut cv, &self.res);
			}
		}
		if help {
			self.draw_help(&mut cv);
		}
		if agent {
			if let Some(a) = self.agent.frame() {
				cv.blit(a, self.agent.x, self.agent.y, 1.0);
			}
		}
		sys_present(&cv.px);
	}

	fn run(&mut self, screenshot: &str) -> i32 {
		// The main screen (TfrmMainScreen): Tour or Quick Race, the player, the options.
		if !self.load(
			F::Main,
			"TfrmMainScreen",
			&[
				("gdfBtnTour", "tour"),
				("gdfBtnQR", "quick"),
				("gdfBtnInternet", "inter"),
				("gdfBtnOptions", "optio"),
				("gdfBtnPlayer", "playe"),
			],
		) {
			eprintln!("menu: no main screen in Menu.exe");
			return 1;
		}
		self.show_mode();
		Mixer::get().open();
		self.handle(F::Main, "optQuickRaceClick", Act::Quick(true));
		self.handle(F::Main, "optTourClick", Act::Quick(false));
		self.handle(F::Main, "btnCloseClick", Act::Go(Screen::Quit));
		self.handle(F::Main, "btnNextClick", Act::Go(Screen::Difficulty));

		// The difficulty (TfrmDifficulty): easy, normal or hard, with its picture; the
		// heading says which game.
		self.load(
			F::Diff,
			"TfrmDifficulty",
			&[("gdfBtnEasy", "easy"), ("gdfBtnMedium", "norma"), ("gdfBtnHard", "hard")],
		);
		self.diff.background = self.res.image("quickdif.bmp");
		self.show_difficulty();
		self.handle(F::Diff, "optEasyClick", Act::Difficulty(0));
		self.handle(F::Diff, "optMediumClick", Act::Difficulty(1));
		self.handle(F::Diff, "optHardClick", Act::Difficulty(2));
		self.handle(F::Diff, "btnPreviousClick", Act::Go(Screen::Main));
		self.handle(F::Diff, "btnCloseClick", Act::Go(Screen::Quit));
		self.handle(F::Diff, "btnNextClick", Act::DiffNext);

		// Quick Race (TfrmQuickRace): a track and a character, each with its pictures; the
		// track's preview pictures cycle every two seconds (timCycler).
		self.load(F::Qr, "TfrmQuickRace", &[]);
		for k in 0..self.info.quick_chars.len() {
			if self.info.quick_chars[k] == self.info.quick_default_char {
				self.char_ix = k;
			}
		}
		self.anim_ini.load(&find_file_ci(&self.data_dir, "L0_anim.ini"));
		self.show_track();
		self.show_char();
		self.handle(F::Qr, "btnNextTrack1Click", Act::StepTrack(1));
		self.handle(F::Qr, "btnPrevTrack1Click", Act::StepTrack(-1));
		self.handle(F::Qr, "btnNextCharClick", Act::StepChar(1));
		self.handle(F::Qr, "btnPrevCharClick", Act::StepChar(-1));
		self.handle(F::Qr, "btnPreviousClick", Act::Go(Screen::Difficulty));
		self.handle(F::Qr, "btnCloseClick", Act::Go(Screen::Quit));
		self.handle(F::Qr, "btnNextClick", Act::Go(Screen::Race));
		self.load(F::Unlock, "TfrmUnlock", &[]);
		self.handle(F::Unlock, "btnOk1", Act::CloseDialog);

		self.load(F::Results, "TfrmResults", &[]);
		self.results.background = self.res.image("quickres.bmp");
		self.handle(F::Results, "btnNextClick", Act::Go(Screen::Quick));
		self.handle(F::Results, "btnCloseClick", Act::Go(Screen::Quit));

		// The Tour (static.ini [TOURRACE]): a character, then its tracks one by one.
		for k in 0..self.info.tour_chars.len() {
			if self.info.tour_chars[k] == self.info.tour_default_char {
				self.tour_char = k;
			}
		}

		// The character (TfrmCharacter): portrait with car, name, story and ratings; Verder
		// plays the character's own words (CCS<nn>_<k>) and moves on two seconds later (timSelection).
		self.load(F::Character, "TfrmCharacter", &[]);
		self.show_character();
		self.handle(F::Character, "btnNextCharClick", Act::StepTourChar(1));
		self.handle(F::Character, "btnPrevCharClick", Act::StepTourChar(-1));
		self.handle(F::Character, "btnPreviousClick", Act::ShowCurrent);
		self.handle(F::Character, "btnCloseClick", Act::Go(Screen::Quit));
		self.handle(F::Character, "btnNextClick", Act::CharNext);

		self.load(F::Current, "TfrmCurrentChar", &[("gdfBtnChoose", "newch")]);
		self.handle(F::Current, "btnPreviousClick", Act::Go(Screen::Difficulty));
		self.handle(F::Current, "btnCloseClick", Act::Go(Screen::Quit));
		self.handle(F::Current, "btnChooseCharClick", Act::ChooseChar);
		self.handle(F::Current, "btnNextClick", Act::CurrentNext);

		self.load(F::Track, "TfrmTrack", &[]);
		self.handle(F::Track, "btnPreviousClick", Act::ShowCurrent);
		self.handle(F::Track, "btnPrevTrackClick", Act::PrevTrack);
		self.handle(F::Track, "btnNextTrackClick", Act::NextTrack);
		self.handle(F::Track, "btnCloseClick", Act::Go(Screen::Quit));
		self.handle(F::Track, "btnNextClick", Act::TrackNext);

		self.load(
			F::Garage,
			"TfrmGarage",
			&[("gdfBtnBuyTU", "buy"), ("gdfBtnPrevious3", "back3"), ("gdfBtnNext3", "next3")],
		);
		self.load(F::NoMoney, "TfrmNoMoney", &[]);
		self.handle(F::Garage, "btnNextTUClick", Act::StepTuneUp(1));
		self.handle(F::Garage, "btnPrevTUClick", Act::StepTuneUp(4));
		self.handle(F::Garage, "btnBuyTuneUpClick", Act::BuyTuneUp);
		self.handle(F::Garage, "btnPreviousClick", Act::TrackScreen);
		self.handle(F::Garage, "btnCloseClick", Act::Go(Screen::Quit));
		self.handle(F::Garage, "btnNextClick", Act::Go(Screen::TourRace));
		for b in ["btnOk1", "btnClose"] {
			self.handle(F::NoMoney, b, Act::CloseDialog);
		}

		// After the race: won, qualified, lost (and for a chase: escaped or caught), with the
		// track's texts and D.T. Harry's comments.
		self.load(F::Qualify, "TfrmQualify", &[]);
		self.load(F::Win, "TfrmWinNormal", &[]);
		self.load(F::Lose, "TfrmLoseNormal", &[]);
		self.load(F::WinChase, "TfrmWinChase", &[]);
		self.load(F::LoseChase, "TfrmLoseChase", &[]);
		self.load(F::WinFinal, "TfrmWinFinal", &[]);
		self.load(F::Intro, "TfrmTrackIntro", &[]);
		for f in [F::Qualify, F::Win, F::WinChase] {
			self.handle(f, "btnNextClick", Act::Advance);
		}
		for f in [F::Lose, F::LoseChase] {
			self.handle(f, "btnNextClick", Act::TrackScreen);
		}
		self.handle(F::WinFinal, "btnNextClick", Act::WinFinalNext);
		for f in [F::Qualify, F::Win, F::Lose, F::WinChase, F::LoseChase, F::WinFinal, F::Intro, F::Track, F::Character]
		{
			if !self.form(f).handlers.contains_key("btnCloseClick") {
				self.handle(f, "btnCloseClick", Act::Go(Screen::Quit));
			}
		}
		self.handle(F::Intro, "imgBackGroundClick", Act::IntroSkip);

		// Players (FormPlayer.pas, DataPlayer.pas): each one's save in the user's folder, the
		// current one remembered there in menu.ini [GENERAL] CURRENTPLAYER (the original keeps
		// it in the game's own menu.ini).
		let save_dir = self.players.dir.clone();
		self.port_ini_path =
			format!("{save_dir}{}menu.ini", if save_dir.is_empty() || save_dir.ends_with('/') { "" } else { "/" });
		self.port_ini.load(&self.port_ini_path);

		// Dialogs over the screen: the name of a new player, the list of players, deleting.
		self.load(F::NewP, "TfrmNewPlayer", &[]);
		self.load(F::Player, "TfrmPlayer", &[("gdfBtnDeletePlayer", "delet"), ("defEmpty", "butp1")]);
		self.load(F::DeleteP, "TfrmDeletePlayer", &[]);
		self.handle(F::Main, "btnPlayerClick", Act::OpenPlayers);
		for b in 1..5 {
			let bn = format!("btn{b}");
			self.handle(F::Player, &bn, Act::Pick(bn.clone()));
		}
		// The buttons all name btn1Click: the Form calls the OnClick handler; route by name.
		for c in &mut self.playerf.controls {
			if c.on_click == "btn1Click" {
				c.on_click.clear();
			}
		}
		self.handle(F::Player, "btnOk1", Act::CloseDialog);
		for b in ["btnCancel", "btnClose"] {
			self.handle(F::Player, b, Act::PlayersCancel);
		}
		self.handle(F::Player, "btnDeletePlayerClick", Act::DeletePlayer);
		self.handle(F::DeleteP, "btnOk1", Act::DeleteOk);
		for b in ["btnCancel", "btnClose"] {
			self.handle(F::DeleteP, b, Act::CloseDialog);
		}
		self.handle(F::NewP, "btnOk1", Act::NewPlayerDone(true));
		for b in ["btnCancel", "btnClose"] {
			self.handle(F::NewP, b, Act::NewPlayerDone(false));
		}

		// Options (FormOptions.pas): a dialog working on a copy of the player's settings, given
		// to the player on OK. The control (keyboard, joystick, joypad, wheel; joypad has
		// nothing to set), whether the start info shows, the picture quality, and the music,
		// effects and voices volumes.
		self.load(F::Options, "TfrmOptions", &[("gdfBtnAdvVideo", "advan"), ("gdfBtnCtrlSettings", "setti")]);
		self.load(F::KeySet, "TfrmKeySettings", &[("gdfBtnDefault", "defau"), ("gdfBtnKey", "key")]);
		self.load(F::JoySet, "TfrmJoyStickSettings", &[]);
		self.load(F::WheelSet, "TfrmWheelSettings", &[]);
		self.load(F::StartInfo, "TfrmStartInfo", &[]);
		self.load(F::StartInfoKb, "TfrmStartInfoKeyBoard", &[]);
		self.load(F::CloseDlg, "TfrmCloseDlg", &[("gdfBigRadioBtnMain", "radhm"), ("gdfRadioBtnExit", "radex")]);
		self.load(F::DoubleKeys, "TfrmDoubleKeys", &[]);
		for t in 0..4 {
			if let Some(key) = self.options.get(CONTROL_RADIO[t as usize]).map(|c| c.on_click.clone()) {
				self.handle(F::Options, &key, Act::SetControl(t));
			}
		}
		for (lbl, radio) in [
			("lblKeyboardClick", "optKeyboard"),
			("lblJoystickClick", "optJoystick"),
			("lblJoypadClick", "optJoyPad"),
			("lblWheelClick", "optWheel"),
			("lblVideoLowClick", "optVideoLow"),
			("lblVideoMediumClick", "optVideoMedium"),
			("lblVideoHighClick", "optVideoHigh"),
		] {
			self.handle(F::Options, lbl, Act::Click(F::Options, radio.to_string()));
		}
		self.handle(F::Options, "lblClickAreaClick", Act::Click(F::Options, "chkStartInfoOn".to_string()));
		self.handle(F::Options, "lblVideo3dClick", Act::Click(F::Options, "chkVideo3d".to_string()));
		// Picture quality (CopySettingsToControls / CopyControlsToSettings): Resolution is an
		// index into the original's mode table; low 0 or 6, medium 1 or 3, high 4 (3D: 3..9).
		self.set_graphic(F::Options, "imgVideo3d", "opt_3dfx.tga");
		self.set_graphic(F::Options, "imgSound", "opt_soun.bmp");
		for h in ["optVideoLowClick", "optVideoMediumClick", "optVideoHighClick", "chkVideo3dClick"] {
			self.handle(F::Options, h, Act::ShowVideo);
		}
		self.handle(F::Main, "btnOptionsClick", Act::OpenOptions);
		self.handle(F::Options, "sldrSoundChange", Act::SliderSound);
		self.handle(F::Options, "sldrVoiceChange", Act::SliderSound);
		self.handle(F::Options, "btnOkClick", Act::OptionsOk);
		for b in ["btnCancelClick", "btnClose"] {
			self.handle(F::Options, b, Act::OptionsCancel);
		}
		self.handle(F::Options, "btnVideoAdvancedClick", Act::Nothing); // TfrmDisplaySettings: DirectDraw's
		if let Some(c) = self.options.get("btnVideoAdvanced") {
			c.enabled = false;
		}

		// The keys (TfrmKeySettings): click a key's button, then press the key; the names are
		// menu.ini [CONTROLKEYS] (VK,name). Two actions on one key are refused (TfrmDoubleKeys).
		for i in 0..self.menu_ini.get_int("CONTROLKEYS", "count", 0) + 1 {
			let f = split_fields(&self.menu_ini.get("CONTROLKEYS", &i.to_string()), ',');
			if f.len() >= 2 {
				self.key_names.push((atoi(&f[0]), f[1].clone()));
			}
		}
		for c in &mut self.keyset.controls {
			if c.on_click == "btnClick" {
				c.on_click.clear();
			}
		}
		for k in 0..7 {
			self.handle(F::KeySet, KEY_BUTTONS[k as usize], Act::CaptureKey(k));
		}
		self.handle(F::KeySet, "btnDefaultsClick", Act::KeyDefaults);
		self.handle(F::KeySet, "btnOkClick", Act::KeysOk);
		for b in ["btnCancel", "btnClose"] {
			self.handle(F::KeySet, b, Act::KeysCancel);
		}
		self.handle(F::DoubleKeys, "btnOk1", Act::CloseDialog);
		for b in ["btnHelp", "btnClose"] {
			if let Some(c) = self.doublekeys.get(b) {
				c.visible = false;
			}
		}
		self.handle(F::Options, "btnControlsClick", Act::Controls);

		for f in [F::StartInfo, F::StartInfoKb] {
			self.handle(f, "lblClickAreaClick", Act::Click(f, "chkStartInfo".to_string()));
			self.handle(f, "btnOkClick", Act::StartInfoOk(f));
			self.handle(f, "btnCancel", Act::CloseDialog);
		}

		self.handle(F::CloseDlg, "btnOk1Click", Act::CloseDlgOk);
		for b in ["btnExit", "btnClose"] {
			self.handle(F::CloseDlg, b, Act::CloseDialog);
		}

		self.handle(F::Qr, "btnNextClick", Act::RaceWithInfo(Screen::Race));
		self.handle(F::Garage, "btnNextClick", Act::RaceWithInfo(Screen::TourRace));
		for f in [
			F::Main,
			F::Diff,
			F::Qr,
			F::Results,
			F::Character,
			F::Track,
			F::Garage,
			F::Qualify,
			F::Win,
			F::Lose,
			F::WinChase,
			F::LoseChase,
			F::WinFinal,
			F::Intro,
		] {
			self.handle(f, "btnCloseClick", Act::AskClose);
		}

		self.load(F::HighScore, "TfrmHighScoreDlg", &[]);
		self.handle(F::HighScore, "btnOk1", Act::HighScoreOk);
		for b in ["btnHelp", "btnClose"] {
			if let Some(c) = self.highscore.get(b) {
				c.visible = false;
			}
		}

		let mut hunny = AgentCharacter::default();
		hunny.load(&find_file_ci(&self.menu_dir, "Hunny.acs"));
		self.hunny = Rc::new(hunny);
		self.agent.character = Some(self.hunny.clone());
		self.agent_ini.load(&find_file_ci(&self.menu_dir, "Agent.ini"));
		self.helpfile.load(&find_file_ci(&self.menu_dir, "Menu.hlp"));

		// Internet (TfrmInternetDlg): go to the A2 Racer site (static.ini DOWNLOADURL)?
		self.load(F::Internet, "TfrmInternetDlg", &[]);
		self.handle(F::Main, "btnInternetClick", Act::OpenDialog(F::Internet));
		self.handle(F::Internet, "btnOk1", Act::InternetOk);
		for b in ["btnCancel", "btnClose"] {
			self.handle(F::Internet, b, Act::CloseDialog);
		}

		for f in [
			F::Main,
			F::Diff,
			F::Qr,
			F::Results,
			F::Character,
			F::Track,
			F::Garage,
			F::Qualify,
			F::Win,
			F::Lose,
			F::WinChase,
			F::LoseChase,
			F::WinFinal,
			F::Intro,
			F::Options,
			F::KeySet,
			F::JoySet,
			F::WheelSet,
			F::StartInfo,
			F::StartInfoKb,
			F::CloseDlg,
			F::DoubleKeys,
			F::NewP,
			F::Player,
			F::DeleteP,
			F::NoMoney,
			F::HighScore,
			F::Internet,
		] {
			self.handle(f, "btnHelpClick", Act::Help(f));
			self.handle(f, "btnHelp", Act::Help(f));
		}

		let wanted = self.port_ini.get_int("GENERAL", "CURRENTPLAYER", -1);
		if !(wanted >= 0 && self.load_player(wanted)) {
			let have = self.players.list();
			if !have.is_empty() {
				self.load_player(have[0]);
			}
		}
		// TfrmMain.StartUp: the intro film first (menu.ini [GENERAL] INTROAVI), then the
		// player. Test scripts skip it unless A2_INTRO=1.
		let intro_wanted =
			screenshot.is_empty() && (!sys_scripted() || std::env::var("A2_INTRO").is_ok_and(|v| v.starts_with('1')));
		if intro_wanted {
			let film = self.menu_ini.get_or("GENERAL", "INTROAVI", "DATA\\INTRO1.MPG").replace('\\', "/");
			let name = match film.rfind('/') {
				Some(slash) => &film[slash + 1..],
				None => &film[..],
			};
			let path = find_file_ci(&self.data_dir, name);
			if !path.is_empty() {
				play_mpeg(&path, &self.cv);
			}
		}
		self.music_on = true;
		self.start_music();
		if self.current < 0 && screenshot.is_empty() {
			self.open_dialog(F::NewP, true);
		}

		if !screenshot.is_empty() {
			// Testing: "quick:<file>" shows the Quick Race screen.
			let quick = screenshot.starts_with("quick:");
			let mut cv = self.cv.borrow_mut();
			self.form_ref(if quick { F::Qr } else { F::Main }).draw(&mut cv, &self.res);
			let file = if quick { &screenshot[6..] } else { screenshot };
			png_write_rgba(file, &cv.px, cv.w, cv.h);
			return 0;
		}
		let mut inp = SysInput::default();
		let mut last_tick = sys_ticks();
		while self.screen != Screen::Quit && !sys_quit_requested() {
			sys_poll(&mut inp);
			let f = self.screen_form();
			let now = sys_ticks();
			let dt = (now.wrapping_sub(last_tick) as f32 / 1000.0).min(0.1);
			last_tick = now;
			if !self.balloon.open {
				self.agent.hide();
			}
			self.agent.update(dt);
			if self.balloon.open || self.topic.open {
				self.help_input(&inp);
				self.draw_screen(f, true, false);
				sys_sleep(10);
				continue;
			}
			if let Some(d) = self.dialogs.last().map(|s| s.form) {
				let top = |m: &Menu| m.dialogs.last().is_some_and(|s| s.form == d);
				if d == F::KeySet {
					self.keyset_frame();
				}
				if top(self) {
					self.input(d, &inp);
				}
				// Escape is the dialog's Cancel (or its cross), Enter its OK (Default).
				if top(self) && inp.key == KEY_ESCAPE {
					self.click(d, "btnCancel");
					if top(self) {
						self.click(d, "btnClose");
					}
				} else if top(self) && inp.key == KEY_ENTER {
					self.click(d, "btnOk1");
				}
				self.draw_screen(f, false, false);
				sys_sleep(10);
				continue;
			}
			if inp.key == KEY_ESCAPE {
				self.ask_close();
			}
			self.input(f, &inp);
			if self.screen == Screen::Difficulty {
				self.show_difficulty();
			}
			if self.screen == Screen::Character {
				self.char_chosen = true;
			}
			// The character's words, then the track.
			if self.char_leave > 0.0 && {
				self.char_leave -= dt;
				self.char_leave <= 0.0
			} {
				self.char_leave = -1.0;
				self.show_tour_track();
				self.screen = Screen::Track;
			}
			if self.track_voice_in > 0.0
				&& {
					self.track_voice_in -= dt;
					self.track_voice_in <= 0.0
				} && self.screen == Screen::Track
			{
				let t = self.tour_tr();
				let chase = self.info.track(t).chase;
				self.voice.say(if chase { "CTI08_" } else { "CTI07_" }, t);
			}
			if self.later.r#in > 0.0
				&& {
					self.later.r#in -= dt;
					self.later.r#in <= 0.0
				} && self.screen == self.later.on
			{
				let (prefix, n) = (self.later.prefix.clone(), self.later.n);
				self.voice.say(&prefix, n);
			}
			if self.screen == Screen::WinFinal && self.final_sample < 3 && {
				self.final_next -= dt;
				self.final_next <= 0.0
			} {
				const SAID: [Option<&str>; 3] = [Some("cdw07_04.wav"), None, Some("ccw08_05.wav")];
				let file = match SAID[self.final_sample as usize] {
					Some(s) => s.to_string(),
					None => numbered("ccw08_", self.tour_ch(), ".wav"),
				};
				self.final_next = if self.voice.play(&file) { self.voice.length + 1.5 } else { 1.5 };
				self.final_sample += 1;
			}
			if self.screen == Screen::TrackIntro && self.intro_leave > 0.0 && {
				self.intro_leave -= dt;
				self.intro_leave <= 0.0
			} {
				self.intro_leave = -1.0;
				self.show_tour_track();
				self.screen = Screen::Track;
			}
			if self.screen == Screen::WinFinal && self.final_film_on {
				let n =
					(sys_ticks().wrapping_sub(self.final_film_start) as f32 / 1000.0 * self.final_film.fps()) as usize;
				let mut frame = Image::default();
				self.final_film.seek(n.min(self.final_film.frames() - 1), &mut frame);
				if let Some(e) = self.final_frame.and_then(|i| self.win_final.extras.get_mut(i)) {
					e.img = Some(Rc::new(frame));
				}
			}
			if self.screen == Screen::Track && sys_ticks() >= self.next_cycle {
				self.next_cycle = sys_ticks().wrapping_add(2000);
				self.cycle = (self.cycle + 1) % 6;
				self.show_tour_track();
			}
			if self.screen == Screen::TourRace {
				let t = self.tour_tr();
				let tr = self.info.track(t).clone();
				let ch = self.tour_ch();
				let mut ro = RaceOptions {
					stage: tr.stage,
					car: self.info.character(ch).car,
					difficulty: self.difficulty,
					..Default::default()
				};
				self.player_race(&mut ro);
				if let Some((ms, _)) = self.record(t) {
					ro.record_lap = ms as f32 / 1000.0;
				}
				ro.laps = tr.laps;
				let cr = self.cr().clone();
				ro.motor = cr.upgrades[0] as i32;
				ro.tyres = cr.upgrades[1] as i32;
				ro.abs = cr.upgrades[2] as i32;
				ro.gearbox = cr.upgrades[3] as i32;
				ro.money = cr.money;
				ro.turbo = cr.turbo as f32;
				if tr.chase {
					ro.checkpoint_speed = self.static_ini.get_int(
						"CHECKPOINTTIME",
						&format!("Difficulty{}", clamp(self.difficulty, 0, 2)),
						110,
					);
				}
				Mixer::get().stop(self.voice.voice);
				self.stop_music();
				let mut r = RaceResult::default();
				race_main(&self.data_dir, &self.race_rcs, &ro, Some(&mut r));
				Mixer::get().open();
				self.start_music();
				if r.quit {
					self.show_tour_track();
					self.screen = Screen::Track;
				} else {
					self.tour_outcome(&r);
					self.check_record(t, &r);
				}
				continue;
			}
			// TfrmQuickRace's OnShown (0x49c6a0): D.T. Harry chosen, with unlock.wav and
			// TfrmUnlock (unlock.tga) over the screen.
			if self.screen == Screen::Quick && self.unlock_due && self.save.unlock_popup_shown == 0 {
				self.unlock_due = false;
				self.save.unlock_popup_shown = 1;
				if self.info.quick_locked_ix >= 0 && (self.info.quick_locked_ix as usize) < self.info.quick_chars.len()
				{
					self.char_ix = self.info.quick_locked_ix as usize;
					self.show_char();
				}
				self.store_player();
				self.voice.play("unlock.wav");
				self.open_dialog(F::Unlock, false);
			}
			if self.screen == Screen::Quick && sys_ticks() >= self.next_cycle {
				self.next_cycle = sys_ticks().wrapping_add(2000);
				self.cycle = (self.cycle + 1) % 6;
				self.show_track();
			}
			if self.screen == Screen::Race {
				let mut ro = RaceOptions::default();
				ro.stage = if self.info.quick_tracks.is_empty() {
					0
				} else {
					let t = self.info.quick_tracks[self.track_ix];
					self.info.track(t).stage
				};
				ro.car = if self.info.quick_chars.is_empty() {
					0
				} else {
					let c = self.info.quick_chars[self.char_ix];
					self.info.character(c).car
				};
				ro.difficulty = self.difficulty;
				self.player_race(&mut ro);
				if !self.info.quick_tracks.is_empty() {
					if let Some((ms, _)) = self.record(self.info.quick_tracks[self.track_ix]) {
						ro.record_lap = ms as f32 / 1000.0;
					}
				}
				self.last = RaceResult::default();
				self.stop_music();
				race_main(&self.data_dir, &self.race_rcs, &ro, Some(&mut self.last));
				Mixer::get().open();
				self.start_music();
				if self.last.quit || self.last.order.is_empty() {
					self.screen = Screen::Quick;
					continue;
				}
				// Drop the rows of an earlier results screen.
				self.results.controls.retain(|c| !c.name.starts_with("row"));
				self.show_results();
				self.screen = Screen::Results;
				if !self.info.quick_tracks.is_empty() {
					let t = self.info.quick_tracks[self.track_ix % self.info.quick_tracks.len()];
					let last = self.last.clone();
					self.check_record(t, &last);
				}
				continue;
			}
			self.draw_screen(f, false, true);
			sys_sleep(10);
		}
		self.store_player();
		0
	}
}

fn step(ix: &mut usize, n: usize, d: i32) {
	*ix = if n != 0 { (*ix + n + (d + n as i32) as usize) % n } else { 0 };
}

fn anchor_size(f: &mut Form, n: &str) -> Option<(i32, i32, i32)> {
	f.get(n).map(|c| (c.x, c.y, c.h))
}

/// Runs the menu until the player quits; races are run from it. 0 on a normal exit.
pub fn menu_main(data_dir: &str, rcs: &Rc<NamedArchive>, screenshot: &str, save_dir: &str) -> i32 {
	let menu_dir = find_file_ci(data_dir, "MenuData");
	let mut prog = DelphiProgram::default();
	if menu_dir.is_empty() || !prog.load(&find_file_ci(&menu_dir, "Menu.exe")) {
		eprintln!("menu: cannot read MenuData/Menu.exe");
		return 1;
	}
	let mut menu_rcs = NamedArchive::default();
	if !menu_rcs.open(&menu_dir, "MenuRcs") {
		eprintln!("menu: cannot read MenuData/MenuRcs");
		return 1;
	}
	let mut caps = IniFile::default();
	let mut menu_ini = IniFile::default();
	let mut static_ini = IniFile::default();
	caps.load(&find_file_ci(&menu_dir, "MenuCaps.ini"));
	menu_ini.load(&find_file_ci(&menu_dir, "menu.ini"));
	static_ini.load(&find_file_ci(&menu_dir, "static.ini"));
	let mut info = Static::default();
	info.load(&static_ini);
	// The player (TSaveGame): settings and Tour progress; see the Players section below.
	let mut save = SaveGame::default();
	save.defaults(&static_ini, info.tour_chars.len() as i32);
	// The menu's font is embedded in the data module's form (MenuFont1: a length, then
	// the TrueType file).
	let mut font = TrueType::default();
	if let Some(mut data) = load_form(&prog, "TData") {
		if let Some(f) = data.find("MenuFont1") {
			if let Some(v) = f.prop("Data") {
				let bytes = latin1_bytes(&v.s);
				if v.kind == DfmValue::BINARY && bytes.len() > 4 {
					font.load(bytes[4..].to_vec());
				}
			}
		}
	}
	let font = Rc::new(font);
	let menu_rcs = Rc::new(menu_rcs);
	let res = MenuResources {
		prog: Some(Rc::new(prog)),
		rcs: Some(menu_rcs.clone()),
		dir: menu_dir.clone(),
		caps: Some(Rc::new(caps)),
		font: Some(font.clone()),
		..Default::default()
	};
	let cv = Rc::new(RefCell::new(Canvas::default()));
	SHOT_CANVAS.with(|s| *s.borrow_mut() = Some(cv.clone()));
	sys_set_screenshot(save_shot);

	let mut m = Menu {
		data_dir: data_dir.to_string(),
		menu_dir: menu_dir.clone(),
		race_rcs: rcs.clone(),
		res,
		font,
		menu_ini,
		static_ini,
		anim_ini: IniFile::default(),
		agent_ini: IniFile::default(),
		info,
		save,
		cv,
		queue: Rc::new(RefCell::new(VecDeque::new())),
		main: Form::default(),
		diff: Form::default(),
		qr: Form::default(),
		unlockf: Form::default(),
		results: Form::default(),
		character: Form::default(),
		currentf: Form::default(),
		trackf: Form::default(),
		garage: Form::default(),
		nomoney: Form::default(),
		qualify: Form::default(),
		win: Form::default(),
		lose: Form::default(),
		win_chase: Form::default(),
		lose_chase: Form::default(),
		win_final: Form::default(),
		intro: Form::default(),
		newp: Form::default(),
		playerf: Form::default(),
		deletep: Form::default(),
		options: Form::default(),
		keyset: Form::default(),
		joyset: Form::default(),
		wheelset: Form::default(),
		startinfo: Form::default(),
		startinfo_kb: Form::default(),
		closedlg: Form::default(),
		doublekeys: Form::default(),
		highscore: Form::default(),
		internet: Form::default(),
		quick: true,
		screen: Screen::Main,
		voice: MenuSound { rcs: Some(menu_rcs), dir: menu_dir, ..Default::default() },
		dialogs: Vec::new(),
		port_ini: IniFile::default(),
		port_ini_path: String::new(),
		menu_music: None,
		music_voice: 0,
		music_on: false,
		difficulty: 1,
		char_chosen: false,
		track_ix: 0,
		char_ix: 0,
		cycle: 0,
		next_cycle: 0,
		last: RaceResult::default(),
		tour_char: 0,
		tour_ix: 0,
		char_leave: -1.0,
		track_voice_in: -1.0,
		just_qualified: false,
		tuneup: 0,
		intro_leave: -1.0,
		tour_done: false,
		later: Later { prefix: String::new(), n: 0, on: Screen::Main, r#in: -1.0 },
		final_sample: 3,
		final_next: 0.0,
		unlock_due: false,
		final_film: CinepakFilm::default(),
		final_film_on: false,
		final_film_start: 0,
		final_frame: None,
		players: Players { dir: save_dir.to_string() },
		current: -1,
		slot_player: BTreeMap::new(),
		newp_from_players: false,
		backup: BTreeMap::new(),
		backup_current: -1,
		edit: SaveGame::default(),
		slider_none: 0,
		key_names: Vec::new(),
		key_edit: [0; 7],
		capturing: -1,
		start_race: None,
		record_track: -1,
		hunny: Rc::new(AgentCharacter::default()),
		agent: AgentPlayer::default(),
		helpfile: WinHelp::default(),
		balloon: Balloon { w: 170, hover: -1, ..Default::default() },
		topic: HelpTopic::default(),
	};
	m.run(screenshot)
}
