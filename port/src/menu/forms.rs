//! The menu's screens as the original builds them: a form from Menu.exe's DFM, its labels'
//! texts, fonts and places as MenuCaps.ini sets them, and its GDI buttons (TGDIButton,
//! TGDIRadioButton, TGDICheckBox) drawn from MenuRcs with the graphics their definitions
//! name: <prefix>_up/_hi (hovered)/_do (down)/_fo (focused)/_di (disabled).tga, and
//! <prefix>_re.bmp, the area that takes clicks. The screen's background is the form class
//! name's first eight letters after "Tfrm" (TfrmMainScreen -> mainscre.bmp).

use std::collections::BTreeMap;
use std::rc::Rc;

use crate::menu::canvas::{Canvas, TrueType};
use crate::menu::delphi::DelphiProgram;
use crate::menu::dfm::{DfmObject, DfmValue, load_form};
use crate::platform::sys::{SysInput, sys_ticks};
use crate::res::archive::{NamedArchive, read_file_ci};
use crate::res::image::{Image, decode_image, rgb};
use crate::xvga::inifile::IniFile;

fn lower(s: &str) -> String {
	s.chars().map(|c| c.to_ascii_lowercase()).collect()
}

/// A Delphi TColor / COLORREF (0x00BBGGRR) as RGBA.
fn colorref(v: i64) -> u32 {
	rgb((v & 0xff) as u8, (v >> 8 & 0xff) as u8, (v >> 16 & 0xff) as u8)
}

/// strtoll(s, nullptr, 0): the leading integer in C's notation (0x.. hex, 0.. octal).
fn strtoll0(s: &str) -> i64 {
	let b = s.as_bytes();
	let mut i = 0;
	while i < b.len() && (b[i] == b' ' || (b'\t'..=b'\r').contains(&b[i])) {
		i += 1;
	}
	let mut neg = false;
	if i < b.len() && (b[i] == b'+' || b[i] == b'-') {
		neg = b[i] == b'-';
		i += 1;
	}
	let mut base = 10;
	if i < b.len() && b[i] == b'0' {
		if i + 2 < b.len() && (b[i + 1] | 0x20) == b'x' && b[i + 2].is_ascii_hexdigit() {
			base = 16;
			i += 2;
		} else {
			base = 8;
		}
	}
	let mut v: i128 = 0;
	while i < b.len() {
		let d = match (b[i] as char).to_digit(base) {
			Some(d) => d as i128,
			None => break,
		};
		v = (v * base as i128 + d).min(i64::MAX as i128 + 1);
		i += 1;
	}
	let v = if neg { -v } else { v };
	v.clamp(i64::MIN as i128, i64::MAX as i128) as i64
}

#[derive(Default)]
pub struct MenuResources {
	pub prog: Option<Rc<DelphiProgram>>,
	pub rcs: Option<Rc<NamedArchive>>,
	pub caps: Option<Rc<IniFile>>,
	pub font: Option<Rc<TrueType>>,
	/// MenuData: the pictures kept beside the archive (SL_EXTERNAL)
	pub dir: String,
	pub cache: BTreeMap<String, Option<Rc<Image>>>,
}

impl MenuResources {
	/// A picture from MenuRcs or MenuData (name with extension); None if missing.
	pub fn image(&mut self, name: &str) -> Option<Rc<Image>> {
		let key = lower(name);
		if let Some(img) = self.cache.get(&key) {
			return img.clone();
		}
		let mut img = None;
		let bytes = self
			.rcs
			.as_ref()
			.and_then(|rcs| rcs.read(&key))
			.or_else(|| if !self.dir.is_empty() { read_file_ci(&self.dir, &key) } else { None });
		if let Some(bytes) = bytes {
			if let Some(mut decoded) = decode_image(&key, &bytes) {
				// BMPs have no alpha: opaque.
				if key.len() > 4 && key.ends_with(".bmp") {
					for p in &mut decoded.pixels {
						*p |= 0xff000000u32;
					}
				}
				img = Some(Rc::new(decoded));
			}
		}
		self.cache.insert(key, img.clone());
		img
	}
}

