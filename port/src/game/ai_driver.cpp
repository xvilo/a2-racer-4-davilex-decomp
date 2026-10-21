#include "game/ai_driver.h"

#include <algorithm>
#include <cmath>
#include <cstring>

#include "game/track.h"

static const float PI = 3.14159265f;

float skill_factor(const char *w)
{
	if (!strcmp(w, "NOVICE"))
		return 0.86f;
	if (!strcmp(w, "SKILLED"))
		return 0.98f;
	return 0.93f;
}

void AiDriver::find_lane(const Track &track, const Car &car)
{
	float fx = sinf(car.yaw), fz = cosf(car.yaw);
	float best = 1e30f;
	node = -1;
	for (size_t i = 0; i < track.drive.size(); i++) {
		const DriveNode &n = track.drive[i];
		if (n.next < 0 || n.next >= (int)track.drive.size())
			continue;
		const float *nx = track.drive[(size_t)n.next].pos;
		if (race_lanes && i < race_lanes->size()) {
			if (!(*race_lanes)[i])
				continue;
		}
		else if ((nx[0] - n.pos[0]) * fx + (nx[2] - n.pos[2]) * fz <= 0)
			continue;
		float dx = n.pos[0] - car.pos[0], dz = n.pos[2] - car.pos[2];
		/* Prefer nodes ahead of the car. */
		float d = dx * dx + dz * dz + (dx * fx + dz * fz < 0 ? 4000 : 0);
		if (d < best) {
			best = d;
			node = (int)i;
		}
	}
}

bool AiDriver::avoid(const Car &car, float aim[2], bool &close) const
{
	close = false;
	if (!obstacles)
		return false;
	float fx = aim[0] - car.pos[0], fz = aim[1] - car.pos[2];
	float len = sqrtf(fx * fx + fz * fz);
	if (len < 1)
		return false;
	fx /= len;
	fz /= len;
	/* Look as far as it gets in some 1.5 s, at least past the point aimed at; sx, sz: to
	 * the right. */
	float reach = std::max(len + 40, 100 + car.speed_kmh() / 3.6f * 15), sx = fz, sz = -fx;
	float half = std::max(car.spec.wheel_front[0], car.spec.wheel_rear[0]) + 3.5f + 6;
	float nearest = reach, far_end = 0, shift = 0;
	for (const AiObstacle &o : *obstacles) {
		float ox = o.x - car.pos[0], oz = o.z - car.pos[2];
		float r = o.hx + o.hz;
		float along = ox * fx + oz * fz;
		if (along + r < 0 || along - r > reach)
			continue;
		/* The box's corners in the car's way: along it and across it. */
		float cy = cosf(o.yaw), sy = sinf(o.yaw);
		float a0 = 1e9f, a1 = -1e9f, l0 = 1e9f, l1 = -1e9f;
		for (int k = 0; k < 4; k++) {
			float lx = (k & 1 ? 1 : -1) * o.hx, lz = (k & 2 ? 1 : -1) * o.hz;
			float wx = ox + lx * cy + lz * sy, wz = oz - lx * sy + lz * cy;
			float a = wx * fx + wz * fz, l = wx * sx + wz * sz;
			a0 = std::min(a0, a), a1 = std::max(a1, a);
			l0 = std::min(l0, l), l1 = std::max(l1, l);
		}
		if (a1 < 0 || a0 > reach || l1 < -half || l0 > half || a0 >= nearest)
			continue;
		/* Past it on the side needing the smaller turn. */
		float right = l1 + half, left = l0 - half;
		nearest = std::max(a0, 0.0f);
		far_end = a1;
		shift = fabsf(right) < fabsf(left) ? right : left;
	}
	if (nearest >= reach)
		return false;
	close = nearest < 150;
	/* Towards its near end, then alongside it to beyond the far one. */
	float at = nearest > 30 ? nearest : far_end + 20;
	aim[0] = car.pos[0] + fx * at + sx * shift;
	aim[1] = car.pos[2] + fz * at + sz * shift;
	return true;
}

