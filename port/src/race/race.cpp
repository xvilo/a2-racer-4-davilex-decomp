#include "race/race.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "audio/race_sound.h"
#include "engine/collision.h"
#include "engine/overlay.h"
#include "engine/render.h"
#include "engine/texture.h"
#include "game/ai_driver.h"
#include "game/car.h"
#include "game/language.h"
#include "game/race_rules.h"
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

/* A race time as the game shows it (menu.ini [FORMAT] TIME=%d:%.2d:%.2d): minutes,
 * seconds, hundredths. */
std::string format_time(float t)
{
	int h = (int)(t * 100 + 0.5f);
	char buf[32];
	snprintf(buf, sizeof buf, "%d:%.2d:%.2d", h / 6000, h / 100 % 60, h % 100);
	return buf;
}

struct Hud {
	Overlay overlay;
	Language lang;

	void load(const std::string &dir, int car, const Track &track, MeshCache &meshes, TextureManager &textures)
	{
		if (!overlay.load(dir, car, track, meshes, textures))
			fprintf(stderr, "race: no overlay%d.ini; no dashboard\n", car);
		lang.load(dir);
	}

	/* The race's information over the 3D picture, laid out by overlay<car>.ini. */
	void draw(Renderer &r, const RaceRules &rules, const Car &car, int position, int racers)
	{
		overlay.begin();
		/* The speedometer: 160 degrees for 0..200 km/h. */
		overlay.element(r, "OVL_SPEEDOMETER_BODY");
		overlay.element(r, "OVL_SPEEDOMETER_STRIPES");
		overlay.element(r, "OVL_SPEEDOMETER_DIAL", std::min(car.speed_kmh(), 200.0f) / 200 * 160);
		overlay.element(r, "OVL_SPEEDOMETER_DOP");
		overlay.element(r, "OVL_SPEEDOMETER_GLAS");
		overlay.string("STRING_RACE_TIME_VALUE", format_time(rules.time));
		char buf[64];
		if (rules.circuit) {
			snprintf(buf, sizeof buf, "%s %d/%d", lang.get(TXT_LAP, "RONDE").c_str(), std::min(rules.lap, rules.laps),
				rules.laps);
			overlay.string("STRING_CUR_LAP", buf);
		}
		snprintf(buf, sizeof buf, "%s %d/%d", lang.get(TXT_POS, "POSITIE").c_str(), position, racers);
		overlay.string("STRING_CUR_POS", buf);
		/* 3, 2, 1, go: each digit grows in during its second. */
		if (rules.phase == RaceRules::COUNTDOWN) {
			int n = std::clamp((int)rules.countdown + 1, 1, 3);
			float f = rules.countdown - (float)(n - 1);
			overlay.element(r, "OVL_START_DIGIT_" + std::to_string(n), 0, 1.5f + (1 - f) * 0.5f);
		}
		else if (rules.phase == RaceRules::RACING && rules.time < 1) {
			overlay.element(r, "OVL_START_GO", 0, 1.5f + rules.time);
		}
		else if (rules.phase == RaceRules::RACING && rules.circuit && rules.lap == rules.laps && rules.laps > 1 &&
			rules.time - rules.lap_start < 3) {
			overlay.string("STRING_GAME_TEXT", lang.get(TXT_LAST_LAP, "LAATSTE RONDE"));
		}
		else if (rules.phase == RaceRules::FINISHED) {
			overlay.string("STRING_GAME_TEXT", lang.get(TXT_FINISHED, "GEFINISHT"));
			std::string pos = lang.get(TXT_POSITION, "POSITIE: %d");
			snprintf(buf, sizeof buf, pos.c_str(), position);
			overlay.string("STRING_RACE_OVER", buf);
			const float green[4] = { 118 / 255.0f, 250 / 255.0f, 0, 1 };
			std::string rt = lang.get(TXT_RACE_TIME, "RACE TIJD") + " " + format_time(rules.time);
			overlay.text(320, 175, rt, 1, green, true, false);
			for (size_t i = 0; i < rules.lap_times.size() && rules.circuit; i++) {
				snprintf(buf, sizeof buf, "%s %zu  %s", lang.get(TXT_LAP, "RONDE").c_str(), i + 1,
					format_time(rules.lap_times[i]).c_str());
				overlay.text(320, 205 + 22 * (float)i, buf, 0.8f, green, true, false);
			}
			overlay.string("STRING_FINISH_TEXT", "");
		}
	}
};

