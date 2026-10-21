#include "race/effects.h"

#include <algorithm>
#include <cmath>

#include "engine/mesh.h"
#include "engine/render.h"
#include "platform/gl.h"

float Effects::random(float lo, float hi)
{
	rnd = rnd * 1103515245u + 12345u;
	return lo + (hi - lo) * (float)((rnd >> 16) & 0x7fff) / 32767.0f;
}

/* 0x45f6f0: offsets rand(-1, 1) across, speeds rand(-15, 15) times them across and
 * rand(2, 5) up (game units/s; the port takes them as metres a second), life rand(0, 1). */
void Effects::sparks(const float p[3])
{
	if (!particles)
		return;
	for (int k = 0; k < 5; k++) {
		Spark s;
		float ox = random(-1, 1), oz = random(-1, 1);
		s.p[0] = p[0] + ox;
		s.p[1] = p[1];
		s.p[2] = p[2] + oz;
		s.v[0] = random(-15 * fabsf(ox), 15 * fabsf(ox)) * 10;
		s.v[1] = random(2, 5) * 10;
		s.v[2] = random(-15 * fabsf(oz), 15 * fabsf(oz)) * 10;
		s.age = 0;
		s.life = random(0.2f, 1);
		spark_list.push_back(s);
	}
}

/* 0x459de0: 1 + impulse / 2000 pieces, out along the knock's heading +-35 degrees, 20..40
 * up; gravity 100, they bounce (x -0.8) on the ground and slow down; life 0.5..1 s. */
void Effects::car_bits(const float p[3], float dir, float impulse, float ground_y)
{
	if (!particles || bits.empty())
		return;
	const Mesh *mesh = bits[(size_t)random(0, (float)bits.size() - 0.01f)];
	int n = std::min(1 + (int)(0.0005f * impulse), 12);
	for (int k = 0; k < n; k++) {
		Bit b;
		float a = dir + random(-35, 35) * 3.14159265f / 180;
		float sp = 15 + random(-15, 15);
		b.p[0] = p[0];
		b.p[1] = p[1];
		b.p[2] = p[2];
		b.v[0] = sinf(a) * sp * 4;
		b.v[1] = 20 + random(0, 20);
		b.v[2] = cosf(a) * sp * 4;
		b.rot[0] = random(0, 360);
		b.rot[1] = random(0, 360);
		b.rot[2] = random(0, 360);
		b.spin = random(0, 10) * 36;
		b.age = 0;
		b.life = random(0.5f, 1);
		b.ground = ground_y;
		b.mesh = mesh;
		bit_list.push_back(b);
	}
}

void Effects::smoke(const float p[3], const float vel[3], bool damage)
{
	if (!clouds)
		return;
	if (puffs.size() >= 140)
		puffs.erase(puffs.begin());
	Puff f;
	for (int a = 0; a < 3; a++)
		f.p[a] = p[a];
	/* The car's speed in m/s, and a little up (15 dt). */
	f.v[0] = vel[0];
	f.v[1] = 15.0f / 60;
	f.v[2] = vel[2];
	f.age = 0;
	f.life = damage ? 6 : 4;
	f.size = 3;
	f.grow = damage ? 47 : 33;
	f.damage = damage;
	puffs.push_back(f);
}

void Effects::skid(int id, const float p[3], const float across[3], int level, float time)
{
	if (!skidmarks)
		return;
	Mark *m = nullptr;
	for (Mark &k : marks)
		if (k.id == id && k.open)
			m = &k;
	if (level <= 3) {
		if (m)
			m->open = false;
		return;
	}
	if (m && m->left.size() >= 49 * 3)
		m->open = false, m = nullptr;
	if (!m) {
		if (marks.size() >= 20)
			marks.erase(marks.begin());
		marks.push_back(Mark());
		m = &marks.back();
		m->id = id;
		m->open = true;
		m->born = time;
		m->alpha = std::clamp(200 - 16 * (level - 4), 0, 255);
	}
	for (int a = 0; a < 3; a++) {
		m->left.push_back(p[a] - across[a] * 2);
		m->right.push_back(p[a] + across[a] * 2);
	}
}

