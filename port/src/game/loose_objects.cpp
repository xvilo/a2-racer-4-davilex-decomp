#include "game/loose_objects.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>

#include "engine/collision.h"
#include "engine/mesh.h"
#include "engine/render.h"
#include "engine/texture.h"
#include "game/car.h"
#include "game/track.h"
#include "platform/gl.h"
#include "res/archive.h"

namespace {

struct ScriptPhysics {
	float mass, friction, elasticity;
};

std::string lower(std::string s)
{
	for (char &c : s)
		c = (char)tolower((unsigned char)c);
	return s;
}

/* bonus.dso is compiled DaviScript. Each scripted object's OnInit_<animation> pushes its
 * InitPhysics arguments as double literals (the bytes 03 01 01 00 01 and the double) and
 * calls CScriptedObject's method 3 (3c 03 00). Only that much is read here. */
std::map<std::string, ScriptPhysics> read_scripted(const std::string &dir)
{
	std::map<std::string, ScriptPhysics> out;
	std::vector<uint8_t> d;
	if (!read_file_ci(dir, "Bonus.dso", d))
		return out;
	static const uint8_t lit[5] = { 0x03, 0x01, 0x01, 0x00, 0x01 };
	static const char init[] = "OnInit_";
	for (size_t i = 0; i + sizeof init < d.size(); i++) {
		if (memcmp(&d[i], init, sizeof init - 1) != 0)
			continue;
		size_t s = i + sizeof init - 1, e = s;
		while (e < d.size() && d[e])
			e++;
		std::string name = lower(std::string((const char *)&d[s], e - s));
		size_t end = e;
		while (end + 2 < d.size() && !(d[end] == 'O' && d[end + 1] == 'n' && isupper(d[end + 2])))
			end++;
		std::vector<float> vals;
		bool calls_init = false;
		for (size_t k = e; k + 13 <= end; k++) {
			if (memcmp(&d[k], lit, 5) == 0) {
				double v;
				memcpy(&v, &d[k + 5], 8);
				vals.push_back((float)v);
			}
			if (d[k] == 0x3c && d[k + 1] == 0x03 && d[k + 2] == 0x00)
				calls_init = true;
		}
		if (calls_init && vals.size() >= 3)
			out[name] = { vals[0], vals[1], vals[2] };
		i = e;
	}
	return out;
}

void rotate(float v[3], float deg, float x, float y, float z)
{
	float a = deg * 3.14159265f / 180, c = cosf(a), s = sinf(a), t = 1 - c;
	const float m[9] = { t * x * x + c, t * x * y + s * z, t * x * z - s * y, t * x * y - s * z, t * y * y + c,
		t * y * z + s * x, t * x * z + s * y, t * y * z - s * x, t * z * z + c };
	float r[3];
	for (int i = 0; i < 3; i++)
		r[i] = m[i] * v[0] + m[3 + i] * v[1] + m[6 + i] * v[2];
	for (int i = 0; i < 3; i++)
		v[i] = r[i];
}

}