#[derive(Clone)]
pub struct Control {
	pub kind: i32,
	pub name: String,
	pub cls: String,
	pub x: i32,
	pub y: i32,
	pub w: i32,
	pub h: i32,
	pub visible: bool,
	pub enabled: bool,
	pub checked: bool,
	pub caption: String,
	pub font_px: f32,
	pub colour: u32,
	pub centre: bool,
	pub wrap: bool,
	/// a button's caption, set by the program, along its bottom
	pub show_caption: bool,
	/// ... or in its middle
	pub caption_middle: bool,
	pub definition: String,
	pub on_click: String,
	/// a TEdit's MaxLength (0: any)
	pub max_length: i32,
	/// a slider's position, 0..100
	pub value: i32,
	pub on_change: String,
	/// the panel it is in: radio buttons are one choice per panel
	pub group: String,
	/// a TEdit's Color
	pub back: u32,
	/// Graphics: up, hover, down, focus, disabled; and the click region.
	pub look: [Option<Rc<Image>>; 5],
	pub region: Option<Rc<Image>>,
	pub picture: Option<Rc<Image>>,
}

impl Control {
	pub const OTHER: i32 = 0;
	pub const IMAGE: i32 = 1;
	pub const LABEL: i32 = 2;
	pub const BUTTON: i32 = 3;
	pub const RADIO: i32 = 4;
	pub const CHECK: i32 = 5;
	pub const GRAPHIC: i32 = 6;
	pub const EDIT: i32 = 7;
	pub const SLIDER: i32 = 8;
}

impl Default for Control {
	fn default() -> Self {
		Self {
			kind: Self::OTHER,
			name: String::new(),
			cls: String::new(),
			x: 0,
			y: 0,
			w: 0,
			h: 0,
			visible: true,
			enabled: true,
			checked: false,
			caption: String::new(),
			font_px: 16.0,
			colour: 0xffffffff,
			centre: false,
			wrap: false,
			show_caption: false,
			caption_middle: false,
			definition: String::new(),
			on_click: String::new(),
			max_length: 0,
			value: 0,
			on_change: String::new(),
			group: String::new(),
			back: 0xffffffff,
			look: Default::default(),
			region: None,
			picture: None,
		}
	}
}

/// Pictures the screen's code places itself (status indicators and the like).
#[derive(Clone)]
pub struct Extra {
	pub img: Option<Rc<Image>>,
	pub x: i32,
	pub y: i32,
}

pub struct Form {
	pub cls: String,
	pub background: Option<Rc<Image>>,
	pub controls: Vec<Control>,
	pub handlers: BTreeMap<String, Box<dyn FnMut()>>,
	pub extras: Vec<Extra>,
	pub closed: bool,
	/// A dialog (TfrmCoolDialog and its kind) is drawn centred over the screen behind
	/// it; (x, y) is its top left. Its controls' places are on the screen already.
	pub dialog: bool,
	pub x: i32,
	pub y: i32,
	pub w: i32,
	pub h: i32,

	hover: i32,
	pressed: i32,
	dragging: i32,
	no_text: String,
}

impl Default for Form {
	fn default() -> Self {
		Self {
			cls: String::new(),
			background: None,
			controls: Vec::new(),
			handlers: BTreeMap::new(),
			extras: Vec::new(),
			closed: false,
			dialog: false,
			x: 0,
			y: 0,
			w: 800,
			h: 600,
			hover: -1,
			pressed: -1,
			dragging: -1,
			no_text: String::new(),
		}
	}
}

struct Placed<'a> {
	o: &'a DfmObject,
	ox: i32,
	oy: i32,
	group: String,
}

/// Every component with its place on the form: a panel's children are placed in it.
fn walk<'a>(root: &DfmObject, o: &'a DfmObject, ox: i32, oy: i32, group: &str, all: &mut Vec<Placed<'a>>) {
	all.push(Placed { o, ox, oy, group: group.to_string() });
	let bx = !std::ptr::eq(o, root) && (o.cls == "TPanel" || o.cls == "TGroupBox");
	for c in &o.children {
		if bx {
			walk(root, c, ox + o.get_int("Left", 0), oy + o.get_int("Top", 0), &o.name, all);
		} else {
			walk(root, c, ox, oy, group, all);
		}
	}
}

fn trace() -> bool {
	std::env::var("A2_MENU_TRACE").ok().is_some()
}