CarInput AiDriver::drive(const Track &track, const Car &car, float dt)
{
	CarInput in;
	const auto &dn = track.drive;
	if (node < 0 || node >= (int)dn.size())
		find_lane(track, car);
	if (node < 0)
		return in;
	/* Move on along the lane once a node is beside or behind the car. */
	float fx = sinf(car.yaw), fz = cosf(car.yaw);
	for (int k = 0; k < 8; k++) {
		const float *p = dn[(size_t)node].pos;
		float dx = p[0] - car.pos[0], dz = p[2] - car.pos[2];
		if (dx * fx + dz * fz > 20 || dn[(size_t)node].next < 0)
			break;
		node = dn[(size_t)node].next;
	}
	/* Lost the lane (pushed off it): find one again. */
	{
		const float *p = dn[(size_t)node].pos;
		float dx = p[0] - car.pos[0], dz = p[2] - car.pos[2];
		if (dx * dx + dz * dz > 250 * 250)
			find_lane(track, car);
	}
	/* Aim further ahead the faster it goes. */
	float speed = car.speed_kmh() / 3.6f;
	int ahead = 1 + (int)(speed / 12);
	int t = node;
	for (int k = 0; k < ahead && dn[(size_t)t].next >= 0; k++)
		t = dn[(size_t)t].next;
	const float *tp = dn[(size_t)t].pos;
	float aim[2] = { tp[0], tp[2] };
	bool close;
	bool swerve = avoid(car, aim, close);
	float want = atan2f(aim[0] - car.pos[0], aim[1] - car.pos[2]);
	float d = remainderf(want - car.yaw, 2 * PI);
	in.steer = std::clamp(d * 2.5f, -1.0f, 1.0f);

	/* The bend ahead: how much the lane turns over the next stretch. */
	float turn = 0;
	int a = node;
	for (int k = 0; k < 10; k++) {
		int b = dn[(size_t)a].next;
		if (b < 0)
			break;
		int c = dn[(size_t)b].next;
		if (c < 0)
			break;
		const float *pa = dn[(size_t)a].pos, *pb = dn[(size_t)b].pos, *pc = dn[(size_t)c].pos;
		float h1 = atan2f(pb[0] - pa[0], pb[2] - pa[2]), h2 = atan2f(pc[0] - pb[0], pc[2] - pb[2]);
		turn += fabsf(remainderf(h2 - h1, 2 * PI));
		a = b;
	}
	float v_top = car.spec.top_speed / 3.6f * fabsf(skill);
	float v_bend = 10 + 30 / (1 + turn * 2.5f);
	float target = std::min(v_top, v_bend);
	if (swerve && close)
		target = std::min(target, 15.0f);
	in.throttle = speed < target ? 1.0f : 0.0f;
	in.brake = speed > target + 3 ? 1.0f : 0.0f;

	/* Stuck: back out, steering the other way. */
	if (speed < 1)
		stuck += dt;
	else if (reverse <= 0)
		stuck = 0;
	if (stuck > 1.5f && reverse <= 0)
		reverse = 1.2f;
	if (reverse > 0) {
		reverse -= dt;
		in.throttle = 0;
		in.brake = 1;
		in.steer = -in.steer;
		if (reverse <= 0) {
			stuck = 0;
			find_lane(track, car);
		}
	}
	return in;
}

CarInput AiDriver::chase(const Track &track, const Car &car, const Car &target, float dt)
{
	float dx = target.pos[0] - car.pos[0], dz = target.pos[2] - car.pos[2];
	float dist = sqrtf(dx * dx + dz * dz);
	/* Far away: follow the lanes to catch up, like a racer. */
	if (dist > 400) {
		CarInput in = drive(track, car, dt);
		in.throttle = 1;
		in.brake = 0;
		return in;
	}
	CarInput in;
	float lead = std::min(dist / 300.0f, 1.0f) * 0.8f;
	float tx = target.pos[0] + target.vel[0] * 10 * lead, tz = target.pos[2] + target.vel[2] * 10 * lead;
	float want = atan2f(tx - car.pos[0], tz - car.pos[2]);
	float d = remainderf(want - car.yaw, 2 * PI);
	in.steer = std::clamp(d * 2.5f, -1.0f, 1.0f);
	float speed = car.speed_kmh(), their = target.speed_kmh();
	/* Behind it: faster than it; alongside: a bit faster, to push in. */
	float aim = dist > 60 ? car.spec.top_speed : their + 12;
	in.throttle = speed < aim && fabsf(d) < 1.2f ? 1.0f : 0.0f;
	in.brake = fabsf(d) > 1.6f && speed > 40 ? 1.0f : 0.0f;
	if (speed < 1)
		stuck += dt;
	else if (reverse <= 0)
		stuck = 0;
	if (stuck > 1.5f && reverse <= 0)
		reverse = 1.0f;
	if (reverse > 0) {
		reverse -= dt;
		in.throttle = 0;
		in.brake = 1;
		in.steer = -in.steer;
		if (reverse <= 0)
			stuck = 0;
	}
	return in;
}
