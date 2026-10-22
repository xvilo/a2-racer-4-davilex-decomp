//! Writes PNG files (screenshots for testing), without a compression library: the image
//! data goes into stored deflate blocks.

use std::fs;

fn crc32_update(crc: u32, p: &[u8]) -> u32 {
	static TABLE: std::sync::OnceLock<[u32; 256]> = std::sync::OnceLock::new();
	let table = TABLE.get_or_init(|| {
		let mut t = [0u32; 256];
		for (i, e) in t.iter_mut().enumerate() {
			let mut c = i as u32;
			for _ in 0..8 {
				c = if c & 1 != 0 { 0xEDB88320 ^ (c >> 1) } else { c >> 1 };
			}
			*e = c;
		}
		t
	});
	let mut crc = !crc;
	for &b in p {
		crc = table[((crc ^ b as u32) & 0xFF) as usize] ^ (crc >> 8);
	}
	!crc
}

fn chunk(f: &mut Vec<u8>, tag: &[u8; 4], body: &[u8]) {
	f.extend_from_slice(&(body.len() as u32).to_be_bytes());
	f.extend_from_slice(tag);
	f.extend_from_slice(body);
	f.extend_from_slice(&crc32_update(crc32_update(0, tag), body).to_be_bytes());
}

/// An image of w x h pixels, 4 bytes each (R, G, B, A) in memory; false on failure.
pub fn png_write_rgba(path: &str, rgba: &[u32], w: i32, h: i32) -> bool {
	let mut f = vec![0x89, b'P', b'N', b'G', b'\r', b'\n', 0x1A, b'\n'];
	let mut ihdr = [0u8; 13];
	ihdr[0..4].copy_from_slice(&(w as u32).to_be_bytes());
	ihdr[4..8].copy_from_slice(&(h as u32).to_be_bytes());
	ihdr[8] = 8; // bit depth
	ihdr[9] = 6; // RGBA
	chunk(&mut f, b"IHDR", &ihdr);
	// The rows, each with filter type 0, wrapped in a zlib stream of stored blocks.
	let (w, h) = (w as usize, h as usize);
	let mut raw = Vec::with_capacity((w * 4 + 1) * h);
	for y in 0..h {
		raw.push(0);
		for p in &rgba[y * w..(y + 1) * w] {
			raw.extend_from_slice(&p.to_ne_bytes());
		}
	}
	let mut z = vec![0x78, 0x01];
	let (mut a, mut b) = (1u32, 0u32);
	for &c in &raw {
		a = (a + c as u32) % 65521;
		b = (b + a) % 65521;
	}
	let mut pos = 0;
	loop {
		let n = (raw.len() - pos).min(65535);
		z.push(if pos + n >= raw.len() { 1 } else { 0 });
		z.extend_from_slice(&(n as u16).to_le_bytes());
		z.extend_from_slice(&(!(n as u16)).to_le_bytes());
		z.extend_from_slice(&raw[pos..pos + n]);
		pos += n;
		if pos >= raw.len() {
			break;
		}
	}
	z.extend_from_slice(&(b << 16 | a).to_be_bytes());
	chunk(&mut f, b"IDAT", &z);
	chunk(&mut f, b"IEND", &[]);
	fs::write(path, f).is_ok()
}
