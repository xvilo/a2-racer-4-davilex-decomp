//! A port-only preview: flies along a stage's road, to check the stage files and the 3D
//! code (--race-view <stage>).

use std::rc::Rc;

use crate::engine::render::{Renderer, gl_look_at, gl_perspective, gl_rotate};
use crate::engine::texture::TextureManager;
use crate::game::track::{MeshCache, Track};
use crate::platform::gl::*;
use crate::platform::sys::*;
use crate::res::archive::NamedArchive;

const PI: f32 = 3.14159265;

pub fn race_view(data_dir: &str, rcs: &Rc<NamedArchive>, stage: i32, league: i32) -> i32 {
	let mut track = Track::default();
	let err = track.load(data_dir, stage, league);
	if !err.is_empty() {
		eprintln!("race view: {}", err);
		return 1;
	}
	let mut polys: usize = 0;
	for c in &track.road.chunks {
		for l in &c.lists {
			polys += l.len();
		}
	}
	println!(
		"race view: stage {} ({}, {}): {} chunks, {} quads, {} objects",
		stage,
		track.info.file,
		track.info.name,
		track.road.chunks.len(),
		polys,
		track.objects.len()
	);
	let textures = TextureManager::new(rcs.clone());
	let mut meshes = MeshCache::new(rcs.clone());
	let r = Renderer::new(&textures);
	let road_tex: [u32; 4] = [
		textures.get(&track.info.road_texture),
		textures.get(&track.info.grass_texture),
		textures.get(&track.info.grass2_texture),
		textures.get(&track.info.rail_texture),
	];
	let sky = track.animation("sky");

	let chunks = &track.road.chunks;
	if chunks.len() < 2 {
		return 1;
	}
	// The camera follows the middle of each chunk's road surface (list 0).
	let mut centre: Vec<[f32; 3]> = vec![[0.0; 3]; chunks.len()];
	for i in 0..chunks.len() {
		let mut sum = [0.0f32; 3];
		let mut n = 0;
		for q in &chunks[i].lists[0] {
			for v in &q.v {
				sum[0] += v.x;
				sum[1] += v.y;
				sum[2] += v.z;
				n += 1;
			}
		}
		for k in 0..3 {
			centre[i][k] = if n != 0 { sum[k] / n as f32 } else { chunks[i].pos[k] };
		}
	}
	// chunks travelled
	let mut pos: f32 = 0.0;
	let mut last = sys_ticks();
	let mut input = SysInput::default();
	while !sys_quit_requested() {
		sys_poll(&mut input);
		if input.key == KEY_ESCAPE {
			break;
		}
		let now = sys_ticks();
		pos += now.wrapping_sub(last) as f32 * 0.006;
		last = now;
		let n = chunks.len();
		let c = pos as usize % n;
		let f = pos - pos.floor();
		let a = &centre[c];
		let b = &centre[(c + 1) % n];
		let ahead = &centre[(c + 4) % n];
		let eye = [a[0] + (b[0] - a[0]) * f, a[1] + (b[1] - a[1]) * f + 30.0, a[2] + (b[2] - a[2]) * f];
		let target = [ahead[0], ahead[1] + 20.0, ahead[2]];

		let Some((w, h)) = sys_gl_begin_frame() else { break };
		gl_perspective(60.0 * PI / 180.0, w as f32 / h as f32, 4.0, 30000.0);
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_LEQUAL);
		glDisable(GL_CULL_FACE);
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE as GLint);
		gl_look_at(&eye, &target);
		// The sky around the camera, behind everything.
		if let Some(sky) = sky
			&& !sky.is_empty()
			&& let Some(m) = meshes.get(&sky[0].mesh)
		{
			glPushMatrix();
			glTranslatef(eye[0], eye[1], eye[2]);
			glDepthMask(GL_FALSE);
			r.draw_mesh(&m, textures.get(&sky[0].texture), None);
			glDepthMask(GL_TRUE);
			glPopMatrix();
		}
		// Game.ini [OPTIONS] visiblechunks: 25 ahead (and a few behind).
		for k in -3i32..25 {
			r.draw_chunk(&chunks[(c + n).wrapping_add(k as usize) % n], &road_tex);
		}
		for o in &track.objects {
			let d = ((o.chunk - c as i32) % n as i32 + n as i32) % n as i32;
			if d > 25 && d < n as i32 - 3 {
				continue;
			}
			let Some(frames) = track.animation(&o.animation) else { continue };
			if frames.is_empty() {
				continue;
			}
			let Some(m) = meshes.get(&frames[0].mesh) else { continue };
			glPushMatrix();
			glTranslatef(o.pos[0], o.pos[1], o.pos[2]);
			gl_rotate(o.rot[1], 0.0, 1.0, 0.0);
			gl_rotate(o.rot[0], 1.0, 0.0, 0.0);
			gl_rotate(o.rot[2], 0.0, 0.0, 1.0);
			r.draw_mesh(&m, textures.get(&frames[0].texture), None);
			glPopMatrix();
		}
		sys_gl_end_frame();
	}
	0
}
