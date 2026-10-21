#include "game/car.h"

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>

#include "engine/collision.h"
#include "game/track.h"
#include "res/archive.h"
#include "xvga/inifile.h"

static const float UNITS = 10.0f;  /* game units per metre */
static const float GRAVITY = 9.81f;

static float vdyns(const std::vector<uint8_t> &d, int record, int offset)
{
	size_t p = (size_t)record * 616 + (size_t)offset;
	if (p + 4 > d.size())
		return 0;
	float f;
	std::memcpy(&f, &d[p], 4);
	return f;
}

std::string CarSpec::load(const std::string &dir, const std::string &section, int index, int motor, int gearbox,
	int tyres, int abs)
{
	IniFile cfg;
	std::string path = find_file_ci(dir, "CAR_CFG.INI");
	if (path.empty() || !cfg.load(path))
		return "cannot read CAR_CFG.INI";
	std::vector<std::string> f = split_fields(cfg.get(section, std::to_string(index)));
	if (f.size() < 9)
		return "CAR_CFG.INI [" + section + "] has no car " + std::to_string(index);
	name = f[0];
	animation = f[1];
	driver = f[2];
	sound = f[3];
	type = atoi(f[5].c_str());
	dynamics = atoi(f[7].c_str());
	for (const char *key : { "wheel_positions" }) {
		std::vector<std::string> w = split_fields(cfg.get(key, std::to_string(type)));
		if (w.size() >= 6) {
			for (int k = 0; k < 3; k++) {
				wheel_front[k] = (float)atof(w[k].c_str());
				wheel_rear[k] = (float)atof(w[3 + k].c_str());
			}
		}
	}
	std::vector<uint8_t> d;
	if (!read_file_ci(dir, "VDYNS.DAT", d) || d.size() < 616 * (size_t)(dynamics + 1))
		return "cannot read VDYNS.DAT";
	motor = std::clamp(motor, 0, 4);
	gearbox = std::clamp(gearbox, 0, 4);
	tyres = std::clamp(tyres, 0, 4);
	brake_force = abs > 0 ? 1.25f : 1;
	mass = vdyns(d, dynamics, 0x00);
	top_speed = vdyns(d, dynamics, 0x98 + 4 * motor);
	grip = vdyns(d, dynamics, 0xac + 4 * tyres);
	grip_shape = vdyns(d, dynamics, 0xc0 + 4 * tyres);
	gear_count = 0;
	for (int g = 0; g < 6; g++) {
		gears[g] = vdyns(d, dynamics, 0xd4 + gearbox * 0x18 + 4 * g);
		if (gears[g] > 0)
			gear_count = g + 1;
	}
	if (mass <= 0)
		mass = 600;
	if (top_speed <= 0)
		top_speed = 100;
	if (grip <= 0)
		grip = 0.7f;
	if (gear_count == 0) {
		gears[0] = 1;
		gear_count = 1;
	}
	return "";
}

int CarSpec::find(const std::string &dir, const std::string &section, const std::string &name)
{
	IniFile cfg;
	std::string path = find_file_ci(dir, "CAR_CFG.INI");
	if (path.empty() || !cfg.load(path))
		return -1;
	int count = cfg.get_int(section, "Count", 0);
	for (int i = 0; i < count; i++) {
		std::vector<std::string> f = split_fields(cfg.get(section, std::to_string(i)));
		if (!f.empty() && equal_ci(f[0], name))
			return i;
	}
	return -1;
}

void Car::place(const CollisionWorld &world, const Track &track, int c, float side)
{
	int n = (int)track.road.chunks.size();
	c = ((c % n) + n) % n;
	float a[3], b[3];
	track.road_centre(c, a);
	track.road_centre(c + 1, b);
	yaw = atan2f(b[0] - a[0], b[2] - a[2]);
	/* Right of the direction of travel: (cos yaw, 0, -sin yaw). */
	pos[0] = a[0] + cosf(yaw) * side;
	pos[2] = a[2] - sinf(yaw) * side;
	chunk = world.nearest_chunk(pos[0], pos[2], -1);
	GroundHit hit;
	pos[1] = world.ground(pos[0], pos[2], a[1] + 50, chunk, hit) ? hit.y : a[1];
	std::fill(vel, vel + 3, 0.0f);
	yaw_rate = steer = 0;
	gear = 1;
}

void Car::place_at(const CollisionWorld &world, const float p[3], float y)
{
	std::copy(p, p + 3, pos);
	yaw = y;
	chunk = world.nearest_chunk(pos[0], pos[2], chunk);
	GroundHit hit;
	if (world.ground(pos[0], pos[2], pos[1] + 20, chunk, hit))
		pos[1] = hit.y;
	std::fill(vel, vel + 3, 0.0f);
	std::fill(up, up + 3, 0.0f);
	up[1] = 1;
	yaw_rate = steer = 0;
	airborne = false;
	gear = 1;
}