namespace {

enum Landing { FLY, SETTLE, BOUNCE, SPRAY, VANISH };

/* Per system, from the constructors and the particles' updates. A burst has base - 307.69
 * dt pieces; each starts at rand(-spread, spread) across the ground, flies out at that
 * offset times out and rand(up) upwards, lives rand(life) seconds, falls with gravity and
 * tumbles rand(tumble) radians a frame. The emitter itself moves off at 11 game units/s,
 * slowing by carry_stop a second (MAIL: x 0.99 a frame). */
struct SceneryKind {
	int base;
	float spread, out, up_lo, up_hi, life_lo, life_hi, gravity, tumble_lo, tumble_hi;
	Landing landing;
	float carry_stop;
};

const SceneryKind scenery_kinds[Effects::SCENERY_KINDS] = {
	/* 0x45bfe0 */ { 40, 5, 2, 7.5f, 10, 4, 8, 9.81f, -0.1f, 0.5f, SETTLE, 100 },
	/* 0x458f50 */ { 35, 20, 4, 20, 30, 4, 8, 0, 0, 0, FLY, 0 },
	/* 0x45c9c0 */ { 40, 5, 1, 20, 30, 4, 8, 20, -0.05f, 0.25f, SETTLE, -1 },
	/* 0x460bb0 */ { 35, 5, 1, 70, 100, 4, 8, 150, -0.05f, 0.25f, BOUNCE, 50 },
	/* 0x45ef00 */ { 35, 5, 4, 20, 30, 4, 8, 9.81f, -0.05f, 0.25f, SETTLE, 150 },
	/* 0x45a1d0 */ { 15, 0.7f, 0, 1, 2, 3, 4, 0, 0, 0, SPRAY, 50 },
	/* 0x45a9f0 */ { 15, 2.7f, 4, 0, 0, 2, 8, 150, -0.05f, 0.25f, BOUNCE, 150 },
	/* 0x461570 */ { 20, 0.7f, 0, 1, 2, 1, 2, 0, 0, 0, SPRAY, 50 },
	/* 0x461dc0 */ { 25, 3.7f, 1.8f, 10, 25, 0.5f, 1.5f, 150, 0, 0, VANISH, 50 },
};

}

void Effects::scenery(Scenery kind, const float p[3], const float dir[3], float speed, float dt)
{
	if (!particles || scenery_meshes[kind].empty())
		return;
	const SceneryKind &k = scenery_kinds[kind];
	bool stream = kind == MUD || kind == MUD_BITS || kind == WATER || kind == WATER_DROPS;
	int n;
	if (stream) {
		owed[kind] += std::max(0.0f, (float)k.base - 307.69f / 30) * 30 * dt;
		n = (int)owed[kind];
		owed[kind] -= (float)n;
	}
	else
		n = std::max(0, (int)((float)k.base - std::min(dt, 0.1f) * 307.69f));
	for (int i = 0; i < n; i++) {
		if (pieces.size() >= 4000)
			pieces.erase(pieces.begin());
		Piece q;
		q.kind = kind;
		float ox = random(-k.spread, k.spread), oz = random(-k.spread, k.spread);
		q.p[0] = p[0] + ox;
		q.p[1] = p[1] + 0.12f;
		q.p[2] = p[2] + oz;
		q.v[0] = ox * k.out;
		q.v[1] = kind == MUD_BITS ? 0.4f * speed * 10 * random(0.5f, 1) : random(k.up_lo, k.up_hi);
		q.v[2] = oz * k.out;
		if (k.landing == SPRAY)
			q.p[1] += random(k.up_lo, k.up_hi) - k.up_lo, q.v[1] = 0;
		for (int a = 0; a < 3; a++) {
			q.carry[a] = dir[a] * 11;
			q.rot[a] = random(0, 6.2832f);
			q.scale[a] = 1;
		}
		if (k.landing == SPRAY) {
			/* 0x45a680: stretched along the way by the car's speed, each frame anew. */
			q.rot[0] = q.rot[2] = 0;
			q.rot[1] = atan2f(dir[0], dir[2]);
			bool water = kind == WATER;
			q.scale[0] = std::max(0.1f, random(water ? 0.03f : 0.02f, water ? 0.05f : 0.04f) * speed);
			q.scale[2] = std::max(0.1f, random(water ? 0.14f : 0.25f, water ? 0.18f : 0.29f) * speed);
		}
		q.age = 0;
		q.life = random(k.life_lo, k.life_hi);
		q.ground = p[1];
		q.flap = random(0, 0.025f);
		q.frame = (int)random(0, (float)scenery_meshes[kind].size() - 0.01f);
		q.flap_down = random(0, 1) < 0.5f;
		q.settled = false;
		pieces.push_back(q);
	}
}