impl Form {
	/// Builds the form of class cls; button definitions get the graphic prefixes given
	/// (definition name -> prefix), as the forms' FormCreate code assigns them.
	pub fn load(&mut self, res: &mut MenuResources, klass: &str, prefixes: &BTreeMap<String, String>) -> bool {
		self.cls = klass.to_string();
		let prog = res.prog.clone().expect("MenuResources::prog");
		let Some(dfm) = load_form(&prog, klass) else {
			return false;
		};
		let short_name: String =
			lower(&klass.chars().skip(if klass.chars().count() > 4 { 4 } else { 0 }).collect::<String>())
				.chars()
				.take(8)
				.collect();
		// Dialogs (TfrmCoolDialog.virtual_0e4) name their picture the same way but take a
		// .tga, some a shared one, and take its size.
		let dialog_picture = match klass {
			"TfrmDeletePlayer" | "TfrmDoubleKeys" | "TfrmInternetDlg" => Some("popempty"),
			_ => None,
		};
		let picture = res.image(&format!("{}.tga", dialog_picture.unwrap_or(&short_name)));
		self.background = res.image(&format!("{short_name}.bmp"));
		let mut all = Vec::new();
		walk(&dfm, &dfm, 0, 0, "", &mut all);
		let mut offset: Vec<(i32, i32)> = Vec::new();
		self.w = dfm.get_int("ClientWidth", 800);
		self.h = dfm.get_int("ClientHeight", 600);
		// Dialogs are the TfrmCoolDialog family (TBalloonForm's too); screens fill it.
		self.dialog = false;
		let mut k = klass.to_string();
		while !k.is_empty() && !self.dialog {
			self.dialog = k == "TfrmCoolDialog" || k == "TBalloonForm";
			k = prog.parent(&k);
		}
		if self.dialog {
			if let Some(picture) = &picture {
				self.w = picture.width;
				self.h = picture.height;
				self.background = Some(picture.clone());
			}
		}
		if self.dialog {
			self.x = (800 - self.w) / 2;
			self.y = (600 - self.h) / 2;
		}
		// Button definitions (TGDIButtonDefinition) of this form and of the data module.
		let defs = prefixes.clone();
		for p in &all {
			let o = p.o;
			let mut c =
				Control { group: p.group.clone(), name: o.name.clone(), cls: o.cls.clone(), ..Default::default() };
			if std::ptr::eq(o, &*dfm) {
				continue;
			}
			c.kind = match o.cls.as_str() {
				"TImage" => Control::IMAGE,
				"TLabel" | "TDaviLinkLabel" => Control::LABEL,
				"TGDIButton" => Control::BUTTON,
				"TGDIRadioButton" => Control::RADIO,
				"TGDICheckBox" => Control::CHECK,
				"TGDIGraphic" => Control::GRAPHIC,
				"TEdit" => Control::EDIT,
				"TDaviGraphicSlider" => Control::SLIDER,
				_ => continue,
			};
			c.x = o.get_int("Left", 0);
			c.y = o.get_int("Top", 0);
			c.w = o.get_int("Width", 0);
			c.h = o.get_int("Height", 0);
			c.visible = o.get_bool("Visible", true);
			c.enabled = o.get_bool("Enabled", true);
			c.checked = o.get_bool("Checked", false);
			c.caption = o.get_str("Caption", "");
			c.definition = o.get_str("Definition", "");
			// "Data.gdfBtnNext": a definition in the data module.
			if let Some(dot) = c.definition.rfind('.') {
				c.definition = c.definition[dot + 1..].to_string();
			}
			c.on_click = o.get_str("OnClick", "");
			c.max_length = o.get_int("MaxLength", 0);
			c.on_change = o.get_str("OnChange", "");
			// A slider's track is a picture in its DFM (BackImage): the same as MenuRcs's
			// short and long ones; the thumb is the data module's defSlider (slider.bmp).
			if c.kind == Control::SLIDER {
				c.picture = res.image(if c.w > 150 { "slidelon.bmp" } else { "slidesho.bmp" });
				c.look[0] = res.image("slider.bmp");
			}
			if let Some(bc) = o.prop("Color") {
				if bc.kind == DfmValue::INT {
					c.back = colorref(bc.i);
				}
			}
			if c.kind == Control::EDIT {
				c.caption.clear();
				c.font_px = 14.0;
				c.colour = rgb(0, 0, 0);
			}
			let fh = o.get_int("Font.Height", -13);
			c.font_px = fh.abs() as f32;
			if let Some(fc) = o.prop("Font.Color") {
				c.colour = if fc.kind == DfmValue::INT { colorref(fc.i) } else { rgb(255, 255, 255) };
			}
			c.wrap = o.get_bool("WordWrap", false);
			c.centre = o.get_str("Alignment", "") == "taCenter";
			// Labels are given their text by the program: default to none. Labels named
			// lblAnc... only mark where the program puts things.
			if c.kind == Control::LABEL && (c.caption == c.name || c.name.starts_with("lblAnc")) {
				c.caption.clear();
			}
			self.controls.push(c);
			offset.push((p.ox, p.oy));
		}
		// MenuCaps.ini: [DEFAULT] then [<form class>] <control>.<property>.
		if let Some(ini) = res.caps.clone() {
			let cls = &self.cls;
			let def_colour = colorref(strtoll0(&ini.get_or("DEFAULT", "FontColor", "0x00ffffff")));
			let def_px = ini.get_int("DEFAULT", "FontSize", 12) as f32 * 96.0 / 72.0;
			for c in &mut self.controls {
				if c.kind == Control::LABEL {
					c.colour = def_colour;
					c.font_px = def_px;
				}
				let name = c.name.clone();
				let key = |p: &str| format!("{name}.{p}");
				if ini.has(cls, &key("Caption")) {
					c.caption = ini.get(cls, &key("Caption"));
				}
				if ini.has(cls, &key("Left")) {
					c.x = ini.get_int(cls, &key("Left"), 0);
				}
				if ini.has(cls, &key("Top")) {
					c.y = ini.get_int(cls, &key("Top"), 0);
				}
				if ini.has(cls, &key("FontSize")) {
					c.font_px = ini.get_int(cls, &key("FontSize"), 0) as f32 * 96.0 / 72.0;
				}
				if ini.has(cls, &key("FontColor")) {
					c.colour = colorref(strtoll0(&ini.get(cls, &key("FontColor"))));
				}
			}
		}
		// A dialog's OK button without a definition gets the plain OK one when shown
		// (TGDIButton.SetDefinition with the data module's).
		for c in &mut self.controls {
			if self.dialog && c.name == "btnOk1" && c.definition.is_empty() {
				c.definition = "gdfBtnOkDlg".to_string();
			}
		}
		for (i, c) in self.controls.iter_mut().enumerate() {
			c.x += self.x + offset[i].0;
			c.y += self.y + offset[i].1;
		}
		const STATES: [&str; 5] = ["_up", "_hi", "_do", "_fo", "_di"];
		for c in &mut self.controls {
			let Some(p) = defs.get(&c.definition) else {
				continue;
			};
			for k in 0..5 {
				c.look[k] = res.image(&format!("{}{}.tga", p, STATES[k]));
			}
			c.region = res.image(&format!("{p}_re.bmp"));
			if let Some(up) = &c.look[0] {
				c.w = up.width;
				c.h = up.height;
			}
		}
		true
	}