void LooseObjects::build(const Track &track, MeshCache &meshes, TextureManager &textures, const std::string &dir)
{
	list.clear();
	index.clear();
	std::map<std::string, ScriptPhysics> scripted = read_scripted(dir);
	for (const TrackObject &o : track.objects) {
		LooseObject l;
		l.obj = &o;
		switch (o.type) {
		case 2: l.mass = 10, l.friction = 1, l.elasticity = 0.6f, l.sound = "PION_HIT_CAR"; break;
		case 3: l.mass = 50, l.friction = 0.9f, l.sound = "PAAL_HIT_CAR"; break;
		case 10: l.mass = 2000, l.friction = 1.4f; break;
		case 18: l.mass = 2000, l.friction = 0.9f, l.elasticity = 0, l.hinged = true; break;
		case 19: l.mass = 2000, l.friction = 0.9f; break;
		case 20: l.mass = 500, l.friction = 0.9f; break;
		case 21: l.mass = 400, l.friction = 0.9f; break;
		case 22: l.mass = 10, l.friction = 0.9f, l.sound = "PION_HIT_CAR"; break;
		case 29: {
			auto it = scripted.find(lower(o.animation));
			if (it == scripted.end())
				continue;
			l.mass = std::max(it->second.mass, 1.0f);
			l.friction = it->second.friction;
			l.elasticity = it->second.elasticity;
			break;
		}
		default: continue;
		}
		const std::vector<AnimFrame> *f = track.animation(o.animation);
		if (!f || f->empty() || !(l.mesh = meshes.get((*f)[0].mesh)))
			continue;
		l.tex = textures.get((*f)[0].texture);
		/* The footprint, turned as placed, and the height. */
		float r2 = 0;
		for (const MeshVertex &v : l.mesh->vertices) {
			float p[3] = { v.x, v.y, v.z };
			rotate(p, o.rot[2], 0, 0, 1);
			rotate(p, o.rot[0], 1, 0, 0);
			r2 = std::max(r2, p[0] * p[0] + p[2] * p[2]);
			l.height = std::max(l.height, p[1]);
		}
		/* A circle round a long thing (a fence) reaches past it: take a little less. */
		l.radius = std::max(2.0f, sqrtf(r2) * 0.8f);
		for (int k = 0; k < 3; k++)
			l.pos[k] = o.pos[k];
		l.chunk = o.chunk;
		index[&o] = list.size();
		list.push_back(l);
	}
}

float LooseObjects::hit(Car &car, LooseObject *&which)
{
	which = nullptr;
	float hardest = 0;
	float fx = sinf(car.yaw), fz = cosf(car.yaw);
	float fa = fabsf(car.spec.wheel_front[2]), ra = fabsf(car.spec.wheel_rear[2]);
	const float circles[2][2] = { { car.pos[0] + fx * fa, car.pos[2] + fz * fa },
		{ car.pos[0] - fx * ra, car.pos[2] - fz * ra } };
	float cr = std::max(car.spec.wheel_front[0], car.spec.wheel_rear[0]) + 3.5f;
	for (LooseObject &l : list) {
		/* Lying down, it is driven over. */
		if (l.tilt > 60 || l.pos[1] + l.height < car.pos[1] || l.pos[1] > car.pos[1] + 15)
			continue;
		float dx0 = l.pos[0] - car.pos[0], dz0 = l.pos[2] - car.pos[2];
		float reach = l.radius + cr + fa + ra;
		if (dx0 * dx0 + dz0 * dz0 > reach * reach)
			continue;
		for (const auto &c : circles) {
			float dx = l.pos[0] - c[0], dz = l.pos[2] - c[1], d2 = dx * dx + dz * dz, r = l.radius + cr;
			if (d2 >= r * r || d2 < 1e-6f)
				continue;
			float d = sqrtf(d2), nx = dx / d, nz = dz / d;
			/* The light ones are pushed away; the car is pushed off the heavy ones. */
			float share = l.hinged ? 0 : car.spec.mass / (car.spec.mass + l.mass);
			l.pos[0] += nx * (r - d) * share;
			l.pos[2] += nz * (r - d) * share;
			car.pos[0] -= nx * (r - d) * (1 - share);
			car.pos[2] -= nz * (r - d) * (1 - share);
			float rel = (l.vel[0] - car.vel[0]) * nx + (l.vel[2] - car.vel[2]) * nz;
			if (rel >= 0)
				break;
			/* A lamp post gives way as it bends over: a lighter body against the car. */
			float m = l.hinged ? 300 : l.mass;
			float j = -(1 + l.elasticity) * rel / (1 / car.spec.mass + 1 / m);
			car.vel[0] -= j / car.spec.mass * nx;
			car.vel[2] -= j / car.spec.mass * nz;
			float dv = j / m;
			if (!l.hinged) {
				l.vel[0] += dv * nx;
				l.vel[2] += dv * nz;
				l.vel[1] += std::min(dv * 0.3f, 8.0f);
				/* Struck off its middle, it turns. */
				float side = (car.vel[0] * nz - car.vel[2] * nx) >= 0 ? 1.0f : -1.0f;
				l.spin += side * std::min(dv * 40, 720.0f);
			}
			/* Taller than wide and knocked hard enough, it topples away from the knock. */
			if (l.hinged ? -rel > 4 : l.height > l.radius * 1.2f && dv > 1) {
				l.tilt_axis[0] = nz;
				l.tilt_axis[1] = -nx;
				l.tilt_rate = std::max(l.tilt_rate, std::min(dv * 30, 400.0f) + (l.hinged ? 40 : 0));
			}
			l.moving = true;
			if (-rel > hardest) {
				hardest = -rel;
				which = &l;
			}
			break;
		}
	}
	return hardest;
}