void Effects::update(float dt, float time)
{
	/* The original stepped its particles once a frame at some 30 frames a second. */
	const float frames = dt * 30;
	for (Piece &q : pieces) {
		const SceneryKind &k = scenery_kinds[q.kind];
		q.age += dt;
		float c = sqrtf(q.carry[0] * q.carry[0] + q.carry[2] * q.carry[2]);
		float keep = k.carry_stop < 0 ? powf(0.99f, frames) : c > 0 ? std::max(0.0f, c - k.carry_stop * dt) / c : 0;
		for (float &v : q.carry)
			v *= keep;
		for (int a = 0; a < 3; a++)
			q.p[a] += q.carry[a] * dt;
		if (q.kind == BIRDS) {
			/* 0x4594a0: the wings beat through the frames and back, a frame each 25 ms. */
			q.flap += dt;
			if (q.flap > 0.025f) {
				int last = (int)scenery_meshes[BIRDS].size() - 1;
				if (!q.flap_down && q.frame >= last)
					q.flap_down = true;
				else if (q.flap_down && q.frame <= 0)
					q.flap_down = false;
				q.frame = std::clamp(q.frame + (q.flap_down ? -1 : 1), 0, last);
				q.flap = 0;
			}
		}
		if (q.settled || k.landing == SPRAY)
			continue;
		q.v[1] -= k.gravity * dt;
		for (int a = 0; a < 3; a++)
			q.p[a] += q.v[a] * dt;
		if (k.landing != FLY && q.p[1] <= q.ground + 0.11f && q.v[1] <= 0) {
			if (k.landing == VANISH) {
				q.age = q.life;
				continue;
			}
			/* 0x461150: a bounce while still falling fast, then it lies flat. */
			if (k.landing == BOUNCE && q.v[1] < -3) {
				q.p[1] = q.ground + 0.12f;
				q.v[1] *= -random(0.5f, 0.9f);
				q.v[0] *= 0.5f;
				q.v[2] *= 0.5f;
			}
			else {
				q.p[1] = q.ground + 0.1f;
				q.rot[0] = q.rot[2] = 0;
				q.settled = true;
				continue;
			}
		}
		for (float &r : q.rot)
			r += random(k.tumble_lo, k.tumble_hi) * frames;
	}
	pieces.erase(std::remove_if(pieces.begin(), pieces.end(), [](const Piece &q) { return q.age >= q.life; }),
		pieces.end());
	for (Spark &s : spark_list) {
		s.v[1] -= 100 * dt;
		for (int a = 0; a < 3; a++)
			s.p[a] += s.v[a] * dt;
		s.age += dt;
	}
	spark_list.erase(std::remove_if(spark_list.begin(), spark_list.end(), [](const Spark &s) { return s.age >= s.life; }),
		spark_list.end());
	for (Bit &b : bit_list) {
		b.v[1] -= 100 * dt;
		for (int a = 0; a < 3; a++) {
			b.p[a] += b.v[a] * dt;
			if (a != 1)
				b.v[a] -= b.v[a] * dt;
		}
		if (b.p[1] < b.ground && b.v[1] < 0) {
			b.p[1] = b.ground;
			b.v[1] *= -0.8f;
		}
		b.rot[0] += b.spin * dt;
		b.rot[2] += b.spin * dt * 0.7f;
		b.age += dt;
	}
	bit_list.erase(std::remove_if(bit_list.begin(), bit_list.end(), [](const Bit &b) { return b.age >= b.life; }),
		bit_list.end());
	/* The puffs drift (p += v dt 10: m/s to game units) and stop soon (v *= min(0.99,
	 * 15 dt) a frame, 20 dt for a wreck's), growing where they are. */
	for (Puff &f : puffs) {
		for (int a = 0; a < 3; a++)
			f.p[a] += f.v[a] * dt * 10;
		float k = std::min(0.99f, (f.damage ? 20.0f : 15.0f) * dt);
		for (float &v : f.v)
			v *= k;
		f.size += f.grow / f.life * dt;
		f.age += dt;
	}
	puffs.erase(std::remove_if(puffs.begin(), puffs.end(), [](const Puff &f) { return f.age >= f.life; }), puffs.end());
	/* Skid marks last about 20 s. */
	marks.erase(std::remove_if(marks.begin(), marks.end(), [&](const Mark &m) { return !m.open && time - m.born > 20; }),
		marks.end());
}

