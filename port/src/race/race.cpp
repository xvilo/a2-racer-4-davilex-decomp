#include "race/race.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>

#include "engine/collision.h"
#include "engine/render.h"
#include "engine/texture.h"
#include "game/car.h"
#include "game/track.h"
#include "platform/gl.h"
#include "platform/sys.h"
#include "res/archive.h"
#include "xvga/inifile.h"

static const float PI = 3.14159265f;
/* The physics runs at a fixed rate, whatever the frame rate. */
static const float STEP = 0.01f;

namespace {

/* The keys from game.ini [INPUT] (Windows virtual-key codes). */
struct Keys {
	int left = 37, right = 39, up = 38, down = 40;

	void load(const std::string &dir)
	{
		IniFile ini;
		std::string path = find_file_ci(dir, "game.ini");
		if (path.empty() || !ini.load(path))
			return;
		left = ini.get_int("INPUT", "LEFT", left);
		right = ini.get_int("INPUT", "RIGHT", right);
		up = ini.get_int("INPUT", "UP", up);
		down = ini.get_int("INPUT", "DOWN", down);
	}
};

struct CarModel {
	const Mesh *body = nullptr, *wheel = nullptr, *windows = nullptr;
	unsigned body_tex = 0, wheel_tex = 0, windows_tex = 0;
};

void draw_car(Renderer &r, const Car &car, const CarModel &m)
{
	float right[3], up[3], fwd[3];
	car.axes(right, up, fwd);
	glPushMatrix();
	gl_mult_world(right, up, fwd, car.pos);
	if (m.body)
		r.draw_mesh(*m.body, m.body_tex);
	if (m.windows)
		r.draw_mesh(*m.windows, m.windows_tex);
	if (m.wheel) {
		const float *wp[2] = { car.spec.wheel_front, car.spec.wheel_rear };
		for (int axle = 0; axle < 2; axle++) {
			for (int side = -1; side <= 1; side += 2) {
				glPushMatrix();
				glTranslatef(side * wp[axle][0], wp[axle][1] + 3.5f, wp[axle][2]);
				if (axle == 0)
					gl_rotate(car.steer * 180 / PI, 0, 1, 0);
				if (side < 0)
					gl_rotate(180, 0, 1, 0);
				gl_rotate((side < 0 ? -1 : 1) * car.wheel_spin * 180 / PI, 1, 0, 0);
				r.draw_mesh(*m.wheel, m.wheel_tex);
				glPopMatrix();
			}
		}
	}
	glPopMatrix();
}

} // namespace