/* One car in the race, with its driver (the player or the computer). */
struct Racer {
	Car car;
	CarModel model;
	AiDriver ai;
	RaceRules rules;
	bool player = false;
	/* Where it last drove on the road, for putting it back: a few seconds' worth, so the
	 * spot isn't the one it just crashed from. */
	struct Safe {
		float pos[3], yaw, time;
	};
	std::vector<Safe> safe;
	float stuck = 0;

	void respawn(const CollisionWorld &world, float clock)
	{
		if (safe.empty())
			return;
		const Safe *best = &safe.front();
		for (const Safe &sp : safe) {
			if (sp.time <= clock - 2)
				best = &sp;
		}
		car.place_at(world, best->pos, best->yaw);
		Safe keep = *best;
		keep.time = clock - 2;
		safe.assign(1, keep);
		ai.node = -1;
	}

	void remember(float clock)
	{
		if (!car.airborne && !car.on_grass && car.speed_kmh() > 15 &&
			(safe.empty() || clock - safe.back().time > 0.5f)) {
			safe.push_back({ { car.pos[0], car.pos[1], car.pos[2] }, car.yaw, clock });
			if (safe.size() > 20)
				safe.erase(safe.begin());
		}
	}

	/* Ranking: finished first, by time; then by distance driven. */
	float score() const
	{
		return rules.phase == RaceRules::FINISHED ? 1e9f - rules.time : rules.progress;
	}
};

/* Two cars touching: pushed apart, the speed along the line between them shared out as
 * a slightly bouncy collision of their masses. Each car is two circles, front and back. */
void collide(Car &a, Car &b)
{
	auto circles = [](const Car &c, float out[2][2]) {
		float fx = sinf(c.yaw), fz = cosf(c.yaw);
		float fa = fabsf(c.spec.wheel_front[2]), ra = fabsf(c.spec.wheel_rear[2]);
		out[0][0] = c.pos[0] + fx * fa;
		out[0][1] = c.pos[2] + fz * fa;
		out[1][0] = c.pos[0] - fx * ra;
		out[1][1] = c.pos[2] - fz * ra;
	};
	if (fabsf(a.pos[1] - b.pos[1]) > 15)
		return;
	float ca[2][2], cb[2][2];
	circles(a, ca);
	circles(b, cb);
	float ra = std::max(a.spec.wheel_front[0], a.spec.wheel_rear[0]) + 2;
	float rb = std::max(b.spec.wheel_front[0], b.spec.wheel_rear[0]) + 2;
	for (auto &p : ca) {
		for (auto &q : cb) {
			float dx = q[0] - p[0], dz = q[1] - p[1], d2 = dx * dx + dz * dz, r = ra + rb;
			if (d2 >= r * r || d2 < 1e-6f)
				continue;
			float d = sqrtf(d2), nx = dx / d, nz = dz / d, push = (r - d) / 2;
			a.pos[0] -= nx * push;
			a.pos[2] -= nz * push;
			b.pos[0] += nx * push;
			b.pos[2] += nz * push;
			float rel = (b.vel[0] - a.vel[0]) * nx + (b.vel[2] - a.vel[2]) * nz;
			if (rel < 0) {
				float j = -(1 + 0.3f) * rel / (1 / a.spec.mass + 1 / b.spec.mass);
				a.vel[0] -= j / a.spec.mass * nx;
				a.vel[2] -= j / a.spec.mass * nz;
				b.vel[0] += j / b.spec.mass * nx;
				b.vel[2] += j / b.spec.mass * nz;
			}
			return;
		}
	}
}

CarModel load_model(const Track &track, MeshCache &meshes, TextureManager &textures, const std::string &anim)
{
	CarModel model;
	if (const std::vector<AnimFrame> *f = track.animation(anim)) {
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
	return model;
}

} // namespace

