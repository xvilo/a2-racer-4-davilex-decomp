//! The game's picture formats, decoded to 32-bit RGBA: TGA (the menu's buttons and the
//! race's textures), BMP (the menu's screens) and 8-bit PCX (the race's textures and
//! palettes).

use crate::res::archive::{rd16, rd32};

#[derive(Default, Clone)]
pub struct Image {
	pub width: i32,
	pub height: i32,
	/// top-down rows, bytes R, G, B, A in memory
	pub pixels: Vec<u32>,
	/// For an 8-bit PCX: the palette indices and the 256-colour palette (RGB).
	pub indices: Vec<u8>,
	pub palette: Vec<u8>,
}

/// RGBA bytes in memory order as one 32-bit value.
#[inline]
pub fn rgba(r: u8, g: u8, b: u8, a: u8) -> u32 {
	u32::from_ne_bytes([r, g, b, a])
}

#[inline]
pub fn rgb(r: u8, g: u8, b: u8) -> u32 {
	rgba(r, g, b, 255)
}

/// A TGA colour (BGR order, 15/16/24/32 bits) as RGBA.
fn tga_colour(b: &[u8], bits: i32) -> u32 {
	if bits == 15 || bits == 16 {
		let v = rd16(b) as u32;
		return rgba(
			((v >> 10 & 31) * 255 / 31) as u8,
			((v >> 5 & 31) * 255 / 31) as u8,
			((v & 31) * 255 / 31) as u8,
			if bits == 15 || v & 0x8000 != 0 { 255 } else { 0 },
		);
	}
	rgba(b[2], b[1], b[0], if bits == 32 { b[3] } else { 255 })
}

pub fn decode_tga(d: &[u8]) -> Option<Image> {
	if d.len() < 18 {
		return None;
	}
	let (idlen, cmtype, typ) = (d[0] as usize, d[1], d[2] as i32);
	let (cmfirst, cmlen, cmbits) = (rd16(&d[3..]) as usize, rd16(&d[5..]) as usize, d[7] as i32);
	let (w, h, bpp, desc) = (rd16(&d[12..]) as usize, rd16(&d[14..]) as usize, d[16] as i32, d[17]);
	let base = typ & !8;
	if base != 1 && base != 2 && base != 3 {
		return None;
	}
	let mut p = 18 + idlen;
	let mut cmap: Vec<u32> = Vec::new();
	if cmtype != 0 {
		let cb = ((cmbits + 7) / 8) as usize;
		if p + cmlen * cb > d.len() {
			return None;
		}
		cmap.resize(cmfirst, 0);
		for i in 0..cmlen {
			cmap.push(tga_colour(&d[p + i * cb..], cmbits));
		}
		p += cmlen * cb;
	}
	let pb = ((bpp + 7) / 8) as usize;
	let count = w * h;
	let mut raw: Vec<u8> = Vec::with_capacity(count * pb);
	if typ & 8 != 0 {
		// RLE: a count byte, then one pixel repeated (high bit) or that many pixels.
		while raw.len() < count * pb && p < d.len() {
			let c = d[p];
			p += 1;
			let n = (c & 0x7f) as usize + 1;
			if c & 0x80 != 0 {
				if p + pb > d.len() {
					return None;
				}
				for _ in 0..n {
					raw.extend_from_slice(&d[p..p + pb]);
				}
				p += pb;
			} else {
				if p + n * pb > d.len() {
					return None;
				}
				raw.extend_from_slice(&d[p..p + n * pb]);
				p += n * pb;
			}
		}
	} else {
		if p + count * pb > d.len() {
			return None;
		}
		raw.extend_from_slice(&d[p..p + count * pb]);
	}
	if raw.len() < count * pb {
		return None;
	}
	let mut out = Image { width: w as i32, height: h as i32, pixels: vec![0; count], ..Default::default() };
	let top_down = desc & 0x20 != 0;
	let right_left = desc & 0x10 != 0;
	for y in 0..h {
		for x in 0..w {
			let px = &raw[(y * w + x) * pb..];
			let c = if base == 1 {
				let i = if pb == 1 { px[0] as usize } else { rd16(px) as usize };
				cmap.get(i).copied().unwrap_or(0)
			} else if base == 3 {
				rgb(px[0], px[0], px[0])
			} else {
				tga_colour(px, bpp)
			};
			let ox = if right_left { w - 1 - x } else { x };
			let oy = if top_down { y } else { h - 1 - y };
			out.pixels[oy * w + ox] = c;
		}
	}
	Some(out)
}

