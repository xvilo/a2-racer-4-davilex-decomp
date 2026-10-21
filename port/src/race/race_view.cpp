#include "race/race_view.h"

#include <array>
#include <cmath>
#include <cstdio>

static const float PI = 3.14159265f;

#include "engine/render.h"
#include "engine/texture.h"
#include "game/track.h"
#include "platform/gl.h"
#include "platform/sys.h"
#include "res/archive.h"


int race_view(const std::string &data_dir, const NamedArchive &rcs, int stage, int league)
{
	Track track;
	std::string err = track.load(data_dir, stage, league);
	if (!err.empty()) {
		fprintf(stderr, "race view: %s\n", err.c_str());
		return 1;
	}
	size_t polys = 0;
	for (const auto &c : track.road.chunks) {
		for (const auto &l : c.lists)
			polys += l.size();
	}
	printf("race view: stage %d (%s, %s): %zu chunks, %zu quads, %zu objects\n", stage, track.info.file.c_str(),
		track.info.name.c_str(), track.road.chunks.size(), polys, track.objects.size());
	TextureManager textures(rcs);
	MeshCache meshes(rcs);
	Renderer r{ textures };
	const unsigned road_tex[4] = { textures.get(track.info.road_texture), textures.get(track.info.grass_texture),
		textures.get(track.info.grass2_texture), textures.get(track.info.rail_texture) };
	const std::vector<AnimFrame> *sky = track.animation("sky");

	const auto &chunks = track.road.chunks;
	if (chunks.size() < 2)
		return 1;
	/* The camera follows the middle of each chunk's road surface (list 0). */
	std::vector<std::array<float, 3>> centre(chunks.size());
	for (size_t i = 0; i < chunks.size(); i++) {
		float sum[3] = {};
		int n = 0;
		for (const RoadQuad &q : chunks[i].lists[0]) {
			for (const RoadVertex &v : q.v) {
				sum[0] += v.x;
				sum[1] += v.y;
				sum[2] += v.z;
				n++;
			}
		}
		for (int k = 0; k < 3; k++)
			centre[i][k] = n ? sum[k] / n : chunks[i].pos[k];
	}
	float pos = 0; /* chunks travelled */
	uint32_t last = sys_ticks();
	SysInput in;
	while (!sys_quit_requested()) {
		sys_poll(in);
		if (in.key == KEY_ESCAPE)
			break;
		uint32_t now = sys_ticks();
		pos += (now - last) * 0.006f;
		last = now;
		size_t n = chunks.size();
		size_t c = (size_t)pos % n;
		float f = pos - floorf(pos);
		const float *a = centre[c].data(), *b = centre[(c + 1) % n].data(), *ahead = centre[(c + 4) % n].data();
		float eye[3] = { a[0] + (b[0] - a[0]) * f, a[1] + (b[1] - a[1]) * f + 30, a[2] + (b[2] - a[2]) * f };
		float target[3] = { ahead[0], ahead[1] + 20, ahead[2] };

		int w, h;
		if (!sys_gl_begin_frame(w, h))
			break;
		gl_perspective(60 * PI / 180, (float)w / (float)h, 4, 30000);
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_LEQUAL);
		glDisable(GL_CULL_FACE);
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
		gl_look_at(eye, target);
		/* The sky around the camera, behind everything. */
		if (sky && !sky->empty()) {
			const Mesh *m = meshes.get((*sky)[0].mesh);
			if (m) {
				glPushMatrix();
				glTranslatef(eye[0], eye[1], eye[2]);
				glDepthMask(GL_FALSE);
				r.draw_mesh(*m, textures.get((*sky)[0].texture));
				glDepthMask(GL_TRUE);
				glPopMatrix();
			}
		}
		/* Game.ini [OPTIONS] visiblechunks: 25 ahead (and a few behind). */
		for (int k = -3; k < 25; k++)
			r.draw_chunk(chunks[(c + n + (size_t)k) % n], road_tex);
		for (const TrackObject &o : track.objects) {
			int d = ((o.chunk - (int)c) % (int)n + (int)n) % (int)n;
			if (d > 25 && d < (int)n - 3)
				continue;
			const std::vector<AnimFrame> *frames = track.animation(o.animation);
			if (!frames || frames->empty())
				continue;
			const Mesh *m = meshes.get((*frames)[0].mesh);
			if (!m)
				continue;
			glPushMatrix();
			glTranslatef(o.pos[0], o.pos[1], o.pos[2]);
			gl_rotate(-o.rot[1], 0, 1, 0);
			gl_rotate(o.rot[0], 1, 0, 0);
			gl_rotate(o.rot[2], 0, 0, 1);
			r.draw_mesh(*m, textures.get((*frames)[0].texture));
			glPopMatrix();
		}
		sys_gl_end_frame();
	}
	return 0;
}
