#include "race/race.h"
#include "race/effects.h"

#include <algorithm>
#include <cstring>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>

#include "audio/race_sound.h"
#include "engine/collision.h"
#include "engine/overlay.h"
#include "engine/render.h"
#include "engine/texture.h"
#include "game/ai_driver.h"
#include "game/car.h"
#include "game/language.h"
#include "game/loose_objects.h"
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

std::string lower(std::string s)
{
	for (char &c : s)
		c = (char)tolower((unsigned char)c);
	return s;
}

/* The keys from game.ini [INPUT] (Windows virtual-key codes). */
struct Keys {
	int left = 37, right = 39, up = 38, down = 40, turbo = 17;

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
		turbo = ini.get_int("INPUT", "EXTRA1", turbo);
	}
};

struct CarModel {
	const Mesh *body = nullptr, *wheel = nullptr, *windows = nullptr;
	unsigned body_tex = 0, wheel_tex = 0, windows_tex = 0;
	/* All the animation's frames: 5 on are the damage phases' bodies. */
	std::vector<std::pair<const Mesh *, unsigned>> frames;
};

void draw_car(Renderer &r, const Car &car, const CarModel &m, bool windows = true, int phase = 0)
{
	float right[3], up[3], fwd[3];
	car.axes(right, up, fwd);
	glPushMatrix();
	gl_mult_world(right, up, fwd, car.pos);
	/* A damageable car shows its phase's frame (5, 6, ..) for its body. */
	if ((size_t)(5 + phase) < m.frames.size() && m.frames[(size_t)(5 + phase)].first)
		r.draw_mesh(*m.frames[(size_t)(5 + phase)].first, m.frames[(size_t)(5 + phase)].second);
	else if (m.body)
		r.draw_mesh(*m.body, m.body_tex);
	if (m.windows && windows)
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
	float flash = 0;
	int flashes = 0;
	float time_limit = 0;
	float turbo = 0; /* 0..100 */
	float damage = 0; /* 0..1100 */
	int white = 0;    /* frames of the radar's flash still to show */
	/* A pick-up's text (PrintText), for a few seconds. */
	std::string message;
	float message_time = 0;

	void draw(Renderer &r, const RaceRules &rules, const Car &car, int position, int racers)
	{
		overlay.begin();
		/* FLITS: the screen white for a frame or two (palette 235,235,235). */
		if (white > 0) {
			glDisable(GL_TEXTURE_2D);
			glColor4f(0.92f, 0.92f, 0.92f, 1);
			glBegin(GL_TRIANGLE_STRIP);
			glVertex2f(0, 0);
			glVertex2f(640, 0);
			glVertex2f(0, 480);
			glVertex2f(640, 480);
			glEnd();
			glColor4f(1, 1, 1, 1);
			glEnable(GL_TEXTURE_2D);
			white--;
		}
		/* The speedometer: 160 degrees for 0..200 km/h. */
		overlay.element(r, "OVL_SPEEDOMETER_BODY");
		overlay.element(r, "OVL_SPEEDOMETER_STRIPES");
		overlay.element(r, "OVL_SPEEDOMETER_DIAL", std::min(car.speed_kmh(), 200.0f) / 200 * 160);
		overlay.element(r, "OVL_SPEEDOMETER_DOP");
		/* The damage bar fills across (Ovl_Communicator: x scale damage / 1100). */
		overlay.element(r, "OVL_SPEEDOMETER_HLTH_BK");
		overlay.element(r, "OVL_SPEEDOMETER_HLTH", 0, 1, std::clamp(damage / 1100, 0.0f, 1.0f));
		/* The turbo gauge: 180 degrees for a full tank. */
		overlay.element(r, "OVL_SPEEDOMETER_TURBODIAL", turbo / 100 * 180);
		overlay.element(r, "OVL_SPEEDOMETER_TURBODOP");
		overlay.element(r, "OVL_SPEEDOMETER_GLAS");
		overlay.string("STRING_RACE_TIME_VALUE", format_time(rules.time));
		if (time_limit > 0 && rules.phase == RaceRules::RACING)
			overlay.string("STRING_COUNTDOWN_TIMER", format_time(std::max(0.0f, time_limit - rules.time)));
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
		else if (rules.phase == RaceRules::TIME_UP) {
			overlay.string("STRING_TIME_UP", "");
			overlay.string("STRING_FINISH_TEXT", "");
		}
		else if (rules.phase == RaceRules::TOTAL_LOSS) {
			overlay.string("STRING_TOTAL_LOSS", lang.get(TXT_TOTAL_LOSS, "TOTAL LOSS"));
			overlay.string("STRING_FINISH_TEXT", "");
		}
		else if (rules.phase == RaceRules::ARRESTED) {
			overlay.string("STRING_ARRESTED", lang.get(TXT_ARRESTED, "GEARRESTEERD"));
			overlay.string("STRING_FINISH_TEXT", "");
		}
		else if (flash > 0) {
			overlay.string("STRING_GAME_TEXT", lang.get(TXT_FLASH_FINE, "FLITS BOETE  -50 EURO"));
		}
		else if (message_time > 0 && rules.phase == RaceRules::RACING) {
			overlay.string("STRING_GAME_TEXT", message);
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

/* Damage (car_dmg.cpp, damage.ini): each knock past a car's threshold costs 25..45
 * points of 1100, by the impulse (impact speed in game units/s times a mass: the other
 * car's, or half its own against a wall). It only shows: the windows go, then the
 * lights; 1099 is a total loss. Damage changes nothing in how the car drives. */
struct DamageModel {
	float min_imp = 70000, max_imp = 90000;        /* computer cars */
	float min_player = 50000, max_player = 90000;  /* the player's */
	int window = 1101, lights = 1101;               /* [Damageable Cars] */
	bool smoke_front = true;                        /* [Damage Models] last field */
	std::vector<std::string> phases;                /* ... its phase meshes: frames 5, 6, .. */
};

/* [Damageable Car Objects]: the pieces drawn on a car (over its body) in one phase:
 * attached at pos (its own pivot, y 1 lower), past `damaged` bent to pos2 turned by rot
 * (degrees), and past `detached` (4 s on at least) off: gone, or lying on the road. */
struct DamagePart {
	std::string anim;
	float pos[3] = {}, pos2[3] = {}, rot[3] = {};
	int damaged = 1101, detached = 1101;
	bool remove = false;
};

struct DamageTable {
	int min_points = 25, max_points = 45;
	std::map<std::string, DamageModel> models;
	std::map<std::string, std::vector<DamagePart>> parts; /* by phase mesh name */

	void load(const std::string &dir)
	{
		IniFile ini;
		std::string p = find_file_ci(dir, "damage.ini");
		if (p.empty() || !ini.load(p))
			return;
		min_points = ini.get_int("Damage Limits", "min", min_points);
		max_points = ini.get_int("Damage Limits", "max", max_points);
		std::map<std::string, std::vector<std::string>> cars;
		for (int i = 0; i < ini.get_int("Damageable Cars", "count", 0); i++) {
			std::vector<std::string> f = split_fields(ini.get("Damageable Cars", std::to_string(i)));
			if (f.size() >= 3)
				cars[lower(f[0])] = f;
		}
		for (const std::string &k : ini.keys("Damageable Car Objects")) {
			std::vector<std::string> f = split_fields(ini.get("Damageable Car Objects", k));
			if (f.size() < 14 || !isdigit((unsigned char)k[0]))
				continue;
			DamagePart part;
			part.anim = f[1];
			for (int a = 0; a < 3; a++) {
				part.pos[a] = (float)atof(f[2 + a].c_str());
				part.pos2[a] = (float)atof(f[5 + a].c_str());
				part.rot[a] = (float)atof(f[8 + a].c_str());
			}
			part.damaged = atoi(f[11].c_str());
			part.detached = atoi(f[12].c_str());
			part.remove = atoi(f[13].c_str()) != 0;
			parts[lower(f[0])].push_back(part);
		}
		for (int i = 0; i < ini.get_int("Damage Models", "count", 0); i++) {
			std::vector<std::string> f = split_fields(ini.get("Damage Models", std::to_string(i)));
			if (f.size() < 6)
				continue;
			DamageModel m;
			m.min_imp = (float)atof(f[1].c_str());
			m.max_imp = (float)atof(f[2].c_str());
			m.min_player = (float)atof(f[3].c_str());
			m.max_player = (float)atof(f[4].c_str());
			if (f.size() >= 7)
				m.smoke_front = atoi(f[6].c_str()) != 0;
			auto c = cars.find(lower(f[5]));
			if (c != cars.end()) {
				m.window = atoi(c->second[1].c_str());
				m.lights = atoi(c->second[2].c_str());
				for (size_t k = 3; k < c->second.size(); k++)
					if (!c->second[k].empty())
						m.phases.push_back(lower(c->second[k]));
			}
			models[lower(f[0])] = m;
		}
	}
	DamageModel get(const std::string &set) const
	{
		auto m = models.find(lower(set));
		return m == models.end() ? DamageModel() : m->second;
	}
};

/* One car in the race, with its driver (the player or the computer). */
struct Racer {
	Car car;
	CarModel model;
	AiDriver ai;
	RaceRules rules;
	bool player = false;
	bool traffic = false;
	int entry = 0; /* CAR_CFG.INI racer */
	/* The police (TrackObject type 9): waiting by the road until a racer comes by, then
	 * after it; it gives up when left far behind. */
	enum { NONE, WAITING, CHASING, GAVE_UP } police = NONE;
	float chase_time = 0;
	int siren = 0;
	/* Where it last drove on the road, for putting it back: a few seconds' worth, so the
	 * spot isn't the one it just crashed from. */
	struct Safe {
		float pos[3], yaw, time;
	};
	std::vector<Safe> safe;
	float stuck = 0;
	DamageModel damage_model;
	float damage = 0;       /* 0..1100 */
	/* The pieces of the current damage phase (FUN_00425490..FUN_00425be0). */
	struct Piece {
		const DamagePart *def;
		const Mesh *mesh = nullptr;
		unsigned tex = 0;
		enum { ON, BENT, OFF } state = ON;
		float bent_at = 0;
	};
	std::vector<Piece> pieces;
	int phase = 0;
	float last_hit = -1;    /* clock of the last knock: 60 ms between two */

	/* FUN_00425310: one knock with impulse imp; true if it did damage. */
	bool hit(const DamageTable &t, float imp, float clock, bool invulnerable)
	{
		bool soon = clock - last_hit < 0.06f;
		last_hit = clock;
		float lo = player ? damage_model.min_player : damage_model.min_imp;
		float hi = player ? damage_model.max_player : damage_model.max_imp;
		if (soon || imp <= lo || invulnerable || hi <= lo)
			return false;
		imp = std::min(imp, hi);
		damage = std::min(floorf(damage + (float)t.min_points + (imp - lo) * (float)(t.max_points - t.min_points) / (hi - lo)),
			1100.0f);
		return true;
	}

	float last_respawn = -100;

	void respawn(const CollisionWorld &world, float clock, const Track &track)
	{
		/* Put back twice in a short while (the safe spot leads straight back into the
		 * water): onto a lane of the drive map that runs the race's way, near where it is,
		 * facing along it. */
		bool again = clock - last_respawn < 20;
		last_respawn = clock;
		if ((again || safe.empty()) && ai.race_lanes) {
			int best_node = -1;
			float bd = 1e30f;
			for (size_t i = 0; i < track.drive.size() && i < ai.race_lanes->size(); i++) {
				const DriveNode &dn = track.drive[i];
				if (!(*ai.race_lanes)[i] || dn.next < 0 || dn.next >= (int)track.drive.size())
					continue;
				float dx = dn.pos[0] - car.pos[0], dz = dn.pos[2] - car.pos[2], d = dx * dx + dz * dz;
				if (d < bd) {
					bd = d;
					best_node = (int)i;
				}
			}
			if (best_node >= 0) {
				const DriveNode &dn = track.drive[(size_t)best_node];
				const float *q = track.drive[(size_t)dn.next].pos;
				float yaw = atan2f(q[0] - dn.pos[0], q[2] - dn.pos[2]);
				car.place_at(world, dn.pos, yaw);
				safe.assign(1, { { dn.pos[0], dn.pos[1], dn.pos[2] }, yaw, clock - 2 });
				ai.node = dn.next;
				return;
			}
		}
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

	bool racing() const { return !traffic && police == NONE; }

	/* Ranking: finished first, by time; then by distance driven. */
	float score() const
	{
		return rules.phase == RaceRules::FINISHED ? 1e9f - rules.time : rules.progress;
	}
};

/* A piece come off a car, lying where it fell (FUN_00425850: an Ipion body let go at
 * rest; the port lays it on the ground). It stays for the race. */
struct Debris {
	float pos[3];
	float yaw;
	const DamagePart *def;
	const Mesh *mesh;
	unsigned tex;
};

/* A damage phase's pieces on the car, all attached. */
void set_phase(Racer &rc, int phase, const DamageTable &t, const Track &track, MeshCache &meshes,
	TextureManager &textures)
{
	rc.phase = phase;
	rc.pieces.clear();
	if ((size_t)phase >= rc.damage_model.phases.size())
		return;
	auto it = t.parts.find(rc.damage_model.phases[(size_t)phase]);
	if (it == t.parts.end())
		return;
	for (const DamagePart &d : it->second) {
		if (d.damaged <= 0)
			continue;
		Racer::Piece p;
		p.def = &d;
		if (const std::vector<AnimFrame> *f = track.animation(d.anim); f && !f->empty()) {
			p.mesh = meshes.get((*f)[0].mesh);
			p.tex = textures.get((*f)[0].texture);
		}
		rc.pieces.push_back(p);
	}
}

/* After the damage changed: pieces bend, come off (sound, a piece on the road unless it
 * just goes), and with all of a phase's off the next phase's body and pieces come. */
template <typename Sound>
void update_pieces(Racer &rc, float clock, const DamageTable &t, const Track &track, MeshCache &meshes,
	TextureManager &textures, const CollisionWorld &world, std::vector<Debris> &debris, Sound sound)
{
	bool all_off = !rc.pieces.empty();
	for (Racer::Piece &p : rc.pieces) {
		const DamagePart &d = *p.def;
		if (d.damaged >= 1101)
			continue;
		if (p.state == Racer::Piece::ON && rc.damage > (float)d.damaged) {
			p.state = Racer::Piece::BENT;
			p.bent_at = clock;
		}
		if (p.state == Racer::Piece::BENT && clock - p.bent_at >= 4 && rc.damage > (float)d.detached) {
			p.state = Racer::Piece::OFF;
			sound();
			if (!d.remove && p.mesh) {
				float right[3], up[3], fwd[3];
				rc.car.axes(right, up, fwd);
				Debris b;
				for (int a = 0; a < 3; a++)
					b.pos[a] = rc.car.pos[a] + right[a] * d.pos2[0] + up[a] * d.pos2[1] + fwd[a] * d.pos2[2];
				GroundHit g;
				if (world.ground(b.pos[0], b.pos[2], b.pos[1] + 20, rc.car.chunk, g))
					b.pos[1] = g.y;
				b.yaw = rc.car.yaw;
				b.def = &d;
				b.mesh = p.mesh;
				b.tex = p.tex;
				debris.push_back(b);
			}
		}
		all_off = all_off && p.state == Racer::Piece::OFF;
	}
	if (all_off && (size_t)rc.phase + 1 < rc.damage_model.phases.size() &&
		(size_t)(5 + rc.phase + 1) < rc.model.frames.size())
		set_phase(rc, rc.phase + 1, t, track, meshes, textures);
}

/* The pieces in the car's frame: attached at pos (1 lower), bent at pos2 turned by rot
 * (FUN_004a5a40: z, then x, then y). */
void draw_pieces(Renderer &r, const Racer &rc)
{
	if (rc.pieces.empty())
		return;
	float right[3], up[3], fwd[3];
	rc.car.axes(right, up, fwd);
	glPushMatrix();
	gl_mult_world(right, up, fwd, rc.car.pos);
	for (const Racer::Piece &p : rc.pieces) {
		if (!p.mesh || p.state == Racer::Piece::OFF)
			continue;
		const DamagePart &d = *p.def;
		glPushMatrix();
		if (p.state == Racer::Piece::BENT) {
			glTranslatef(d.pos2[0], d.pos2[1], d.pos2[2]);
			gl_rotate(d.rot[1], 0, 1, 0);
			gl_rotate(d.rot[0], 1, 0, 0);
			gl_rotate(d.rot[2], 0, 0, 1);
		}
		else
			glTranslatef(d.pos[0], d.pos[1] - 1, d.pos[2]);
		r.draw_mesh(*p.mesh, p.tex);
		glPopMatrix();
	}
	glPopMatrix();
}

/* Two cars touching: pushed apart, the speed along the line between them shared out as
 * a slightly bouncy collision of their masses. Each car is two circles, front and back. */
/* Pushes two cars apart; the speed they met at (m/s), 0 if they didn't. */
float collide(Car &a, Car &b)
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
		return 0;
	float ca[2][2], cb[2][2];
	circles(a, ca);
	circles(b, cb);
	/* About the bodies' half width (the wheels sit a little inside it). */
	float ra = std::max(a.spec.wheel_front[0], a.spec.wheel_rear[0]) + 3.5f;
	float rb = std::max(b.spec.wheel_front[0], b.spec.wheel_rear[0]) + 3.5f;
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
			return std::max(-rel, 0.0f);
		}
	}
	return 0;
}

/* The stage's traffic (traffic.ini [Traffic Track <n>]: vehicles from CAR_CFG.INI
 * [traffic] with weights, and how many may be about at once going the race's way
 * (MAX_TRAFFIC_RIGHT) and against it (MAX_TRAFFIC_LEFT)). Cars appear on the drive map's
 * lanes out of sight around the player and disappear again when left far behind. */
struct TrafficPlan {
	struct Kind {
		CarSpec spec;
		int weight = 1;
	};
	std::vector<Kind> kinds;
	int total_weight = 0;
	int max_with = 0, max_against = 0;

	void load(const std::string &dir, int stage)
	{
		IniFile ini;
		std::string p = find_file_ci(dir, "traffic.ini");
		if (p.empty() || !ini.load(p))
			return;
		std::string sec = "Traffic Track " + std::to_string(stage);
		int count = ini.get_int(sec, "COUNT", 0);
		for (int i = 0; i < count; i++) {
			std::vector<std::string> f = split_fields(ini.get(sec, std::to_string(i)));
			if (f.empty())
				continue;
			int entry = CarSpec::find(dir, "traffic", f[0]);
			Kind k;
			if (entry < 0 || !k.spec.load(dir, "traffic", entry, 0, 0).empty())
				continue;
			k.weight = std::max(f.size() > 1 ? atoi(f[1].c_str()) : 1, 1);
			total_weight += k.weight;
			kinds.push_back(k);
		}
		max_with = ini.get_int(sec, "MAX_TRAFFIC_RIGHT", 0);
		max_against = ini.get_int(sec, "MAX_TRAFFIC_LEFT", 0);
	}

	const CarSpec *pick(unsigned r) const
	{
		if (kinds.empty())
			return nullptr;
		int w = (int)(r % (unsigned)total_weight);
		for (const Kind &k : kinds) {
			if (w < k.weight)
				return &k.spec;
			w -= k.weight;
		}
		return &kinds.back().spec;
	}
};

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
		for (const AnimFrame &af : *f)
			model.frames.push_back({ meshes.get(af.mesh), textures.get(af.texture) });
		frame(0, model.body, model.body_tex);
		frame(1, model.wheel, model.wheel_tex);
		frame(2, model.windows, model.windows_tex);
	}
	return model;
}

} // namespace