void LooseObjects::update(float dt, const CollisionWorld &world)
{
	const float g = 9.81f;
	for (LooseObject &l : list) {
		if (!l.moving)
			continue;
		if (l.tilt_rate > 0) {
			/* Falling over gathers speed until it lies. */
			l.tilt_rate += 300 * dt;
			l.tilt += l.tilt_rate * dt;
			if (l.tilt >= 90) {
				l.tilt = 90;
				l.tilt_rate = 0;
			}
		}
		if (!l.hinged) {
			l.vel[1] -= g * dt;
			for (int k = 0; k < 3; k++)
				l.pos[k] += l.vel[k] * 10 * dt;
			l.chunk = world.nearest_chunk(l.pos[0], l.pos[2], l.chunk);
			GroundHit gh;
			bool on_ground = false;
			if (world.ground(l.pos[0], l.pos[2], l.pos[1] + 20, l.chunk, gh) && l.pos[1] <= gh.y) {
				l.pos[1] = gh.y;
				l.vel[1] = l.vel[1] < -2 ? -l.vel[1] * l.elasticity : 0;
				on_ground = true;
			}
			float n[2];
			if (world.push_out(l.pos[0], l.pos[2], l.radius, l.pos[1] + 1, l.pos[1] + l.height, l.chunk, n)) {
				float nl = sqrtf(n[0] * n[0] + n[1] * n[1]);
				if (nl > 0) {
					float vn = (l.vel[0] * n[0] + l.vel[2] * n[1]) / nl;
					if (vn < 0) {
						l.vel[0] -= (1 + l.elasticity) * vn * n[0] / nl;
						l.vel[2] -= (1 + l.elasticity) * vn * n[1] / nl;
					}
				}
			}
			if (on_ground) {
				float sp = sqrtf(l.vel[0] * l.vel[0] + l.vel[2] * l.vel[2]);
				float stop = std::max(l.friction, 0.3f) * g * dt;
				float k = sp > stop ? (sp - stop) / sp : 0;
				l.vel[0] *= k;
				l.vel[2] *= k;
				l.spin *= std::max(0.0f, 1 - 3 * dt);
			}
			l.yaw += l.spin * dt;
			if (on_ground && l.vel[1] == 0 && fabsf(l.vel[0]) + fabsf(l.vel[2]) < 0.05f && fabsf(l.spin) < 5 &&
				l.tilt_rate == 0)
				l.moving = false, l.spin = 0, l.burst = false;
		}
		else if (l.tilt_rate == 0)
			l.moving = false, l.burst = false;
	}
}

void LooseObjects::draw(Renderer &r, int chunk, int n, int range) const
{
	for (const LooseObject &l : list) {
		int d = ((l.chunk - chunk) % n + n) % n;
		if (d > range && d < n - range)
			continue;
		glPushMatrix();
		glTranslatef(l.pos[0], l.pos[1], l.pos[2]);
		if (l.tilt > 0)
			gl_rotate(l.tilt, l.tilt_axis[0], 0, l.tilt_axis[1]);
		gl_rotate(l.obj->rot[1] + l.yaw, 0, 1, 0);
		gl_rotate(l.obj->rot[0], 1, 0, 0);
		gl_rotate(l.obj->rot[2], 0, 0, 1);
		r.draw_mesh(*l.mesh, l.tex);
		glPopMatrix();
	}
}
