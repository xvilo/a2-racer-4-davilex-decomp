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
		if ((nx[0] - n.pos[0]) * fx + (nx[2] - n.pos[2]) * fz <= 0)
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
	float want = atan2f(tp[0] - car.pos[0], tp[2] - car.pos[2]);
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