int race_main(const std::string &data_dir, const NamedArchive &rcs, const RaceOptions &opt, RaceResult *result)
{
	Track track;
	std::string err = track.load(data_dir, opt.stage, opt.league);
	if (err.empty() && track.road.chunks.size() < 2)
		err = "the stage has no road";
	/* The field: five racers of the league (CAR_CFG.INI [league<n>] 0..5; the menu's
	 * results show five, static.ini [TOURRACE] has five characters); the player drives
	 * one of them, the computer the others. */
	std::vector<Racer> racers;
	const int field = 5;
	IniFile gi, opp;
	{
		std::string gp = find_file_ci(data_dir, "game.ini");
		if (!gp.empty())
			gi.load(gp);
		std::string op = find_file_ci(data_dir, "opponent.ini");
		if (!op.empty())
			opp.load(op);
	}
	int difficulty = std::clamp(opt.difficulty >= 0 ? opt.difficulty : gi.get_int("OPTIONS", "Difficulty", 1), 0, 2);
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
			rc.entry = entry;
			err = rc.car.spec.load(data_dir, "league" + std::to_string(opt.league), entry,
				player ? opt.motor : 0, player ? opt.gearbox : 0, player ? opt.tyres : 0, player ? opt.abs : 0);
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
	/* The racers live at the front of the list; traffic comes and goes behind them.
	 * Reserve room so references to the racers stay valid. */
	racers.reserve(racers.size() + 64);
	Racer &me = racers[0];
	bool autopilot = opt.autopilot;
	if (const char *ap = getenv("A2_AUTOPILOT"))
		autopilot = autopilot || (*ap && *ap != '0');
	printf("race: stage %d (%s), car %s (%s): %.0f kg, top speed %.0f km/h, %d gears; %zu rivals\n", opt.stage,
		track.info.name.c_str(), me.car.spec.name.c_str(), me.car.spec.animation.c_str(), me.car.spec.mass,
		me.car.spec.top_speed, me.car.spec.gear_count, racers.size() - 1);
	CollisionWorld world;
	world.build(track.road);
	TextureManager textures(rcs);
	MeshCache meshes(rcs);
	/* The objects with unmovable physics (tob_main.cpp FUN_004541c0: types 5 collision
	 * physics, 14 and 15 with collision, 17 cached with collision) are solid. */
	for (const TrackObject &o : track.objects) {
		if (o.type != 5 && o.type != 14 && o.type != 15 && o.type != 17)
			continue;
		if (const std::vector<AnimFrame> *f = track.animation(o.animation); f && !f->empty())
			if (const Mesh *m = meshes.get((*f)[0].mesh))
				world.add_mesh(*m, o.pos, o.rot, o.chunk);
	}
	LooseObjects loose;
	loose.build(track, meshes, textures, data_dir);
	/* The animated objects (type 12, 0x469c60): each steps through its anmtypes.ini
	 * frames, so many ms each, over and over. */
	struct Animated {
		const AnimType *type;
		size_t step = 0;
		float elapsed = 0;
	};
	std::map<const TrackObject *, Animated> animated;
	for (const TrackObject &o : track.objects)
		if (o.type == 12)
			if (const AnimType *t = track.anim_type(o.animation); t && !t->frames.empty())
				animated[&o] = { t };
	/* What the computer drivers steer round: the solid objects (not the buildings beside
	 * the road), and the heavy loose ones still standing. */
	auto obstacle_of = [](const Mesh &m, const float pos[3], float yaw_deg) {
		float yaw = yaw_deg * PI / 180, cy = cosf(yaw), sy = sinf(yaw);
		float cx = (m.min[0] + m.max[0]) / 2, cz = (m.min[2] + m.max[2]) / 2;
		return AiObstacle{ pos[0] + cx * cy + cz * sy, pos[2] - cx * sy + cz * cy, yaw, (m.max[0] - m.min[0]) / 2,
			(m.max[2] - m.min[2]) / 2 };
	};
	std::vector<AiObstacle> solid_obstacles, obstacles;
	for (const TrackObject &o : track.objects) {
		if (o.type != 5 && o.type != 14 && o.type != 15 && o.type != 17)
			continue;
		const std::vector<AnimFrame> *f = track.animation(o.animation);
		const Mesh *m = f && !f->empty() ? meshes.get((*f)[0].mesh) : nullptr;
		if (m && m->max[0] - m->min[0] < 400 && m->max[2] - m->min[2] < 400)
			solid_obstacles.push_back(obstacle_of(*m, o.pos, o.rot[1]));
	}
	Renderer r{ textures };
	Hud hud;
	hud.load(data_dir, opt.car, track, meshes, textures);
	const unsigned road_tex[4] = { textures.get(track.info.road_texture), textures.get(track.info.grass_texture),
		textures.get(track.info.grass2_texture), textures.get(track.info.rail_texture) };
	const std::vector<AnimFrame> *sky = track.animation("sky");
	for (Racer &rc : racers)
		rc.model = load_model(track, meshes, textures, rc.car.spec.animation);
	TrafficPlan traffic;
	if (gi.get_int("OPTIONS", "Traffic", 1))
		traffic.load(data_dir, opt.stage);
	/* Testing: A2_TRAFFIC=0 turns it off. */
	if (const char *tf = getenv("A2_TRAFFIC"))
		if (*tf == '0')
			traffic.kinds.clear();
	std::map<std::string, CarModel> models;
	for (const auto &k : traffic.kinds)
		models[k.spec.animation] = load_model(track, meshes, textures, k.spec.animation);
	unsigned rnd = 12345;
	auto random = [&]() {
		rnd = rnd * 1103515245u + 12345u;
		return rnd >> 8;
	};
	float next_spawn = 0;
	Keys keys;
	keys.load(data_dir);
	int *key_fields[5] = { &keys.up, &keys.down, &keys.left, &keys.right, &keys.turbo };
	for (int k = 0; k < 5; k++)
		if (opt.keys[k] > 0)
			*key_fields[k] = opt.keys[k];
	RaceSound sound;
	sound.load(data_dir, rcs, opt.car);
	sound.volumes(opt.music_volume, opt.sfx_volume);
	sound.start_music(track.info.music);
	bool said_go = false, said_finish = false;
	int last_count = 4;
	int laps = opt.laps > 0 ? opt.laps : gi.get_int("OPTIONS", "Nrlaps", 2);
	/* Testing: A2_LAPS=<n> overrides the number of laps. */
	if (const char *lp = getenv("A2_LAPS"))
		laps = std::max(atoi(lp), 1);

	/* Each drive map node's chunk and whether its lane runs the race's way. */
	std::vector<int> node_chunk(track.drive.size());
	std::vector<char> node_with(track.drive.size());
	for (size_t i = 0; i < track.drive.size(); i++) {
		const DriveNode &dn = track.drive[i];
		node_chunk[i] = world.nearest_chunk(dn.pos[0], dn.pos[2], -1);
		int c = node_chunk[i];
		float a[3], b[3];
		track.road_centre(c, a);
		track.road_centre(c + 1, b);
		int nx = dn.next >= 0 && dn.next < (int)track.drive.size() ? dn.next : (int)i;
		const float *q = track.drive[(size_t)nx].pos;
		node_with[i] = (q[0] - dn.pos[0]) * (b[0] - a[0]) + (q[2] - dn.pos[2]) * (b[2] - a[2]) > 0;
	}
	/* The grid: two by two behind the start line, which the race crosses towards higher
	 * chunks; the player starts last. */
	int start_line = std::max(track.find_trigger(13), 0);
	int start = start_line;
	/* Testing: A2_START=<chunk> starts elsewhere on the road. */
	if (const char *st = getenv("A2_START"))
		start = atoi(st) + 2;
	const int n = (int)track.road.chunks.size();
	for (size_t i = 0; i < racers.size(); i++) {
		racers[i].ai.race_lanes = &node_with;
		size_t slot = racers.size() - 1 - i; /* player (0) in the last slot */
		int row = (int)slot / 2;
		int grid_chunk = ((start - 2 - row * 2) % n + n) % n;
		/* On the lanes that run the race's way (the drive map's), two side by side; a
		 * stage without them puts the cars either side of the road's middle. */
		std::vector<size_t> lanes;
		for (size_t k2 = 0; k2 < track.drive.size(); k2++) {
			if (node_chunk[k2] == grid_chunk && node_with[k2] && track.drive[k2].next >= 0)
				lanes.push_back(k2);
		}
		if (lanes.size() >= 2) {
			/* Across the road, from left to right. */
			float c0[3], c1[3];
			track.road_centre(grid_chunk, c0);
			track.road_centre(grid_chunk + 1, c1);
			float dx = c1[0] - c0[0], dz = c1[2] - c0[2];
			auto across = [&](size_t k2) {
				const float *p = track.drive[k2].pos;
				return (p[0] - c0[0]) * dz - (p[2] - c0[2]) * dx;
			};
			std::sort(lanes.begin(), lanes.end(), [&](size_t a2, size_t b2) { return across(a2) < across(b2); });
			/* The two lanes in the middle of the carriageway. */
			size_t m = (lanes.size() - 2) / 2;
			const DriveNode &dn = track.drive[lanes[m + slot % 2]];
			const float *q = track.drive[(size_t)dn.next].pos;
			racers[i].car.place_at(world, dn.pos, atan2f(q[0] - dn.pos[0], q[2] - dn.pos[2]));
		}
		else
			racers[i].car.place(world, track, grid_chunk, (slot % 2) ? 22.0f : -22.0f);
		racers[i].rules.begin(n, start_line, track.find_trigger(14), laps, racers[i].car.chunk);
		racers[i].safe.push_back({ { racers[i].car.pos[0], racers[i].car.pos[1], racers[i].car.pos[2] },
			racers[i].car.yaw, 0 });
	}
	const int field_size = (int)racers.size();
	DamageTable damage_table;
	damage_table.load(data_dir);
	/* The police cars by the road (game.ini [OPTIONS] Police; A2_POLICE=0 for testing):
	 * CAR_CFG.INI [traffic] has a car for each police animation. */
	bool police_on = gi.get_int("OPTIONS", "Police", 1) != 0;
	if (const char *pe = getenv("A2_POLICE"))
		police_on = police_on && *pe != '0';
	std::vector<const TrackObject *> radar_traps;
	for (const TrackObject &o : police_on ? track.objects : std::vector<TrackObject>()) {
		if (o.type == 7)
			radar_traps.push_back(&o);
		if (o.type != 9)
			continue;
		IniFile cfg;
		std::string cp = find_file_ci(data_dir, "CAR_CFG.INI");
		int entry = -1;
		if (!cp.empty() && cfg.load(cp)) {
			for (int i = 0; i < cfg.get_int("traffic", "Count", 0) && entry < 0; i++) {
				std::vector<std::string> f = split_fields(cfg.get("traffic", std::to_string(i)));
				if (f.size() > 1 && equal_ci(f[1], o.animation))
					entry = i;
			}
		}
		Racer cop;
		if (entry < 0 || !cop.car.spec.load(data_dir, "traffic", entry, 0, 0).empty())
			continue;
		cop.police = Racer::WAITING;
		cop.model = load_model(track, meshes, textures, cop.car.spec.animation);
		cop.car.place_at(world, o.pos, o.rot[1] * PI / 180);
		cop.rules.phase = RaceRules::RACING;
		racers.push_back(std::move(cop));
	}
	/* The pick-ups (TrackObject type 25, "Bonus item", run by bonus.dso's CBonus events):
	 * money, turbo oil, repairs, freezing the others, invulnerability, fast forward. Each
	 * is taken by driving through it (the two models' radii, across the ground), then
	 * fades for three seconds and comes back after a while (money never). */
	struct Bonus {
		const TrackObject *obj;
		const Mesh *mesh = nullptr;
		unsigned tex = 0;
		float radius = 10;
		enum { WAITING, FADING, GONE } state = WAITING;
		float taken = 0;
	};
	struct BonusKind {
		const char *anim;
		int text;          /* language.ini */
		const char *sound; /* sound.ini */
		float respawn;     /* seconds; < 0 never */
		int money;
		float turbo;
		float repair;
	};
	static const BonusKind bonus_kinds[] = {
		{ "pw_1pts", 59, "PW_1PT", -1, 100, 0, 0 },
		{ "pw_5pts", 60, "PW_5PTS", -1, 500, 0, 0 },
		{ "pw_10pts", 61, "PW_10PTS", -1, 1000, 0, 0 },
		{ "pw_turbs", 64, "PW_TURBS", 15, 0, 10, 0 },
		{ "pw_turbb", 65, "PW_TURBB", 15, 0, 50, 0 },
		{ "pw_reps", 62, "PW_REPS", 15, 0, 0, 100 },
		{ "pw_repb", 63, "PW_REPB", 15, 0, 0, 300 },
		{ "pw_stop", 56, "PW_FREEZ", 15, 0, 0, 0 },
		{ "pw_godm", 58, "PW_INV", 5, 0, 0, 0 },
		{ "pw_fastf", 57, "PW_FAST", 5, 0, 0, 0 },
	};
	auto bonus_kind = [](const std::string &anim) -> const BonusKind * {
		for (const BonusKind &k : bonus_kinds)
			if (anim.size() >= strlen(k.anim) && equal_ci(anim.substr(0, strlen(k.anim)), k.anim))
				return &k;
		return nullptr;
	};
	std::vector<Bonus> bonuses;
	for (const TrackObject &o : track.objects) {
		if (o.type != 25)
			continue;
		Bonus b;
		b.obj = &o;
		if (const std::vector<AnimFrame> *frames = track.animation(o.animation); frames && !frames->empty()) {
			b.mesh = meshes.get((*frames)[0].mesh);
			b.tex = textures.get((*frames)[0].texture);
		}
		if (b.mesh)
			b.radius = std::max(b.mesh->max[0] - b.mesh->min[0], b.mesh->max[2] - b.mesh->min[2]) / 2;
		bonuses.push_back(b);
	}
	for (Racer &rc : racers) {
		rc.damage_model = damage_table.get(rc.car.spec.damage_set);
		if (rc.model.frames.size() > 5)
			set_phase(rc, 0, damage_table, track, meshes, textures);
	}
	/* Testing: A2_DAMAGE=<n> starts the player's car damaged. */
	if (const char *dm = getenv("A2_DAMAGE"))
		racers[0].damage = std::clamp((float)atof(dm), 0.0f, 1098.0f);
	std::vector<Debris> debris;
	/* The effects (game.ini [GFX OPTIONS]). */
	Effects fx;
	fx.particles = gi.get_int("GFX OPTIONS", "particles", 1) != 0;
	fx.clouds = gi.get_int("GFX OPTIONS", "clouds", 1) != 0;
	fx.skidmarks = gi.get_int("GFX OPTIONS", "skidmarks", 1) != 0;
	fx.fade_skidmarks = gi.get_int("GFX OPTIONS", "fade_skmarks", 1) != 0;
	fx.sfx_tex = textures.get("s_sfx.pcx");
	fx.smoke_tex = textures.get("L1RACER3.PCX");
	if (const std::vector<AnimFrame> *f = track.animation("Par_Damage"))
		for (const AnimFrame &af : *f)
			fx.bits.push_back(meshes.get(af.mesh));
	{
		static const char *anims[Effects::SCENERY_KINDS] = { "par_Leaf", "par_Bird", "par_mail", "par_trash",
			"par_paper", "par_dirt", "par_dirtpieces", "par_water", "par_waterdrops" };
		for (int k = 0; k < Effects::SCENERY_KINDS; k++)
			if (const std::vector<AnimFrame> *f = track.animation(anims[k]))
				for (const AnimFrame &af : *f)
					fx.scenery_meshes[k].push_back(meshes.get(af.mesh));
	}
	/* The objects that set off the scenery's particles (tob_main.cpp), when the player's car
	 * touches them (0x453480: the two models' radii, across the ground): leaves (24) and
	 * birds (23) once each time it comes by, flying up from the car and from the birds'
	 * place; mud (27) and water (26) thrown up by the rear wheels all the while it is on
	 * them. A rubbish bin (19), a mailbox (20) and paper (22) burst when knocked (their
	 * state machines, e.g. 0x4532b0: once for each knock, again after they came to rest). */
	struct SceneryTrigger {
		const TrackObject *obj;
		Effects::Scenery kind;
		float radius;
		bool touching = false;
	};
	auto mesh_radius = [](const Mesh *m) {
		float r = 0;
		if (m)
			for (const MeshVertex &v : m->vertices)
				r = std::max(r, v.x * v.x + v.y * v.y + v.z * v.z);
		return sqrtf(r);
	};
	std::vector<SceneryTrigger> scenery_triggers;
	for (const TrackObject &o : track.objects) {
		Effects::Scenery kind;
		switch (o.type) {
		case 23: kind = Effects::BIRDS; break;
		case 24: kind = Effects::LEAVES; break;
		case 26: kind = Effects::WATER; break;
		case 27: kind = Effects::MUD; break;
		default: continue;
		}
		const std::vector<AnimFrame> *f = track.animation(o.animation);
		scenery_triggers.push_back({ &o, kind, f && !f->empty() ? mesh_radius(meshes.get((*f)[0].mesh)) : 10 });
	}
	const float car_radius = mesh_radius(racers[0].model.body);
	/* A knock's sparks (and with damage, more and bits of car: FUN_00426880). */
	auto knock_fx = [&](const Racer &rc, const float at[3], float imp, bool hurt) {
		const float lo = rc.player ? rc.damage_model.min_player : rc.damage_model.min_imp;
		if (imp < lo / 3)
			return;
		for (int k = 0; k < (hurt ? 4 : 1); k++)
			fx.sparks(at);
		if (hurt)
			fx.car_bits(at, rc.car.yaw + PI, imp, rc.car.pos[1]);
	};
	float smoke_clock = 0, tyre_clock = 0;
	const Mesh *beacon = nullptr;
	unsigned beacon_tex = 0;
	if (const std::vector<AnimFrame> *f = track.animation("coplights"); f && !f->empty()) {
		beacon = meshes.get((*f)[0].mesh);
		beacon_tex = textures.get((*f)[0].texture);
	}
	auto break_sound = [&]() {
		static const char *names[4] = { "DAMAGE_GLASS", "DAMAGE_DOP", "DAMAGE_GLASS2", "DAMAGE_METALBAR" };
		sound.effect(names[random() % 4]);
	};
	float invulnerable_left = 0;
	/* The knock's sound (FUN_00427400), by its impulse against the player's threshold. */
	auto knock_sound = [&](float imp, bool wall, float since_last) {
		const DamageModel &m = racers[0].damage_model;
		static unsigned rnd = 1;
		rnd = rnd * 1103515245u + 12345u;
		const char *two = (rnd >> 16) & 1 ? "2" : "1";
		if (wall && imp < m.min_player / 3 && since_last < 0.3f)
			sound.effect("SCHUUR");
		if (imp < m.min_player / 3)
			return;
		if (imp < m.min_player)
			sound.effect(std::string("SOFT_CAR_HIT") + two);
		else if (imp < m.min_player + (m.min_player + m.max_player) / 2)
			sound.effect(std::string("MID_CAR_HIT") + two);
		else
			sound.effect(std::string("HARD_CAR_HIT") + two);
	};
	int money = std::max(opt.money, 0);
	float turbo = std::clamp(opt.turbo, 0.0f, 100.0f);
	bool turbo_on = false;
	int turbo_voice = 0;
	float turbo_tick = 0;
	float freeze_left = 0, fast_left = 0, fov = 60, fov_target = 60;
	std::string message;
	float message_time = 0;
	int flashes = 0;
	float flash_message = 0;
	std::vector<char> flashed(radar_traps.size(), 0);
	float arrest_time = 0;
	Car &car = racers[0].car;
	RaceRules &rules = racers[0].rules;
	float cam[3] = { car.pos[0] - sinf(car.yaw) * 60, car.pos[1] + 25, car.pos[2] - cosf(car.yaw) * 60 };
	/* 0 chase, 1 driver, 2 and 3 beside and in front of the car (looking at it). */
	int camera = 0;
	uint32_t last = sys_ticks();
	float acc = 0;
	/* Testing: A2_TRACE=1 prints the car's state every second. */
	const char *trace_env = getenv("A2_TRACE");
	bool trace = trace_env && *trace_env && *trace_env != '0';
	float clock = 0, next_trace = 1;
	float race_limit = getenv("A2_RACE_LIMIT") ? (float)atof(getenv("A2_RACE_LIMIT")) : 0;
	auto position_of = [&](const Racer &who) {
		int p = 1;
		for (const Racer &o : racers) {
			if (&o != &who && o.racing() && o.score() > who.score())
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
			me.respawn(world, clock, track);
		uint32_t now = sys_ticks();
		float frame_dt = std::min((now - last) / 1000.0f, 0.1f);
		acc += frame_dt;
		last = now;
		/* FUN_0044c950: wrecked, the race is over. */
		if (racers[0].damage >= 1099 && rules.phase == RaceRules::RACING) {
			rules.phase = RaceRules::TOTAL_LOSS;
			rules.finished_at = 0;
		}
		/* A chase has to be finished in time. */
		if (opt.time_limit > 0 && rules.time > opt.time_limit && rules.phase == RaceRules::RACING) {
			rules.phase = RaceRules::TIME_UP;
			rules.finished_at = 0;
		}
		/* Testing: A2_RACE_LIMIT=<seconds> ends the race there as if finished. */
		if (race_limit > 0 && clock > race_limit && rules.phase == RaceRules::RACING) {
			rules.phase = RaceRules::FINISHED;
			rules.finished_at = 14;
		}
		/* "DRUK 'SPATIE' OM VERDER TE GAAN" */
		if ((rules.phase == RaceRules::FINISHED || rules.phase == RaceRules::ARRESTED ||
				rules.phase == RaceRules::TIME_UP || rules.phase == RaceRules::TOTAL_LOSS) &&
			(rules.finished_at > 15 || in.key == KEY_SPACE || in.key == KEY_ENTER))
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
		/* The turbo (FUN_0044e970): a tenth of a unit every 100 ms while burning, so a full
		 * tank lasts ten seconds; fast forward burns it for free. */
		bool want_turbo = rules.phase == RaceRules::RACING && (fast_left > 0 || (!autopilot && keyispressed(keys.turbo)));
		turbo_tick += frame_dt;
		if (!want_turbo) {
			turbo_on = false;
			turbo_tick = 0;
		}
		else {
			while (turbo_tick >= 0.1f) {
				turbo_tick -= 0.1f;
				if (fast_left > 0)
					turbo_on = true;
				else if (turbo >= 1) {
					turbo -= 1;
					turbo_on = true;
				}
				else
					turbo_on = false;
			}
		}
		if (turbo_on && !turbo_voice)
			turbo_voice = sound.loop("TURBO");
		else if (!want_turbo && turbo_voice) {
			sound.stop_voice(turbo_voice);
			turbo_voice = 0;
		}
		player_in.turbo = turbo_on;
		obstacles = solid_obstacles;
		for (const LooseObject &l : loose.list)
			if (l.mass >= 250 && l.tilt < 60)
				obstacles.push_back(obstacle_of(*l.mesh, l.pos, l.obj->rot[1] + l.yaw));
		while (acc >= STEP) {
			for (Racer &rc : racers) {
				rc.ai.obstacles = &obstacles;
				CarInput ci;
				if (rc.police == Racer::WAITING)
					ci.hold = true;
				else if (rc.police == Racer::CHASING)
					ci = rc.ai.chase(track, rc.car, car, STEP);
				else
					ci = rc.player && !autopilot ? player_in : rc.ai.drive(track, rc.car, STEP);
				if (rc.player && autopilot)
					ci.turbo = player_in.turbo;
				/* STATE_TOTAL_LOSS: a wrecked computer car lets go of everything. */
				if (!rc.player && rc.damage >= 1100) {
					ci.throttle = ci.brake = ci.steer = 0;
					ci.turbo = false;
				}
				/* FreezeRacers: the others stand still for a while. */
				if (freeze_left > 0 && !rc.player && !rc.traffic && rc.police == Racer::NONE) {
					ci.throttle = 0;
					ci.hold = true;
				}
				if (!rc.racing())
					rc.rules.phase = RaceRules::RACING;
				/* No driving before the start; after the finish the car rolls out. */
				if (rc.rules.phase != RaceRules::RACING || (rc.police && rules.phase == RaceRules::COUNTDOWN)) {
					ci.throttle = 0;
					ci.brake = 0.3f;
					ci.hold = rc.rules.phase == RaceRules::COUNTDOWN;
					if (ci.hold)
						ci.steer = 0;
					rc.ai.stuck = 0;
				}
				rc.car.wall_hit = 0;
				rc.car.step(world, ci, STEP);
				if (rc.car.wall_hit > 0 && !rc.traffic) {
					/* Against the world: speed (game units/s) x half its mass x how upright
					 * the face is (the port's walls all are). */
					float imp = rc.car.wall_hit * 10 * rc.car.spec.mass / 2;
					float since = clock - rc.last_hit;
					bool hurt = rc.hit(damage_table, imp, clock,
						rc.player && (invulnerable_left > 0 || rules.phase != RaceRules::RACING));
					float at[3] = { rc.car.pos[0], rc.car.pos[1] + 5, rc.car.pos[2] };
					knock_fx(rc, at, imp, hurt);
					if (rc.player && (hurt || imp > rc.damage_model.min_player / 3 || since < 0.3f))
						knock_sound(imp, true, since);
				}
				if (rc.racing())
					rc.rules.update(STEP, rc.car.chunk);
			}
			for (size_t i = 0; i < racers.size(); i++) {
				for (size_t j = i + 1; j < racers.size(); j++)
				{
					float v = collide(racers[i].car, racers[j].car);
					if (v <= 0)
						continue;
					/* Car against car: speed x the other's mass (at most 1666.7). */
					for (int side = 0; side < 2; side++) {
						Racer &me_ = side ? racers[j] : racers[i];
						const Racer &other = side ? racers[i] : racers[j];
						if (me_.traffic)
							continue;
						float imp = v * 10 * std::min(other.car.spec.mass, 1666.7f);
						float since = clock - me_.last_hit;
						bool hurt = me_.hit(damage_table, imp, clock,
							me_.player && (invulnerable_left > 0 || rules.phase != RaceRules::RACING));
						float at[3];
						for (int a = 0; a < 3; a++)
							at[a] = (racers[i].car.pos[a] + racers[j].car.pos[a]) / 2 + (a == 1 ? 5 : 0);
						knock_fx(me_, at, imp, hurt);
						if (me_.player)
							knock_sound(imp, false, since);
					}
				}
			}
			/* Knocking the loose objects about: a heavy one hurts like a car of its
			 * mass; mailboxes, bins and paper burst once each time they are set going. */
			for (Racer &rc : racers) {
				LooseObject *hit_obj = nullptr;
				float v = loose.hit(rc.car, hit_obj);
				if (!hit_obj || v < 0.5f)
					continue;
				if (rc.player) {
					if (hit_obj->sound)
						sound.effect(hit_obj->sound);
					Effects::Scenery kind = Effects::SCENERY_KINDS;
					switch (hit_obj->obj->type) {
					case 19: kind = Effects::TRASH; break;
					case 20: kind = Effects::MAIL; break;
					case 22: kind = Effects::PAPER; break;
					}
					if (kind != Effects::SCENERY_KINDS && !hit_obj->burst) {
						float dir[3] = { sinf(rc.car.yaw), 0, cosf(rc.car.yaw) };
						fx.scenery(kind, hit_obj->pos, dir, v, frame_dt);
						hit_obj->burst = true;
					}
				}
				if (rc.traffic || hit_obj->mass < 100)
					continue;
				float imp = v * 10 * std::min(hit_obj->hinged ? 300.0f : hit_obj->mass, 1666.7f);
				float since = clock - rc.last_hit;
				bool hurt = rc.hit(damage_table, imp, clock,
					rc.player && (invulnerable_left > 0 || rules.phase != RaceRules::RACING));
				float at[3] = { hit_obj->pos[0], rc.car.pos[1] + 5, hit_obj->pos[2] };
				knock_fx(rc, at, imp, hurt);
				if (rc.player)
					knock_sound(imp, false, since);
			}
			loose.update(STEP, world);
			acc -= STEP;
			clock += STEP;
		}
		sound.engine(car, autopilot ? 1.0f : player_in.throttle);
		/* The police: a waiting car sets off when the player passes close by fast, or when
		 * a radar trap flashes nearby (Flitspaal, TrackObject type 7, over 80 km/h). */
		if (rules.phase == RaceRules::RACING) {
			for (size_t t = 0; t < radar_traps.size(); t++) {
				const TrackObject &o = *radar_traps[t];
				float dx = o.pos[0] - car.pos[0], dz = o.pos[2] - car.pos[2];
				bool in_range = dx * dx + dz * dz < 120 * 120;
				if (in_range && !flashed[t] && car.speed_kmh() > 80) {
					flashed[t] = 1;
					flashes++;
					flash_message = 3;
					sound.effect("PHOTO");
					hud.white = 2;
					money = std::max(money - 50, 0); /* Flitspaal: FLITS BOETE -50 */
					/* The nearest waiting police car comes after the player. */
					Racer *best = nullptr;
					float bd = 1e30f;
					for (Racer &rc : racers) {
						if (rc.police != Racer::WAITING)
							continue;
						float ex = rc.car.pos[0] - car.pos[0], ez = rc.car.pos[2] - car.pos[2], e = ex * ex + ez * ez;
						if (e < bd) {
							bd = e;
							best = &rc;
						}
					}
					if (best && bd < 3000.0f * 3000.0f)
						best->police = Racer::CHASING;
				}
				if (!in_range)
					flashed[t] = flashed[t] && dx * dx + dz * dz < 400 * 400;
			}
		}
		flash_message = std::max(0.0f, flash_message - frame_dt);
		message_time = std::max(0.0f, message_time - frame_dt);
		/* A wreck smokes (damage over 900, a puff each 200 ms, front or back). */
		smoke_clock += frame_dt;
		if (smoke_clock >= 0.2f && frame_dt < 1.0f / 12) {
			smoke_clock = 0;
			for (const Racer &rc : racers) {
				if (rc.damage <= 900)
					continue;
				float right[3], up[3], fwd[3];
				rc.car.axes(right, up, fwd);
				float lx = (float)(random() % 10) - 5;
				float lz = rc.damage_model.smoke_front ? rc.car.spec.wheel_front[2] : rc.car.spec.wheel_rear[2];
				float p[3], v[3] = { rc.car.vel[0], 0, rc.car.vel[2] };
				for (int a = 0; a < 3; a++)
					p[a] = rc.car.pos[a] + right[a] * lx + up[a] * 5 + fwd[a] * lz;
				fx.smoke(p, v, true);
			}
		}
		/* The player's tyres: smoke and marks when they slide (gfx_wolk, gfx_skid). The
		 * slide: sideways speed, and the speed with the wheels locked by the brake. */
		{
			float right[3], up[3], fwd[3];
			car.axes(right, up, fwd);
			float vl = car.vel[0] * right[0] + car.vel[2] * right[2];
			float vf = car.vel[0] * fwd[0] + car.vel[2] * fwd[2];
			float locked = player_in.brake > 0.5f && vf > 3 ? vf * 0.5f : 0;
			int level = car.airborne ? 0 : std::clamp((int)sqrtf(0.25f * vl * vl + locked * locked), 0, 10);
			tyre_clock += frame_dt;
			for (int side = 0; side < 2; side++) {
				float wx = (side ? 1 : -1) * car.spec.wheel_rear[0];
				float p[3];
				for (int a = 0; a < 3; a++)
					p[a] = car.pos[a] + right[a] * wx + fwd[a] * car.spec.wheel_rear[2];
				fx.skid(side, p, right, level, clock);
				if (level > 0 && tyre_clock >= 0.1f && frame_dt < 1.0f / 12) {
					float v[3] = { car.vel[0], 0, car.vel[2] };
					fx.smoke(p, v, false);
				}
			}
			if (tyre_clock >= 0.1f)
				tyre_clock = 0;
		}
		{
			float right[3], up[3], fwd[3];
			car.axes(right, up, fwd);
			float dir[3] = { fwd[0], 0, fwd[2] };
			float l = sqrtf(dir[0] * dir[0] + dir[2] * dir[2]);
			if (l > 0)
				dir[0] /= l, dir[2] /= l;
			float speed = sqrtf(car.vel[0] * car.vel[0] + car.vel[2] * car.vel[2]);
			for (SceneryTrigger &t : scenery_triggers) {
				float dx = t.obj->pos[0] - car.pos[0], dz = t.obj->pos[2] - car.pos[2];
				float reach = t.radius + car_radius;
				bool touching = dx * dx + dz * dz < reach * reach;
				bool arrived = touching && !t.touching;
				t.touching = touching;
				if (t.kind == Effects::MUD || t.kind == Effects::WATER) {
					if (!touching)
						continue;
					for (int side = 0; side < 2; side++) {
						float p[3];
						for (int a = 0; a < 3; a++)
							p[a] = car.pos[a] + right[a] * (side ? 1 : -1) * car.spec.wheel_rear[0] +
								fwd[a] * car.spec.wheel_rear[2];
						p[1] = car.pos[1];
						fx.scenery(t.kind, p, dir, speed, frame_dt);
						fx.scenery(t.kind == Effects::MUD ? Effects::MUD_BITS : Effects::WATER_DROPS, p, dir, speed,
							frame_dt);
					}
				}
				else if (arrived)
					fx.scenery(t.kind, t.kind == Effects::LEAVES ? car.pos : t.obj->pos, dir, speed, frame_dt);
			}
		}
		fx.update(frame_dt, clock);
		for (auto &[o, a] : animated) {
			a.elapsed += std::min(frame_dt, 0.1f) * 1000;
			if (a.elapsed >= (float)a.type->frames[a.step].second) {
				a.step = (a.step + 1) % a.type->frames.size();
				a.elapsed = 0;
			}
		}
		for (Racer &rc : racers)
			if (!rc.pieces.empty())
				update_pieces(rc, clock, damage_table, track, meshes, textures, world, debris,
					rc.player ? std::function<void()>(break_sound) : std::function<void()>([]() {}));
		freeze_left = std::max(0.0f, freeze_left - frame_dt);
		invulnerable_left = std::max(0.0f, invulnerable_left - frame_dt);
		if (fast_left > 0 && (fast_left -= frame_dt) <= 0)
			fov_target = 60; /* OnTurnoff: ChangeFOV(0.375) */
		fov += (fov_target - fov) * std::min(frame_dt / (fov_target > 60 ? 1.0f : 0.5f), 1.0f);
		{
			float car_r = std::max(car.spec.wheel_front[0], 8.0f) + 4;
			for (Bonus &b : bonuses) {
				const BonusKind *k = bonus_kind(b.obj->animation);
				if (b.state == Bonus::WAITING && rules.phase == RaceRules::RACING) {
					float dx = b.obj->pos[0] - car.pos[0], dz = b.obj->pos[2] - car.pos[2];
					if (dx * dx + dz * dz < (b.radius + car_r) * (b.radius + car_r)) {
						b.state = Bonus::FADING;
						b.taken = clock;
						if (k) {
							money = std::min(money + k->money, 999999);
							turbo = std::min(turbo + k->turbo, 100.0f);
							racers[0].damage = std::max(racers[0].damage - k->repair, 0.0f);
							if (!strcmp(k->anim, "pw_godm"))
								invulnerable_left = 20; /* MakeInvulnerable(20) */
							if (!strcmp(k->anim, "pw_stop"))
								freeze_left = 6;
							if (!strcmp(k->anim, "pw_fastf")) {
								fast_left = 4;
								fov_target = 108; /* ChangeFOV(0.6): 0.6 pi */
							}
							if (trace)
								printf("race: picked up %s at %.1f s: money %d, turbo %.0f\n", b.obj->animation.c_str(),
									clock, money, turbo);
							message = hud.lang.get(k->text, "");
							message_time = 3;
							sound.effect(k->sound);
						}
					}
				}
				else if (b.state == Bonus::FADING && clock - b.taken >= 3)
					b.state = Bonus::GONE;
				else if (b.state == Bonus::GONE && k && k->respawn >= 0 && clock - b.taken >= k->respawn)
					b.state = Bonus::WAITING;
			}
		}
		bool near_cop = false;
		for (Racer &rc : racers) {
			if (rc.police == Racer::NONE)
				continue;
			float dx = rc.car.pos[0] - car.pos[0], dz = rc.car.pos[2] - car.pos[2], d = sqrtf(dx * dx + dz * dz);
			if (rc.police == Racer::WAITING && rules.phase == RaceRules::RACING && d < 150 && car.speed_kmh() > 60)
				rc.police = Racer::CHASING;
			if (rc.police == Racer::CHASING) {
				rc.chase_time += frame_dt;
				if (d > 3000 || rules.phase != RaceRules::RACING)
					rc.police = Racer::GAVE_UP;
				if (d < 45)
					near_cop = true;
			}
			/* The siren, louder the closer the car. */
			if (rc.police == Racer::CHASING) {
				float v = std::clamp(1 - d / 1500, 0.0f, 1.0f);
				if (!rc.siren)
					rc.siren = sound.loop("POLITIE_SIRENE");
				sound.set(rc.siren, v);
			}
			else if (rc.siren) {
				sound.stop_voice(rc.siren);
				rc.siren = 0;
			}
		}
		/* Stopped with a police car beside: arrested, the race is over. */
		arrest_time = near_cop && car.speed_kmh() < 8 ? arrest_time + frame_dt : 0;
		if (arrest_time > 3 && rules.phase == RaceRules::RACING) {
			rules.phase = RaceRules::ARRESTED;
			rules.finished_at = 0;
		}
		for (Racer &rc : racers) {
			if (rc.police == Racer::GAVE_UP)
				rc.ai.skill = 0.4f;
		}
		/* Traffic: new cars out of sight, old ones gone when far behind. */
		if (!traffic.kinds.empty() && clock >= next_spawn) {
			next_spawn = clock + 0.5f;
			int with = 0, against = 0;
			for (Racer &rc : racers) {
				if (!rc.traffic)
					continue;
				int d = ((rc.car.chunk - car.chunk) % n + n) % n;
				if (d > n / 2)
					d -= n;
				if (d < -12 || d > 40)
					rc.car.chunk = -999; /* gone */
				else
					(rc.ai.skill > 0 ? with : against)++;
			}
			racers.erase(std::remove_if(racers.begin() + 1, racers.end(),
							 [](const Racer &rc) { return rc.car.chunk == -999; }),
				racers.end());
			bool want_with = with < traffic.max_with, want_against = against < traffic.max_against;
			if ((want_with || want_against) && !track.drive.empty()) {
				bool go_with = want_with && (!want_against || random() % 2);
				for (int tries = 0; tries < 20; tries++) {
					size_t i = random() % track.drive.size();
					int d = ((node_chunk[i] - car.chunk) % n + n) % n;
					if (d < 14 || d > 34 || (bool)node_with[i] != go_with || track.drive[i].next < 0)
						continue;
					const DriveNode &dn = track.drive[i];
					bool clear = true;
					for (const Racer &o : racers) {
						float dx = o.car.pos[0] - dn.pos[0], dz = o.car.pos[2] - dn.pos[2];
						clear = clear && dx * dx + dz * dz > 80 * 80;
					}
					if (!clear || racers.size() >= racers.capacity())
						break;
					const CarSpec *spec = traffic.pick(random());
					Racer t;
					t.traffic = true;
					t.car.spec = *spec;
					t.model = models[spec->animation];
					const float *q = track.drive[(size_t)dn.next].pos;
					t.car.place_at(world, dn.pos, atan2f(q[0] - dn.pos[0], q[2] - dn.pos[2]));
					/* A steady 45..60 km/h (stored as a share of the car's top speed; negative
					 * marks a car coming the other way, for the counts). */
					float cruise = (45 + (float)(random() % 16)) / std::max(spec->top_speed, 50.0f);
					t.ai.skill = go_with ? cruise : -cruise;
					t.ai.node = (int)i;
					t.rules.phase = RaceRules::RACING;
					t.car.vel[0] = sinf(t.car.yaw) * 10;
					t.car.vel[2] = cosf(t.car.yaw) * 10;
					racers.push_back(std::move(t));
					break;
				}
			}
		}
		for (Racer &rc : racers) {
			/* Fallen off the world, or stuck for long: back on the road. */
			if (rc.car.airborne && rc.car.vel[1] < -40)
				rc.respawn(world, clock, track);
			rc.stuck = rc.car.speed_kmh() < 3 && rc.rules.phase == RaceRules::RACING ? rc.stuck + frame_dt : 0;
			if (rc.stuck > (rc.player && !autopilot ? 1e9f : 8.0f)) {
				rc.respawn(world, clock, track);
				rc.stuck = 0;
			}
			rc.remember(clock);
		}
		if (trace && clock >= next_trace) {
			int cops = 0, chasing = 0, cars = 0;
			float nearest = 1e9f;
			for (const Racer &rc : racers) {
				cars += rc.traffic;
				cops += rc.police != Racer::NONE;
				if (rc.police == Racer::CHASING) {
					chasing++;
					float dx = rc.car.pos[0] - car.pos[0], dz = rc.car.pos[2] - car.pos[2];
					nearest = std::min(nearest, sqrtf(dx * dx + dz * dz));
				}
			}
			printf("t %4.0f s  chunk %3d  %5.1f km/h  gear %d  lap %d  pos %d  traffic %d  police %d/%d  damage %.0f", clock,
				car.chunk, car.speed_kmh(), car.gear, rules.lap, position_of(me), cars, chasing, cops, me.damage);
			if (chasing)
				printf(" (%.0f away)", nearest);
			printf("%s%s%s\n", car.on_grass ? "  grass" : "", car.airborne ? "  air" : "", car.touching_wall ? "  WALL" : "");
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
		gl_perspective(fov * PI / 180, (float)w / (float)h, 2, 30000);
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
			if ((police_on && o.type == 9) || o.type == 25 || loose.loose(&o))
				continue; /* drawn as cars, as pick-ups, and where they were knocked to */
			int d = ((o.chunk - c) % n + n) % n;
			if (d > 25 && d < n - 25)
				continue;
			const std::vector<AnimFrame> *frames = track.animation(o.animation);
			if (!frames || frames->empty())
				continue;
			size_t fi = 0;
			if (auto a = animated.find(&o); a != animated.end())
				fi = (size_t)std::clamp(a->second.type->frames[a->second.step].first, 0, (int)frames->size() - 1);
			const Mesh *m = meshes.get((*frames)[fi].mesh);
			if (!m)
				continue;
			glPushMatrix();
			glTranslatef(o.pos[0], o.pos[1], o.pos[2]);
			gl_rotate(o.rot[1], 0, 1, 0);
			gl_rotate(o.rot[0], 1, 0, 0);
			gl_rotate(o.rot[2], 0, 0, 1);
			r.draw_mesh(*m, textures.get((*frames)[fi].texture));
			glPopMatrix();
		}
		for (const Racer &rc : racers) {
			int d = ((rc.car.chunk - c) % n + n) % n;
			if (d <= 25 || d >= n - 25)
			{
				draw_car(r, rc.car, rc.model, rc.damage <= rc.damage_model.window, rc.phase);
				draw_pieces(r, rc);
			}
		}
		loose.draw(r, c, n, 25);
		for (const Debris &b : debris) {
			glPushMatrix();
			glTranslatef(b.pos[0], b.pos[1], b.pos[2]);
			gl_rotate(-b.yaw * 180 / PI, 0, 1, 0);
			gl_rotate(b.def->rot[0], 1, 0, 0);
			gl_rotate(b.def->rot[2], 0, 0, 1);
			r.draw_mesh(*b.mesh, b.tex);
			glPopMatrix();
		}
		{
			float f[3] = { target[0] - eye[0], target[1] - eye[1], target[2] - eye[2] };
			float cr[3] = { f[2], 0, -f[0] }, l = sqrtf(cr[0] * cr[0] + cr[2] * cr[2]);
			if (l > 0)
				cr[0] /= l, cr[2] /= l;
			float fl = sqrtf(f[0] * f[0] + f[1] * f[1] + f[2] * f[2]);
			float cu[3] = { 0, 1, 0 };
			if (fl > 0) {
				for (float &x : f)
					x /= fl;
				cu[0] = cr[1] * f[2] - cr[2] * f[1];
				cu[1] = cr[2] * f[0] - cr[0] * f[2];
				cu[2] = cr[0] * f[1] - cr[1] * f[0];
				if (cu[1] < 0)
					for (float &x : cu)
						x = -x;
			}
			fx.draw(r, cr, cu, clock);
			/* The lights' glows (car_whl.cpp): frames 3 (front) and 4 (back) of a car's
			 * animation at its light_positions, both sides, brighter the more they face
			 * the camera, turning as they brighten; blended as a soft add (ONE,
			 * ONE_MINUS_SRC_COLOR). Gone with the lights' damage. A chasing police car's
			 * blue lights turn on its roof. */
			glDepthMask(GL_FALSE);
			glEnable(GL_BLEND);
			glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_COLOR);
			for (const Racer &rc : racers) {
				int d = ((rc.car.chunk - c) % n + n) % n;
				if (d > 12 && d < n - 12)
					continue;
				float rr[3], uu[3], ff[3];
				rc.car.axes(rr, uu, ff);
				float dot = f[0] * ff[0] + f[1] * ff[1] + f[2] * ff[2];
				auto glow = [&](size_t frame, const float at[3], float bright) {
					if (bright <= 0 || frame >= rc.model.frames.size() || !rc.model.frames[frame].first)
						return;
					for (int side = -1; side <= 1; side += 2) {
						glPushMatrix();
						gl_mult_world(rr, uu, ff, rc.car.pos);
						glTranslatef(at[0] * (float)side, at[1], at[2]);
						gl_rotate(bright * 1500 * 360 / 1024, 0, 0, 1);
						glScalef(bright, bright, bright);
						r.draw_mesh(*rc.model.frames[frame].first, rc.model.frames[frame].second);
						glPopMatrix();
					}
				};
				if (rc.damage <= (float)rc.damage_model.lights) {
					glow(3, rc.car.spec.light_front, std::max(0.0f, (fabsf(std::min(0.0f, dot)) - 0.6f) * 3.5f));
					glow(4, rc.car.spec.light_rear, std::max(0.0f, (fabsf(std::min(0.0f, -dot)) - 0.6f) * 3.5f));
				}
				if (rc.siren && beacon) {
					float sc = std::max(0.0f, (fabsf(dot) - 0.6f) * 12);
					for (int side = -1; side <= 1 && sc > 0; side += 2) {
						glPushMatrix();
						gl_mult_world(rr, uu, ff, rc.car.pos);
						glTranslatef(3.2f * (float)side, 15, -2.8f);
						gl_rotate(clock * 6000 * 360 / 1024 * (float)side, 0, 1, 0);
						glScalef(sc, sc, sc);
						r.draw_mesh(*beacon, beacon_tex);
						glPopMatrix();
					}
				}
			}
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
			glDisable(GL_BLEND);
			glDepthMask(GL_TRUE);
		}
		/* The pick-ups turn (OnInit: anglespeed 600, in 1024ths of a turn a second) and
		 * pulse (OnFramecall: 1 + 0.3 sin(pi t)); taken, they shrink away (OnFadeout). */
		for (const Bonus &b : bonuses) {
			int d = ((b.obj->chunk - c) % n + n) % n;
			if (!b.mesh || b.state == Bonus::GONE || (d > 25 && d < n - 25))
				continue;
			float pulse = 1 + (equal_ci(b.obj->animation.substr(0, 7), "pw_1pts") ? 0.2f : 0.3f) * sinf(PI * clock);
			if (b.state == Bonus::FADING)
				pulse *= std::max(0.0f, 1 - (clock - b.taken) / 0.5f);
			glPushMatrix();
			glTranslatef(b.obj->pos[0], b.obj->pos[1], b.obj->pos[2]);
			gl_rotate(b.obj->rot[1] + clock * 600 * 360 / 1024, 0, 1, 0);
			glScalef(pulse, pulse, pulse);
			r.draw_mesh(*b.mesh, b.tex);
			glPopMatrix();
		}
		hud.flash = flash_message;
		hud.turbo = turbo;
		hud.damage = racers[0].damage;
		hud.message = message;
		hud.message_time = message_time;
		hud.time_limit = opt.time_limit;
		hud.flashes = flashes;
		hud.draw(r, rules, car, position_of(me), field_size);
		sys_gl_end_frame();
	}
	sound.stop();
	if (result) {
		result->money = money;
		result->turbo = turbo;
	}
	if (trace) {
		for (int i = 0; i < field_size; i++) {
			const Racer &rc = racers[(size_t)i];
			printf("racer %d (car %d): chunk %d, progress %.0f, %.0f km/h%s\n", i, rc.entry, rc.car.chunk,
				rc.rules.progress, rc.car.speed_kmh(), rc.player ? " (player)" : "");
		}
	}
	if (result) {
		result->finished = rules.phase == RaceRules::FINISHED;
		result->arrested = rules.phase == RaceRules::ARRESTED;
		result->time_up = rules.phase == RaceRules::TIME_UP;
		result->total_loss = rules.phase == RaceRules::TOTAL_LOSS;
		result->quit = !result->finished && !result->arrested && !result->time_up && !result->total_loss;
		result->lap_times = rules.lap_times;
		result->order.clear();
		float distance = (float)std::max(rules.distance(), 1);
		for (int i = 0; i < field_size; i++) {
			const Racer &rc = racers[(size_t)i];
			RaceResult::Entry e;
			e.car = rc.entry;
			e.player = rc.player;
			/* Not there yet: the time its pace so far would take. */
			e.time = rc.rules.phase == RaceRules::FINISHED
				? rc.rules.time
				: rules.time * distance / std::max(rc.rules.progress, 1.0f) + 0.01f * (float)i;
			result->order.push_back(e);
		}
		std::sort(result->order.begin(), result->order.end(),
			[](const RaceResult::Entry &a, const RaceResult::Entry &b) { return a.time < b.time; });
		for (size_t k = 0; k < result->order.size(); k++) {
			if (result->order[k].player)
				result->position = (int)k + 1;
		}
	}
	printf("race: %s, position %d of %d, time %s",
		rules.phase == RaceRules::FINISHED ? "finished" : rules.phase == RaceRules::ARRESTED ? "arrested" : "not finished",
		position_of(racers[0]), field_size, format_time(rules.time).c_str());
	for (size_t i = 0; i < rules.lap_times.size(); i++)
		printf("%s lap %zu %s", i ? "," : ";", i + 1, format_time(rules.lap_times[i]).c_str());
	printf("\n");
	return 0;
}