int race_main(const std::string &data_dir, const NamedArchive &rcs, const RaceOptions &opt)
{
	Track track;
	std::string err = track.load(data_dir, opt.stage, opt.league);
	if (err.empty() && track.road.chunks.size() < 2)
		err = "the stage has no road";
	Car car;
	if (err.empty())
		err = car.spec.load(data_dir, "league" + std::to_string(opt.league), opt.car, opt.motor, opt.gearbox);
	if (!err.empty()) {
		fprintf(stderr, "race: %s\n", err.c_str());
		return 1;
	}
	printf("race: stage %d (%s), car %s (%s): %.0f kg, top speed %.0f km/h, %d gears\n", opt.stage,
		track.info.name.c_str(), car.spec.name.c_str(), car.spec.animation.c_str(), car.spec.mass,
		car.spec.top_speed, car.spec.gear_count);
	CollisionWorld world;
	world.build(track.road);
	TextureManager textures(rcs);
	MeshCache meshes(rcs);
	Renderer r{ textures };
	const unsigned road_tex[4] = { textures.get(track.info.road_texture), textures.get(track.info.grass_texture),
		textures.get(track.info.grass2_texture), textures.get(track.info.rail_texture) };
	const std::vector<AnimFrame> *sky = track.animation("sky");
	CarModel model;
	if (const std::vector<AnimFrame> *f = track.animation(car.spec.animation)) {
		auto frame = [&](size_t i, const Mesh *&mesh, unsigned &tex) {
			if (i < f->size()) {
				mesh = meshes.get((*f)[i].mesh);
				tex = textures.get((*f)[i].texture);
			}
		};
		frame(0, model.body, model.body_tex);
		frame(1, model.wheel, model.wheel_tex);
		frame(2, model.windows, model.windows_tex);
	}
	Keys keys;
	keys.load(data_dir);

	/* The grid: just behind the start line, which the race crosses towards higher chunks. */
	int start = std::max(track.find_trigger(13), 0);
	/* Testing: A2_START=<chunk> starts elsewhere on the road. */
	if (const char *st = getenv("A2_START"))
		start = atoi(st) + 2;
	car.place(world, track, start - 2, 0);
	const int n = (int)track.road.chunks.size();
	float cam[3] = { car.pos[0] - sinf(car.yaw) * 60, car.pos[1] + 25, car.pos[2] - cosf(car.yaw) * 60 };
	/* 0 chase, 1 driver, 2 and 3 beside and in front of the car (looking at it). */
	int camera = 0;
	uint32_t last = sys_ticks();
	float acc = 0;
	/* Testing: A2_TRACE=1 prints the car's state every second. */
	const char *trace_env = getenv("A2_TRACE");
	bool trace = trace_env && *trace_env && *trace_env != '0';
	float clock = 0, next_trace = 1;
	float stuck_time = 0, reverse_time = 0;
	/* Where the car last drove on the road, for putting it back: a few seconds' worth, so
	 * the spot isn't the one it just crashed from. */
	struct Safe {
		float pos[3], yaw, time;
	};
	std::vector<Safe> safe;
	safe.push_back({ { car.pos[0], car.pos[1], car.pos[2] }, car.yaw, 0 });
	auto respawn = [&]() {
		const Safe *best = &safe.front();
		for (const Safe &sp : safe) {
			if (sp.time <= clock - 2)
				best = &sp;
		}
		car.place_at(world, best->pos, best->yaw);
		/* Don't go back further than this again. */
		Safe keep = *best;
		keep.time = clock - 2;
		safe.assign(1, keep);
	};
	int stuck_count = 0;
	SysInput in;
	while (!sys_quit_requested()) {
		sys_poll(in);
		if (in.key == KEY_ESCAPE)
			break;
		if (in.key == 'c' || in.key == 'C')
			camera = (camera + 1) % 4;
		if (in.key == 'r' || in.key == 'R')
			respawn();
		uint32_t now = sys_ticks();
		float frame_dt = std::min((now - last) / 1000.0f, 0.1f);
		acc += frame_dt;
		last = now;

		CarInput ci;
		if (opt.autopilot) {
			/* Follow the drive map's lane nearest the car that runs the car's way, aiming a
			 * few nodes ahead; ease off in sharp turns. */
			float t[3] = { car.pos[0] + sinf(car.yaw) * 100, car.pos[1], car.pos[2] + cosf(car.yaw) * 100 };
			int nd = -1;
			float bd = 1e30f;
			for (size_t i = 0; i < track.drive.size(); i++) {
				const DriveNode &dn = track.drive[i];
				if (dn.next < 0 || dn.next >= (int)track.drive.size())
					continue;
				float dx = dn.pos[0] - car.pos[0], dz = dn.pos[2] - car.pos[2], dist = dx * dx + dz * dz;
				const float *nx = track.drive[(size_t)dn.next].pos;
				float dirx = nx[0] - dn.pos[0], dirz = nx[2] - dn.pos[2];
				if (dirx * sinf(car.yaw) + dirz * cosf(car.yaw) <= 0 || dist > bd)
					continue;
				bd = dist;
				nd = (int)i;
			}
			if (nd >= 0) {
				for (int k = 0; k < 3 && track.drive[(size_t)nd].next >= 0; k++)
					nd = track.drive[(size_t)nd].next;
				std::copy(track.drive[(size_t)nd].pos, track.drive[(size_t)nd].pos + 3, t);
			}
			float want = atan2f(t[0] - car.pos[0], t[2] - car.pos[2]);
			float d = remainderf(want - car.yaw, 2 * PI);
			ci.steer = std::clamp(d * 2.5f, -1.0f, 1.0f);
			ci.throttle = fabsf(d) > 0.5f && car.speed_kmh() > 40 ? 0.0f : 1.0f;
			ci.brake = fabsf(d) > 0.8f && car.speed_kmh() > 50 ? 1.0f : 0.0f;
			/* Stuck against something: back out, steering the other way. */
			if (car.speed_kmh() < 3)
				stuck_time += frame_dt;
			else if (reverse_time <= 0)
				stuck_time = 0;
			if (stuck_time > 1.5f && reverse_time <= 0) {
				reverse_time = 1.5f;
				stuck_count++;
			}
			if (reverse_time > 0) {
				reverse_time -= frame_dt;
				ci.throttle = 0;
				ci.brake = 1;
				ci.steer = -ci.steer;
				if (reverse_time <= 0)
					stuck_time = 0;
			}
			/* Backing out didn't help: put it back on the road. */
			if (stuck_count >= 3) {
				respawn();
				stuck_count = 0;
			}
			if (car.speed_kmh() > 30)
				stuck_count = 0;
		}
		else {
			ci.steer = (keyispressed(keys.right) ? 1.0f : 0.0f) - (keyispressed(keys.left) ? 1.0f : 0.0f);
			ci.throttle = keyispressed(keys.up) ? 1.0f : 0.0f;
			ci.brake = keyispressed(keys.down) ? 1.0f : 0.0f;
		}
		while (acc >= STEP) {
			car.step(world, ci, STEP);
			acc -= STEP;
			clock += STEP;
		}
		if (trace && clock >= next_trace) {
			printf("t %4.0f s  chunk %3d  %5.1f km/h  gear %d  %4.0f rpm  steer %+.2f thr %.0f brk %.0f%s%s\n", clock,
				car.chunk, car.speed_kmh(), car.gear, car.rpm, ci.steer, ci.throttle, ci.brake,
				car.on_grass ? "  grass" : "", car.airborne ? "  air" : "");
			printf("      pos %.0f %.0f %.0f  yaw %.2f%s\n", car.pos[0], car.pos[1], car.pos[2], car.yaw,
				car.touching_wall ? "  WALL" : "");
			fflush(stdout);
			next_trace += trace_env[0] == '2' ? 0.2f : 1;
		}
		/* Fallen off the world: back on the road. */
		if (car.airborne && car.vel[1] < -40)
			respawn();
		if (!car.airborne && !car.on_grass && car.speed_kmh() > 15 && clock - safe.back().time > 0.5f) {
			safe.push_back({ { car.pos[0], car.pos[1], car.pos[2] }, car.yaw, clock });
			if (safe.size() > 20)
				safe.erase(safe.begin());
		}

		/* The camera: behind and above, following smoothly; or the driver's view. */
		float right[3], up[3], fwd[3];
		car.axes(right, up, fwd);
		float eye[3], target[3];
		if (camera >= 2) {
			const float *dir = camera == 2 ? right : fwd;
			for (int i = 0; i < 3; i++) {
				eye[i] = car.pos[i] + dir[i] * 45 + up[i] * 12;
				target[i] = car.pos[i] + up[i] * 6;
			}
		}
		else if (camera == 0) {
			float want[3] = { car.pos[0] - sinf(car.yaw) * 55, car.pos[1] + 22, car.pos[2] - cosf(car.yaw) * 55 };
			float k = 1 - expf(-8 * (1 / 60.0f));
			for (int i = 0; i < 3; i++)
				cam[i] += (want[i] - cam[i]) * k;
			std::copy(cam, cam + 3, eye);
			target[0] = car.pos[0] + fwd[0] * 20;
			target[1] = car.pos[1] + 10;
			target[2] = car.pos[2] + fwd[2] * 20;
		}
		else {
			for (int i = 0; i < 3; i++) {
				eye[i] = car.pos[i] + up[i] * 14 + fwd[i] * 4;
				target[i] = eye[i] + fwd[i] * 50;
			}
		}

		int w, h;
		if (!sys_gl_begin_frame(w, h))
			break;
		gl_perspective(60 * PI / 180, (float)w / (float)h, 2, 30000);
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_LEQUAL);
		glDisable(GL_CULL_FACE);
		glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
		gl_look_at(eye, target);
		if (sky && !sky->empty()) {
			if (const Mesh *m = meshes.get((*sky)[0].mesh)) {
				glPushMatrix();
				glTranslatef(eye[0], eye[1], eye[2]);
				glDepthMask(GL_FALSE);
				r.draw_mesh(*m, textures.get((*sky)[0].texture));
				glDepthMask(GL_TRUE);
				glPopMatrix();
			}
		}
		int c = car.chunk < 0 ? 0 : car.chunk;
		/* game.ini [OPTIONS] visiblechunks=25, either way along the road. */
		for (int k = -25; k <= 25; k++)
			r.draw_chunk(track.road.chunks[(size_t)(((c + k) % n + n) % n)], road_tex);
		for (const TrackObject &o : track.objects) {
			int d = ((o.chunk - c) % n + n) % n;
			if (d > 25 && d < n - 25)
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
		draw_car(r, car, model);
		sys_gl_end_frame();
	}
	printf("race: ended at chunk %d, %.0f km/h\n", car.chunk, car.speed_kmh());
	return 0;
}