	pub fn get(&mut self, name: &str) -> Option<&mut Control> {
		self.controls.iter_mut().find(|c| c.name == name)
	}

	pub fn set_graphic(&mut self, res: &mut MenuResources, control: &str, name: &str) {
		if let Some(c) = self.get(control) {
			c.picture = res.image(name);
		}
	}

	fn hit(&self, c: &Control, x: i32, y: i32) -> bool {
		if !c.visible || !c.enabled || x < c.x || y < c.y || x >= c.x + c.w || y >= c.y + c.h {
			return false;
		}
		// The region bitmap: the colour of its bottom left pixel is outside (Delphi's
		// TransparentMode tmAuto), everything else inside.
		if let Some(r) = &c.region {
			if x - c.x < r.width && y - c.y < r.height {
				let outside = r.pixels[(r.height - 1) as usize * r.width as usize] & 0xffffff;
				return (r.pixels[(y - c.y) as usize * r.width as usize + (x - c.x) as usize] & 0xffffff) != outside;
			}
		}
		true
	}

	pub fn draw(&self, cv: &mut Canvas, res: &MenuResources) {
		if !self.dialog {
			cv.clear(rgb(0, 0, 0));
		}
		if let Some(bg) = &self.background {
			cv.blit(bg, self.x, self.y, 1.0);
		}
		for (i, c) in self.controls.iter().enumerate() {
			if !c.visible {
				continue;
			}
			let i = i as i32;
			match c.kind {
				Control::IMAGE | Control::GRAPHIC => {
					if let Some(p) = &c.picture {
						cv.blit(p, c.x, c.y, 1.0);
					}
				}
				Control::BUTTON | Control::RADIO | Control::CHECK => {
					let s = if !c.enabled {
						4
					} else if i == self.pressed && i == self.hover {
						2
					} else if c.checked {
						2
					} else if i == self.hover {
						1
					} else {
						0
					};
					if let Some(img) = c.look[s].as_ref().or(c.look[0].as_ref()) {
						cv.blit(img, c.x, c.y, 1.0);
					}
					if let Some(font) = &res.font {
						if c.show_caption && !c.caption.is_empty() {
							font.draw(
								cv,
								c.x + ((c.w as f32 - font.width(&c.caption, c.font_px)) / 2.0) as i32,
								if c.caption_middle {
									c.y + (c.h - c.font_px as i32) / 2
								} else {
									c.y + c.h - c.font_px as i32 - 12
								},
								&c.caption,
								c.font_px,
								c.colour,
							);
						}
					}
				}
				Control::LABEL => {
					if let Some(font) = &res.font {
						if !c.caption.is_empty() {
							let lines = if c.wrap {
								font.wrap(&c.caption, c.font_px, c.w as f32)
							} else {
								vec![c.caption.clone()]
							};
							let lh = c.font_px * 1.15;
							for (l, line) in lines.iter().enumerate() {
								let mut lx = c.x;
								if c.centre {
									lx += ((c.w as f32 - font.width(line, c.font_px)) / 2.0) as i32;
								}
								font.draw(cv, lx, c.y + (l as f32 * lh) as i32, line, c.font_px, c.colour);
							}
						}
					}
				}
				Control::SLIDER => {
					if let Some(p) = &c.picture {
						cv.blit(p, c.x, c.y, 1.0);
					}
					if let Some(thumb) = &c.look[0] {
						let tw = thumb.width;
						cv.blit(thumb, c.x + (c.w - tw) * c.value.clamp(0, 100) / 100, c.y, 1.0);
					}
				}
				Control::EDIT => {
					cv.fill(c.x, c.y, c.w, c.h, c.back, 1.0);
					let t = format!("{}{}", c.caption, if (sys_ticks() / 500) % 2 != 0 { "_" } else { "" });
					if let Some(font) = &res.font {
						font.draw(cv, c.x + 3, c.y + (c.h - c.font_px as i32) / 2, &t, c.font_px, c.colour);
					}
				}
				_ => {}
			}
		}
		for e in &self.extras {
			if let Some(img) = &e.img {
				cv.blit(img, e.x, e.y, 1.0);
			}
		}
	}

