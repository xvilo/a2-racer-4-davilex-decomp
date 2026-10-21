#include "game/track.h"

#include <cstdlib>
#include <cstring>

#include "res/archive.h"
#include "xvga/inifile.h"

static std::string lower(std::string s)
{
	for (char &c : s)
		c = (char)tolower((unsigned char)c);
	return s;
}

/* The animations an anim ini defines ([config] lists their sections). */
static void read_animations(const std::string &dir, const std::string &file,
	std::map<std::string, std::vector<AnimFrame>> &out)
{
	IniFile ini;
	std::string path = find_file_ci(dir, file);
	if (path.empty() || !ini.load(path))
		return;
	int n = ini.get_int("config", "count");
	for (int i = 0; i < n; i++) {
		std::string name = ini.get("config", std::to_string(i));
		if (name.empty())
			continue;
		std::vector<AnimFrame> frames;
		int count = ini.get_int(name, "count");
		for (int k = 0; k < count; k++) {
			std::vector<std::string> f = split_fields(ini.get(name, std::to_string(k)));
			frames.push_back({ f.size() > 0 ? f[0] : "", f.size() > 1 ? f[1] : "" });
		}
		out[lower(name)] = std::move(frames);
	}
}

std::string Track::load(const std::string &dir, int stage, int league)
{
	IniFile raser;
	std::string path = find_file_ci(dir, "Raser.ini");
	if (path.empty() || !raser.load(path))
		return "cannot read Raser.ini";
	std::vector<std::string> f = split_fields(raser.get("MAPS", std::to_string(stage)));
	if (f.size() < 15)
		return "Raser.ini [MAPS] has no stage " + std::to_string(stage);
	info.city = atoi(f[0].c_str()) == 1;
	info.file = f[1];
	info.road_texture = f[2];
	info.grass_texture = f[3];
	info.grass2_texture = f[4];
	info.rail_texture = f[5];
	info.sky_lo = f[6];
	info.sky_hi = f[7];
	info.name = f[8];
	info.music = atoi(f[9].c_str());
	info.timer = atoi(f[10].c_str());
	for (int k = 0; k < 3; k++)
		info.ambient[k] = atoi(f[11 + k].c_str());
	info.mode = atoi(f[14].c_str());

	std::string err = road.load(dir, info.file);
	if (!err.empty())
		return err;

	animations.clear();
	read_animations(dir, raser.get("3D Anims", "general", "gen_anim.ini"), animations);
	read_animations(dir, raser.get("3D Anims", std::to_string(stage)), animations);
	read_animations(dir, raser.get("3D Anims", "league" + std::to_string(league)), animations);
	/* Most of the stage's objects have a one-frame animation in etappe<n>.ini [objects]:
	 * mesh path, texture path, name, type, animation, ... */
	IniFile stage_ini;
	std::string stage_path = find_file_ci(dir, info.file + ".ini");
	if (!stage_path.empty() && stage_ini.load(stage_path)) {
		auto base = [](const std::string &p) {
			size_t s = p.find_last_of("\\/");
			return s == std::string::npos ? p : p.substr(s + 1);
		};
		for (int i = 0, n = stage_ini.get_int("objects", "count"); i < n; i++) {
			std::vector<std::string> f = split_fields(stage_ini.get("objects", std::to_string(i)));
			if (f.size() > 4 && !animations.count(lower(f[4])))
				animations[lower(f[4])] = { { base(f[0]), base(f[1]) } };
		}
	}

	drive.clear();
	std::vector<uint8_t> dmp;
	if (read_file_ci(dir, info.file + ".dmp", dmp) && dmp.size() >= 4) {
		auto i32 = [&](size_t p) {
			return (int32_t)(dmp[p] | dmp[p + 1] << 8 | dmp[p + 2] << 16 | (uint32_t)dmp[p + 3] << 24);
		};
		int32_t n = i32(0);
		for (int32_t i = 0; i < n && 4 + (size_t)(i + 1) * 36 <= dmp.size(); i++) {
			size_t p = 4 + (size_t)i * 36;
			DriveNode d;
			d.flags = i32(p);
			d.trigger = i32(p + 4);
			for (int k = 0; k < 3; k++)
				std::memcpy(&d.pos[k], &dmp[p + 8 + 4 * k], 4);
			d.next = i32(p + 20);
			d.left = i32(p + 24);
			d.right = i32(p + 28);
			d.prev = i32(p + 32);
			drive.push_back(d);
		}
	}

	objects.clear();
	std::vector<uint8_t> omp;
	if (read_file_ci(dir, info.file + ".omp", omp) && omp.size() >= 4) {
		auto i32 = [&](size_t p) {
			return (int32_t)(omp[p] | omp[p + 1] << 8 | omp[p + 2] << 16 | (uint32_t)omp[p + 3] << 24);
		};
		auto f32 = [&](size_t p) {
			float v;
			std::memcpy(&v, &omp[p], 4);
			return v;
		};
		int32_t n = i32(0);
		for (int32_t i = 0; i < n && 4 + (size_t)(i + 1) * 68 <= omp.size(); i++) {
			size_t p = 4 + (size_t)i * 68;
			TrackObject o;
			o.chunk = i32(p);
			o.type = i32(p + 4);
			for (int k = 0; k < 3; k++) {
				o.pos[k] = f32(p + 8 + 4 * k);
				o.rot[k] = f32(p + 20 + 4 * k);
			}
			size_t len = 0;
			while (len < 32 && omp[p + 32 + len])
				len++;
			o.animation.assign((const char *)&omp[p + 32], len);
			o.flags = i32(p + 64);
			objects.push_back(o);
		}
	}
	return "";
}

const std::vector<AnimFrame> *Track::animation(const std::string &name) const
{
	auto it = animations.find(lower(name));
	return it == animations.end() ? nullptr : &it->second;
}

const Mesh *MeshCache::get(const std::string &name)
{
	std::string key = lower(name);
	auto it = meshes.find(key);
	if (it != meshes.end())
		return it->second.get();
	std::vector<uint8_t> bytes;
	std::unique_ptr<Mesh> m;
	if (rcs.read(key, bytes)) {
		m = std::make_unique<Mesh>();
		if (!m->load(bytes))
			m.reset();
	}
	const Mesh *r = m.get();
	meshes[key] = std::move(m);
	return r;
}

int Track::find_trigger(int trigger) const
{
	for (size_t i = 0; i < road.chunks.size(); i++) {
		if (road.chunks[i].a == trigger || road.chunks[i].b == trigger)
			return (int)i;
	}
	return -1;
}

void Track::road_centre(int chunk, float out[3]) const
{
	int n = (int)road.chunks.size();
	const RoadChunk &c = road.chunks[(size_t)(((chunk % n) + n) % n)];
	float sum[3] = {};
	int k = 0;
	for (const RoadQuad &q : c.lists[0]) {
		for (const RoadVertex &v : q.v) {
			sum[0] += v.x;
			sum[1] += v.y;
			sum[2] += v.z;
			k++;
		}
	}
	for (int i = 0; i < 3; i++)
		out[i] = k ? sum[i] / (float)k : c.pos[i];
}