void Car::axes(float right[3], float u[3], float forward[3]) const
{
	/* Heading on the ground plane, tilted to the ground's normal. */
	float f[3] = { sinf(yaw), 0, cosf(yaw) };
	float d = f[0] * up[0] + f[1] * up[1] + f[2] * up[2];
	for (int k = 0; k < 3; k++)
		forward[k] = f[k] - up[k] * d;
	float l = sqrtf(forward[0] * forward[0] + forward[1] * forward[1] + forward[2] * forward[2]);
	for (int k = 0; k < 3; k++) {
		forward[k] /= l > 0 ? l : 1;
		u[k] = up[k];
	}
	right[0] = u[1] * forward[2] - u[2] * forward[1];
	right[1] = u[2] * forward[0] - u[0] * forward[2];
	right[2] = u[0] * forward[1] - u[1] * forward[0];
}

float Car::speed_kmh() const
{
	return sqrtf(vel[0] * vel[0] + vel[2] * vel[2]) * 3.6f;
}

void Car::step(const CollisionWorld &world, const CarInput &in, float dt)
{
	const float m = spec.mass;
	const float a = fabsf(spec.wheel_front[2]) / UNITS, b = fabsf(spec.wheel_rear[2]) / UNITS;
	const float inertia = m * (a * a + b * b) * 0.5f;
	const float v_top = spec.top_speed / 3.6f;
	float fx = sinf(yaw), fz = cosf(yaw);   /* forward */
	float rx = cosf(yaw), rz = -sinf(yaw);  /* right */
	float vf = vel[0] * fx + vel[2] * fz;   /* forward speed */
	float vl = vel[0] * rx + vel[2] * rz;   /* sideways speed, to the right */
	float speed = sqrtf(vf * vf + vl * vl);

	/* Steering: less lock at speed, and the wheels turn at a finite rate. */
	float lock = 35.0f * 3.14159265f / 180 / (1 + speed / 18);
	float target = in.steer * lock;
	float rate = 3.0f * dt;
	steer += std::clamp(target - steer, -rate, rate);

	float grip = on_grass ? spec.grip * 1.1f : spec.grip * 1.3f;
	float load = m * GRAVITY;
	float fl = 0, rl = 0, drive = 0;
	if (!airborne) {
		/* Tyre side forces from the slip angles, saturating. */
		float vfa = std::max(fabsf(vf), 1.0f);
		float slip_f = atan2f(vl + a * yaw_rate, vfa) - steer * (vf >= 0 ? 1 : -1);
		float slip_r = atan2f(vl - b * yaw_rate, vfa);
		float shape = spec.grip_shape;
		fl = -grip * load * (b / (a + b)) * tanhf(shape * slip_f);
		rl = -grip * load * (a / (a + b)) * tanhf(shape * slip_r);
		if (in.brake > 0.5f && in.throttle > 0.5f)
			rl *= 0.5f; /* handbrake-like slide */

		/* Engine: full pull at low speed, none at the top speed. Brake, then reverse. */
		if (in.throttle > 0) {
			float frac = std::clamp(vf / v_top, 0.0f, 1.0f);
			drive += in.throttle * m * 4.5f * (1 - frac * frac);
		}
		if (in.brake > 0) {
			if (vf > 0.5f)
				drive -= in.brake * m * 9.0f * spec.brake_force;
			else if (vf > -25 / 3.6f && in.brake > 0.5f)
				drive -= in.brake * m * 3.0f;
		}
		/* Rolling resistance (more off the road) and air drag. */
		float roll = (on_grass ? 1.2f : 0.15f) * m;
		drive -= std::clamp(vf * 2, -1.0f, 1.0f) * roll;
		drive -= vf * fabsf(vf) * 0.3f;
	}

	if (in.hold && !airborne) {
		vf = vl = 0;
		yaw_rate = 0;
		drive = fl = rl = 0;
	}
	/* Integrate in the car's frame. */
	float af = drive / m + vl * yaw_rate;
	float al = (fl * cosf(steer) + rl) / m - vf * yaw_rate;
	vf += af * dt;
	vl += al * dt;
	if (!airborne) {
		float torque = a * fl * cosf(steer) - b * rl;
		yaw_rate += torque / inertia * dt;
		if (speed < 0.5f && fabsf(in.throttle) < 0.01f) {
			yaw_rate *= 0.8f;
			if (fabsf(vf) < 0.3f && in.brake < 0.01f)
				vf *= 0.9f;
		}
	}
	yaw += yaw_rate * dt;
	fx = sinf(yaw);
	fz = cosf(yaw);
	rx = cosf(yaw);
	rz = -sinf(yaw);
	vel[0] = fx * vf + rx * vl;
	vel[2] = fz * vf + rz * vl;
	pos[0] += vel[0] * UNITS * dt;
	pos[2] += vel[2] * UNITS * dt;

	/* Walls: a circle at the front and one at the back. */
	chunk = world.nearest_chunk(pos[0], pos[2], chunk);
	float half = std::max(spec.wheel_front[0], spec.wheel_rear[0]) + 2;
	touching_wall = false;
	for (float off : { a * UNITS, -b * UNITS }) {
		float cx = pos[0] + fx * off, cz = pos[2] + fz * off;
		float n[2];
		if (world.push_out(cx, cz, half, pos[1] + 4, pos[1] + 12, chunk, n)) {
			touching_wall = true;
			pos[0] = cx - fx * off;
			pos[2] = cz - fz * off;
			float nl = sqrtf(n[0] * n[0] + n[1] * n[1]);
			if (nl > 0) {
				n[0] /= nl;
				n[1] /= nl;
				float into = vel[0] * n[0] + vel[2] * n[1];
				if (into < 0) {
					/* Lose the speed into the wall; a real hit costs some along it too. */
					vel[0] -= n[0] * into * 1.3f;
					vel[2] -= n[1] * into * 1.3f;
					if (into < -2) {
						vel[0] *= 0.85f;
						vel[2] *= 0.85f;
						yaw_rate *= 0.5f;
					}
				}
			}
		}
	}

	/* The ground under the four wheels. */
	float fw = spec.wheel_front[2], rw = spec.wheel_rear[2];
	float hx = std::max(spec.wheel_front[0], 4.0f);
	const float pts[4][2] = { { -hx, fw }, { hx, fw }, { -hx, rw }, { hx, rw } };
	float h[4];
	int found = 0, grass = 0;
	/* A wheel steps up at most half a metre; more is a wall. */
	float top = pos[1] + 5;
	for (int i = 0; i < 4; i++) {
		float x = pos[0] + rx * pts[i][0] + fx * pts[i][1];
		float z = pos[2] + rz * pts[i][0] + fz * pts[i][1];
		GroundHit hit;
		if (world.ground(x, z, top, chunk, hit)) {
			h[i] = hit.y;
			found++;
			grass += hit.list != 0;
		}
		else {
			h[i] = pos[1] - 20;
		}
	}
	if (found == 0) {
		/* Off the world: back onto the road. */
		airborne = true;
		vel[1] -= GRAVITY * dt;
		pos[1] += vel[1] * UNITS * dt;
		return;
	}
	on_grass = grass * 2 > found;
	float ground_y = (h[0] + h[1] + h[2] + h[3]) / 4;
	if (pos[1] > ground_y + 1.5f) {
		airborne = true;
		vel[1] -= GRAVITY * dt;
		pos[1] += vel[1] * UNITS * dt;
		if (pos[1] <= ground_y) {
			pos[1] = ground_y;
			vel[1] = 0;
		}
	}
	else {
		airborne = false;
		/* Follow the ground; leaving a crest faster than gravity pulls means flying. */
		float climb = (ground_y - pos[1]) / UNITS / dt;
		vel[1] = climb;
		pos[1] = ground_y;
	}
	/* Tilt to the plane through the wheels. */
	float wx = (fabsf(pts[1][0] - pts[0][0]) > 0) ? ((h[1] + h[3]) - (h[0] + h[2])) / 2 / (2 * hx) : 0;
	float wz = (fw - rw) != 0 ? ((h[0] + h[1]) - (h[2] + h[3])) / 2 / (fw - rw) : 0;
	/* up = normalize(-wx * right - wz * forward + y) */
	float target_up[3] = { -wx * rx - wz * fx, 1, -wx * rz - wz * fz };
	float l = sqrtf(target_up[0] * target_up[0] + target_up[1] * target_up[1] + target_up[2] * target_up[2]);
	for (int k = 0; k < 3; k++)
		up[k] += (target_up[k] / l - up[k]) * std::min(1.0f, dt * 12);

	/* Wheels and the gearbox (for the sound and the dashboard later). */
	wheel_spin += vf * UNITS * dt / 3.5f;
	/* The top gear reaches 6500 rpm at the top speed; shift up at 6000, down at 3000. */
	auto rpm_in = [&](int g) {
		return fabsf(vf) / v_top * 6500 * spec.gears[g - 1] / spec.gears[spec.gear_count - 1];
	};
	if (gear < spec.gear_count && rpm_in(gear) > 6000)
		gear++;
	else if (gear > 1 && rpm_in(gear) < 3000)
		gear--;
	rpm = std::clamp(rpm_in(gear), 900.0f, 7000.0f);
}