	/// The text field's text (the form's first TEdit).
	pub fn text(&mut self) -> &mut String {
		match self.controls.iter_mut().find(|c| c.kind == Control::EDIT) {
			Some(c) => &mut c.caption,
			None => &mut self.no_text,
		}
	}

	/// Mouse and keys: hovering, pressing, clicking (runs the control's handler).
	pub fn input(&mut self, inp: &SysInput) {
		for c in &mut self.controls {
			if c.kind != Control::EDIT || !c.visible {
				continue;
			}
			let mut k = 0;
			while k < inp.backspaces && !c.caption.is_empty() {
				c.caption.pop();
				k += 1;
			}
			for ch in inp.text.chars() {
				if (ch as u32) >= 32 && (c.max_length == 0 || (c.caption.chars().count() as i32) < c.max_length) {
					c.caption.push(ch);
				}
			}
			break;
		}
		// Sliders: the thumb follows the mouse while the button is held on the track.
		if inp.mouse_pressed {
			self.dragging = -1;
			for (i, c) in self.controls.iter().enumerate() {
				if c.kind == Control::SLIDER
					&& c.visible && inp.mouse_x >= c.x
					&& inp.mouse_x < c.x + c.w
					&& inp.mouse_y >= c.y
					&& inp.mouse_y < c.y + c.h
				{
					self.dragging = i as i32;
				}
			}
		}
		if self.dragging >= 0 && (inp.mouse_down || inp.mouse_pressed || inp.mouse_clicked) {
			let c = &mut self.controls[self.dragging as usize];
			let tw = c.look[0].as_ref().map_or(6, |t| t.width);
			let v = if c.w > tw { (inp.mouse_x - c.x - tw / 2) * 100 / (c.w - tw) } else { 0 };
			let v = v.clamp(0, 100);
			if v != c.value {
				c.value = v;
				if let Some(h) = self.handlers.get_mut(&c.on_change) {
					h();
				}
			}
		}
		if !inp.mouse_down {
			self.dragging = -1;
		}
		self.hover = -1;
		for i in (0..self.controls.len()).rev() {
			let c = &self.controls[i];
			let clickable = c.kind == Control::BUTTON
				|| c.kind == Control::RADIO
				|| c.kind == Control::CHECK
				|| (c.kind == Control::LABEL && !c.on_click.is_empty());
			if clickable && self.hit(c, inp.mouse_x, inp.mouse_y) {
				self.hover = i as i32;
				break;
			}
		}
		if inp.mouse_pressed {
			self.pressed = self.hover;
		}
		if inp.mouse_clicked && trace() {
			println!(
				"menu: click at {},{} on {} (pressed {})",
				inp.mouse_x,
				inp.mouse_y,
				if self.hover >= 0 { self.controls[self.hover as usize].name.as_str() } else { "nothing" },
				self.pressed
			);
		}
		if inp.mouse_clicked {
			if self.pressed >= 0 && self.pressed == self.hover {
				self.activate(self.pressed as usize);
			}
			self.pressed = -1;
		}
	}