int race_main(const std::string &data_dir, const NamedArchive &rcs, const RaceOptions &opt)
{
	Track track;
	std::string err = track.load(data_dir, opt.stage, opt.league);
	if (err.empty() && track.road.chunks.size() < 2)
		err = "the stage has no road";
	/* The field: the six racers of the league (CAR_CFG.INI [league<n>] 0..5); the player
	 * drives one of them, the computer the others. */
	std::vector<Racer> racers;
	const int field = 6;
	IniFile gi, opp;
	{
		std::string gp = find_file_ci(data_dir, "game.ini");
		if (!gp.empty())
			gi.load(gp);
		std::string op = find_file_ci(data_dir, "opponent.ini");
		if (!op.empty())
			opp.load(op);
	}
	int difficulty = std::clamp(gi.get_int("OPTIONS", "Difficulty", 1), 0, 2);
	/* Testing: A2_RIVALS=0 races alone. */
	int rivals = field - 1;
	if (const char *rv = getenv("A2_RIVALS"))
		rivals = std::clamp(atoi(rv), 0, field - 1);
	for (int i = 0; err.empty() && i < field && (int)racers.size() <= rivals; i++) {
		bool player = i == 0;
		int entry = player ? opt.car : (i <= opt.car ? i - 1 : i);
		if (player || entry != opt.car) {
			Racer rc;
			rc.player = player;
			err = rc.car.spec.load(data_dir, "league" + std::to_string(opt.league), entry, opt.motor, opt.gearbox);
			/* opponent.ini [Racer <n> Level <difficulty>] <stage>= behaviour, skill, ... */
			std::vector<std::string> b = split_fields(
				opp.get("Racer " + std::to_string(entry) + " Level " + std::to_string(difficulty), std::to_string(opt.stage)));
			rc.ai.skill = player ? 1.0f : skill_factor(b.size() > 1 ? b[1].c_str() : "NORMAL");
			racers.push_back(std::move(rc));
		}
	}
	if (!err.empty()) {
		fprintf(stderr, "race: %s\n", err.c_str());
		return 1;
	}
	Racer &me = racers[0];
	printf("race: stage %d (%s), car %s (%s): %.0f kg, top speed %.0f km/h, %d gears; %zu rivals\n", opt.stage,
		track.info.name.c_str(), me.car.spec.name.c_str(), me.car.spec.animation.c_str(), me.car.spec.mass,
		me.car.spec.top_speed, me.car.spec.gear_count, racers.size() - 1);
	CollisionWorld world;
	world.build(track.road);
	TextureManager textures(rcs);
	MeshCache meshes(rcs);
	Renderer r{ textures };
	Hud hud;
	hud.load(data_dir, opt.car, track, meshes, textures);
	const unsigned road_tex[4] = { textures.get(track.info.road_texture), textures.get(track.info.grass_texture),
		textures.get(track.info.grass2_texture), textures.get(track.info.rail_texture) };
	const std::vector<AnimFrame> *sky = track.animation("sky");
	for (Racer &rc : racers)
		rc.model = load_model(track, meshes, textures, rc.car.spec.animation);
	Keys keys;
	keys.load(data_dir);
	RaceSound sound;
	sound.load(data_dir, rcs, opt.car);
	sound.start_music(track.info.music);
	bool said_go = false, said_finish = false;
	int last_count = 4;
	int laps = gi.get_int("OPTIONS", "Nrlaps", 2);
	/* Testing: A2_LAPS=<n> overrides the number of laps. */
	if (const char *lp = getenv("A2_LAPS"))
		laps = std::max(atoi(lp), 1);

	/* The grid: two by two behind the start line, which the race crosses towards higher
	 * chunks; the player starts last. */
	int start_line = std::max(track.find_trigger(13), 0);
	int start = start_line;
	/* Testing: A2_START=<chunk> starts elsewhere on the road. */
	if (const char *st = getenv("A2_START"))
		start = atoi(st) + 2;
	const int n = (int)track.road.chunks.size();
	for (size_t i = 0; i < racers.size(); i++) {
		size_t slot = racers.size() - 1 - i; /* player (0) in the last slot */
		int row = (int)slot / 2;
		racers[i].car.place(world, track, start - 2 - row * 2, (slot % 2) ? 22.0f : -22.0f);
		racers[i].rules.begin(n, start_line, track.find_trigger(14), laps, racers[i].car.chunk);
		racers[i].safe.push_back({ { racers[i].car.pos[0], racers[i].car.pos[1], racers[i].car.pos[2] },
			racers[i].car.yaw, 0 });
	}
	Car &car = me.car;
	RaceRules &rules = me.rules;
	float cam[3] = { car.pos[0] - sinf(car.yaw) * 60, car.pos[1] + 25, car.pos[2] - cosf(car.yaw) * 60 };
	/* 0 chase, 1 driver, 2 and 3 beside and in front of the car (looking at it). */
	int camera = 0;
	uint32_t last = sys_ticks();
	float acc = 0;
	/* Testing: A2_TRACE=1 prints the car's state every second. */
	const char *trace_env = getenv("A2_TRACE");
	bool trace = trace_env && *trace_env && *trace_env != '0';
	float clock = 0, next_trace = 1;
	auto position_of = [&](const Racer &who) {
		int p = 1;
		for (const Racer &o : racers) {
			if (&o != &who && o.score() > who.score())
				p++;
		}
		return p;
	};
	SysInput in;
	while (!sys_quit_requested()) {
		sys_poll(in);
		if (in.key == KEY_ESCAPE)
			break;
		if (in.key == 'c' || in.key == 'C')
			camera = (camera + 1) % 4;
		if (in.key == 'r' || in.key == 'R')
			me.respawn(world, clock);
		uint32_t now = sys_ticks();
		float frame_dt = std::min((now - last) / 1000.0f, 0.1f);
		acc += frame_dt;
		last = now;
		/* "DRUK 'SPATIE' OM VERDER TE GAAN" */
		if (rules.phase == RaceRules::FINISHED && (rules.finished_at > 15 || in.key == KEY_SPACE || in.key == KEY_ENTER))
			break;

		/* The countdown's beeps and the start. */
		if (rules.phase == RaceRules::COUNTDOWN && (int)rules.countdown + 1 < last_count) {
			last_count = (int)rules.countdown + 1;
			sound.effect("POSITION_SWITCH");
		}
		if (rules.phase == RaceRules::FINISHED && !said_finish) {
			sound.effect("FINISH_JUICHEN");
			said_finish = true;
		}
		if (rules.phase == RaceRules::RACING && !said_go) {
			sound.effect("GO");
			said_go = true;
		}

		CarInput player_in;
		player_in.steer = (keyispressed(keys.right) ? 1.0f : 0.0f) - (keyispressed(keys.left) ? 1.0f : 0.0f);
		player_in.throttle = keyispressed(keys.up) ? 1.0f : 0.0f;
		player_in.brake = keyispressed(keys.down) ? 1.0f : 0.0f;
		while (acc >= STEP) {
			for (Racer &rc : racers) {
				CarInput ci = rc.player && !opt.autopilot ? player_in : rc.ai.drive(track, rc.car, STEP);
				/* No driving before the start; after the finish the car rolls out. */
				if (rc.rules.phase != RaceRules::RACING) {
					ci.throttle = 0;
					ci.brake = 0.3f;
					ci.hold = rc.rules.phase == RaceRules::COUNTDOWN;
					if (ci.hold)
						ci.steer = 0;
					rc.ai.stuck = 0;
				}
				rc.car.step(world, ci, STEP);
				rc.rules.update(STEP, rc.car.chunk);
			}
			for (size_t i = 0; i < racers.size(); i++) {
				for (size_t j = i + 1; j < racers.size(); j++)
					collide(racers[i].car, racers[j].car);
			}
			acc -= STEP;
			clock += STEP;
		}
		sound.engine(car, opt.autopilot ? 1.0f : player_in.throttle);
		for (Racer &rc : racers) {
			/* Fallen off the world, or stuck for long: back on the road. */
			if (rc.car.airborne && rc.car.vel[1] < -40)
				rc.respawn(world, clock);
			rc.stuck = rc.car.speed_kmh() < 3 && rc.rules.phase == RaceRules::RACING ? rc.stuck + frame_dt : 0;
			if (rc.stuck > (rc.player && !opt.autopilot ? 1e9f : 8.0f)) {
				rc.respawn(world, clock);
				rc.stuck = 0;
			}
			rc.remember(clock);
		}
		if (trace && clock >= next_trace) {
			printf("t %4.0f s  chunk %3d  %5.1f km/h  gear %d  lap %d  pos %d%s%s%s\n", clock, car.chunk, car.speed_kmh(),
				car.gear, rules.lap, position_of(me), car.on_grass ? "  grass" : "", car.airborne ? "  air" : "",
				car.touching_wall ? "  WALL" : "");
			fflush(stdout);
			next_trace += trace_env[0] == '2' ? 0.2f : 1;
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
			float k = 1 - expf(-8 * frame_dt);
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
		for (const Racer &rc : racers) {
			int d = ((rc.car.chunk - c) % n + n) % n;
			if (d <= 25 || d >= n - 25)
				draw_car(r, rc.car, rc.model);
		}
		hud.draw(r, rules, car, position_of(me), (int)racers.size());
		sys_gl_end_frame();
	}
	sound.stop();
	printf("race: %s, position %d of %zu, time %s", rules.phase == RaceRules::FINISHED ? "finished" : "not finished",
		position_of(me), racers.size(), format_time(rules.time).c_str());
	for (size_t i = 0; i < rules.lap_times.size(); i++)
		printf("%s lap %zu %s", i ? "," : ";", i + 1, format_time(rules.lap_times[i]).c_str());
	printf("\n");
	return 0;
}