pub fn decode_bmp(d: &[u8]) -> Option<Image> {
	if d.len() < 54 || d[0] != b'B' || d[1] != b'M' {
		return None;
	}
	let off = rd32(&d[10..]) as usize;
	let hsize = rd32(&d[14..]) as usize;
	let w = rd32(&d[18..]) as i32;
	let mut h = rd32(&d[22..]) as i32;
	let bpp = rd16(&d[28..]) as i32;
	let comp = rd32(&d[30..]);
	if (comp != 0 && comp != 3) || (bpp != 8 && bpp != 24 && bpp != 32) || w <= 0 || h == 0 {
		return None;
	}
	let bottom_up = h > 0;
	h = h.abs();
	let mut pal: Vec<u32> = Vec::new();
	if bpp == 8 {
		let mut n = rd32(&d[46..]) as usize;
		if n == 0 {
			n = 256;
		}
		let po = 14 + hsize;
		let mut i = 0;
		while i < n && po + 4 * i + 3 < d.len() {
			pal.push(rgb(d[po + 4 * i + 2], d[po + 4 * i + 1], d[po + 4 * i]));
			i += 1;
		}
		pal.resize(256, 0);
	}
	let (wu, hu) = (w as usize, h as usize);
	let stride = (wu * bpp as usize / 8 + 3) & !3usize;
	if off + stride * hu > d.len() {
		return None;
	}
	let mut out = Image { width: w, height: h, pixels: vec![0; wu * hu], ..Default::default() };
	let bp = (bpp / 8) as usize;
	for y in 0..hu {
		let r = &d[off + stride * if bottom_up { hu - 1 - y } else { y }..];
		let o = &mut out.pixels[y * wu..(y + 1) * wu];
		for x in 0..wu {
			o[x] = if bpp == 8 { pal[r[x] as usize] } else { rgb(r[x * bp + 2], r[x * bp + 1], r[x * bp]) };
		}
	}
	Some(out)
}

pub fn decode_pcx(d: &[u8]) -> Option<Image> {
	if d.len() < 128 + 769 || d[0] != 10 || d[3] != 8 || d[65] != 1 {
		return None;
	}
	let w = (rd16(&d[8..]) as i32 - rd16(&d[4..]) as i32 + 1) as usize;
	let h = (rd16(&d[10..]) as i32 - rd16(&d[6..]) as i32 + 1) as usize;
	let bpl = rd16(&d[66..]) as usize;
	let rle = d[2] == 1;
	let mut rows: Vec<u8> = Vec::with_capacity(bpl * h);
	let mut i = 128;
	while rows.len() < bpl * h && i < d.len() {
		let b = d[i];
		i += 1;
		if rle && b >= 0xC0 && i < d.len() {
			let v = d[i];
			i += 1;
			rows.extend(std::iter::repeat_n(v, (b & 0x3F) as usize));
		} else {
			rows.push(b);
		}
	}
	rows.resize(bpl * h, 0);
	let mut out = Image {
		width: w as i32,
		height: h as i32,
		palette: vec![0; 768],
		indices: vec![0; w * h],
		pixels: vec![0; w * h],
	};
	if d[d.len() - 769] == 12 {
		out.palette.copy_from_slice(&d[d.len() - 768..]);
	}
	for y in 0..h {
		for x in 0..w {
			let i = rows[y * bpl + x];
			let c = &out.palette[i as usize * 3..];
			out.indices[y * w + x] = i;
			out.pixels[y * w + x] = rgb(c[0], c[1], c[2]);
		}
	}
	Some(out)
}

/// By the file name's extension (.tga, .bmp, .pcx).
pub fn decode_image(name: &str, data: &[u8]) -> Option<Image> {
	let lower = name.to_ascii_lowercase();
	if lower.ends_with(".tga") {
		decode_tga(data)
	} else if lower.ends_with(".bmp") {
		decode_bmp(data)
	} else if lower.ends_with(".pcx") {
		decode_pcx(data)
	} else {
		None
	}
}
