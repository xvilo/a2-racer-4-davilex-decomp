#include "race/race.h"

#include <algorithm>
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
	float flash = 0;
	int flashes = 0;
	float time_limit = 0;

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
		else if (rules.phase == RaceRules::ARRESTED) {
			overlay.string("STRING_ARRESTED", lang.get(TXT_ARRESTED, "GEARRESTEERD"));
			overlay.string("STRING_FINISH_TEXT", "");
		}
		else if (flash > 0) {
			overlay.string("STRING_GAME_TEXT", lang.get(TXT_FLASH_FINE, "FLITS BOETE  -50 EURO"));
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

	bool racing() const { return !traffic && police == NONE; }

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
			return;
		}
	}
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
	int *key_fields[4] = { &keys.up, &keys.down, &keys.left, &keys.right };
	for (int k = 0; k < 4; k++)
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
		cop.car.place_at(world, o.pos, -o.rot[1] * PI / 180);
		cop.rules.phase = RaceRules::RACING;
		racers.push_back(std::move(cop));
	}
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
			me.respawn(world, clock);
		uint32_t now = sys_ticks();
		float frame_dt = std::min((now - last) / 1000.0f, 0.1f);
		acc += frame_dt;
		last = now;
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
				rules.phase == RaceRules::TIME_UP) &&
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
		while (acc >= STEP) {
			for (Racer &rc : racers) {
				CarInput ci;
				if (rc.police == Racer::WAITING)
					ci.hold = true;
				else if (rc.police == Racer::CHASING)
					ci = rc.ai.chase(track, rc.car, car, STEP);
				else
					ci = rc.player && !autopilot ? player_in : rc.ai.drive(track, rc.car, STEP);
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
				rc.car.step(world, ci, STEP);
				if (rc.racing())
					rc.rules.update(STEP, rc.car.chunk);
			}
			for (size_t i = 0; i < racers.size(); i++) {
				for (size_t j = i + 1; j < racers.size(); j++)
					collide(racers[i].car, racers[j].car);
			}
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
				rc.respawn(world, clock);
			rc.stuck = rc.car.speed_kmh() < 3 && rc.rules.phase == RaceRules::RACING ? rc.stuck + frame_dt : 0;
			if (rc.stuck > (rc.player && !autopilot ? 1e9f : 8.0f)) {
				rc.respawn(world, clock);
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
			printf("t %4.0f s  chunk %3d  %5.1f km/h  gear %d  lap %d  pos %d  traffic %d  police %d/%d", clock, car.chunk,
				car.speed_kmh(), car.gear, rules.lap, position_of(me), cars, chasing, cops);
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
			if (police_on && o.type == 9)
				continue; /* drawn as cars */
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
		hud.flash = flash_message;
		hud.time_limit = opt.time_limit;
		hud.flashes = flashes;
		hud.draw(r, rules, car, position_of(me), field_size);
		sys_gl_end_frame();
	}
	sound.stop();
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
		result->quit = !result->finished && !result->arrested && !result->time_up;
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