	/// Clicks a control as the mouse would (Delphi's Click: a label's OnClick clicks its
	/// radio button, say).
	pub fn click(&mut self, name: &str) {
		for i in 0..self.controls.len() {
			let c = &self.controls[i];
			if c.name == name && c.visible && c.enabled {
				self.activate(i);
				return;
			}
		}
	}

	fn activate(&mut self, i: usize) {
		if self.controls[i].kind == Control::RADIO {
			let group = self.controls[i].group.clone();
			for o in &mut self.controls {
				if o.kind == Control::RADIO && o.group == group {
					o.checked = false;
				}
			}
			self.controls[i].checked = true;
		} else if self.controls[i].kind == Control::CHECK {
			self.controls[i].checked = !self.controls[i].checked;
		}
		let c = &self.controls[i];
		let key = if c.on_click.is_empty() { &c.name } else { &c.on_click };
		let h = self.handlers.get_mut(key);
		if trace() {
			println!(
				"menu: {} clicked {} ({}){}",
				self.cls,
				c.name,
				c.on_click,
				if h.is_none() { ": no handler" } else { "" }
			);
		}
		if let Some(h) = h {
			h();
		}
	}
}

#[cfg(test)]
mod tests {
	use super::*;
	use crate::menu::delphi::test_program;

	#[test]
	fn strtoll_base_zero() {
		assert_eq!(strtoll0("0x00ffffff"), 0xffffff);
		assert_eq!(strtoll0("  255"), 255);
		assert_eq!(strtoll0("010"), 8);
		assert_eq!(strtoll0("-0x10"), -16);
		assert_eq!(strtoll0("0x"), 0);
		assert_eq!(strtoll0("junk"), 0);
	}

	#[test]
	fn main_screen_loads() {
		let Some(prog) = test_program() else {
			return;
		};
		let dir = crate::res::archive::find_file_ci(&crate::res::archive::test_data(), "MenuData");
		let mut rcs = NamedArchive::default();
		assert!(rcs.open(&dir, "MenuRcs"));
		let mut caps = IniFile::default();
		caps.load(&crate::res::archive::find_file_ci(&dir, "MenuCaps.ini"));
		let mut res = MenuResources {
			prog: Some(Rc::new(prog)),
			rcs: Some(Rc::new(rcs)),
			caps: Some(Rc::new(caps)),
			dir,
			..Default::default()
		};
		let mut main = Form::default();
		let prefixes: BTreeMap<String, String> =
			[("gdfBtnTour", "tour"), ("gdfBtnQR", "quick"), ("gdfBtnOptions", "optio"), ("gdfBtnPlayer", "playe")]
				.into_iter()
				.map(|(k, v)| (k.to_string(), v.to_string()))
				.collect();
		assert!(main.load(&mut res, "TfrmMainScreen", &prefixes));
		assert!(main.background.is_some());
		assert!(!main.dialog);
		assert!(main.controls.iter().any(|c| c.kind == Control::BUTTON && c.look[0].is_some()));
		assert!(main.get("btnClose").is_some());
	}
}