void Effects::draw(Renderer &r, const float cr[3], const float cu[3], float time) const
{
	/* Flat things seen from either side. */
	glDisable(GL_CULL_FACE);
	glDepthMask(GL_FALSE);
	glEnable(GL_BLEND);
	glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

	/* Skid marks: darker the harder the slide (the original blends them inverted). */
	r.bind(sfx_tex);
	glDisable(GL_ALPHA_TEST); /* bind's colour-key test would drop the see-through */
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	for (const Mark &m : marks) {
		float fade = fade_skidmarks ? std::clamp(1 - (time - m.born) / 20, 0.0f, 1.0f) : 1;
		float a = (1 - (float)m.alpha / 255.0f) * fade;
		glColor4f(0.25f, 0.25f, 0.25f, a);
		glBegin(GL_TRIANGLE_STRIP);
		for (size_t i = 0; i + 2 < m.left.size(); i += 3) {
			glTexCoord2f(0.453125f, 0.15625f);
			glVertex3f(m.left[i], m.left[i + 1] + 0.3f, m.left[i + 2]);
			glTexCoord2f(0.539063f, 0.15625f);
			glVertex3f(m.right[i], m.right[i + 1] + 0.3f, m.right[i + 2]);
		}
		glEnd();
	}

	/* Sparks: a red and yellow head with a dark tail fading out. */
	glDisable(GL_TEXTURE_2D);
	glBegin(GL_TRIANGLES);
	for (const Spark &s : spark_list) {
		float a = s.age < s.life / 2 ? 1 : 1 - (s.age - s.life / 2) / (s.life / 2);
		glColor4f(1, 0, 0, 1);
		glVertex3f(s.p[0], s.p[1], s.p[2]);
		glColor4f(1, 1, 0, 1);
		glVertex3f(s.p[0] + 0.5f, s.p[1], s.p[2]);
		glColor4f(0, 0, 0, a);
		glVertex3f(s.p[0] - s.v[0] * 0.025f, s.p[1] - s.v[1] * 0.025f + 0.25f, s.p[2] - s.v[2] * 0.025f);
	}
	glEnd();
	glEnable(GL_TEXTURE_2D);

	/* Smoke: puffs facing the camera, a bright middle fading out to the edges; tyre smoke
	 * adds light (SRCALPHA, ONE), a wreck's covers. Farthest first would be right; the
	 * port draws them in the order made. */
	for (int pass = 0; pass < 2; pass++) {
		bool damage = pass == 1;
		r.bind(damage ? smoke_tex : sfx_tex);
		glDisable(GL_ALPHA_TEST);
		glBlendFunc(GL_SRC_ALPHA, damage ? GL_ONE_MINUS_SRC_ALPHA : GL_ONE);
		const float u0 = damage ? 0.5f : 0.008f, u1 = damage ? 0.5898f : 0.3954f;
		const float v0 = damage ? 0.1465f : 0.008f, v1 = damage ? 0.2344f : 0.3268f;
		const float mid[2] = { damage ? 0.5449f : 0.1997f, damage ? 0.1904f : 0.1634f };
		for (const Puff &f : puffs) {
			if (f.damage != damage)
				continue;
			float fade = 1 - f.age / f.life;
			float h = f.size / 2;
			float corner[4][3];
			const float sx[4] = { -1, -1, 1, 1 }, sy[4] = { -1, 1, 1, -1 };
			for (int c = 0; c < 4; c++)
				for (int a = 0; a < 3; a++)
					corner[c][a] = f.p[a] + (cr[a] * sx[c] + cu[a] * sy[c]) * h;
			const float cu_[4] = { u0, u0, u1, u1 }, cv_[4] = { v1, v0, v0, v1 };
			glBegin(GL_TRIANGLE_FAN);
			if (damage)
				glColor4f(0.67f, 0.67f, 0.67f, 0.5f * fade);
			else
				glColor4f(0.63f, 0.63f, 0.78f, 0.5f * fade);
			glTexCoord2f(mid[0], mid[1]);
			glVertex3f(f.p[0], f.p[1], f.p[2]);
			for (int c = 0; c <= 4; c++) {
				if (damage)
					glColor4f(0.2f, 0.2f, 0.2f, 0);
				else
					glColor4f(0.39f, 0.39f, 0.39f, 0.06f * fade);
				glTexCoord2f(cu_[c % 4], cv_[c % 4]);
				glVertex3f(corner[c % 4][0], corner[c % 4][1], corner[c % 4][2]);
			}
			glEnd();
		}
	}
	glColor4f(1, 1, 1, 1);
	glDisable(GL_BLEND);
	glDepthMask(GL_TRUE);

	/* The flying bits: small meshes of s_sfx.pcx, tumbling. */
	for (const Bit &b : bit_list) {
		if (!b.mesh)
			continue;
		glPushMatrix();
		glTranslatef(b.p[0], b.p[1], b.p[2]);
		gl_rotate(b.rot[1], 0, 1, 0);
		gl_rotate(b.rot[0], 1, 0, 0);
		gl_rotate(b.rot[2], 0, 0, 1);
		r.draw_mesh(*b.mesh, sfx_tex);
		glPopMatrix();
	}
	for (const Piece &q : pieces) {
		const Mesh *m = scenery_meshes[q.kind][(size_t)q.frame];
		if (!m)
			continue;
		glPushMatrix();
		glTranslatef(q.p[0], q.p[1], q.p[2]);
		gl_rotate(q.rot[1] * 57.2958f, 0, 1, 0);
		gl_rotate(q.rot[0] * 57.2958f, 1, 0, 0);
		gl_rotate(q.rot[2] * 57.2958f, 0, 0, 1);
		glScalef(q.scale[0], q.scale[1], q.scale[2]);
		r.draw_mesh(*m, sfx_tex);
		glPopMatrix();
	}
}
