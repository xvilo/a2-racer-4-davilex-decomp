#include "engine/collision.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#include "engine/mesh.h"

/* Chunks searched either side of the given one. */
static const int NEAR = 2;

void CollisionWorld::build(const Road &road)
{
	chunks.clear();
	chunks.resize(road.chunks.size());
	for (size_t i = 0; i < road.chunks.size(); i++) {
		const RoadChunk &rc = road.chunks[i];
		for (int k = 0; k < 3; k++)
			chunks[i].pos[k] = rc.pos[k];
		for (int l = 0; l < 4; l++)
			for (const RoadQuad &q : rc.lists[l])
				for (int t = 0; t < 2; t++) {
					float p[3][3];
					for (int k = 0; k < 3; k++) {
						const RoadVertex &v = q.v[q.tri[t * 3 + k]];
						p[k][0] = v.x;
						p[k][1] = v.y;
						p[k][2] = v.z;
					}
					add_triangle((int)i, p[0], p[1], p[2], l);
				}
	}
}

/* gl_rotate's rotation of v about a unit axis. */
static void rotate(float v[3], float deg, float x, float y, float z)
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

void CollisionWorld::add_mesh(const Mesh &m, const float pos[3], const float rot[3], int chunk)
{
	if (chunks.empty())
		return;
	chunk = ((chunk % (int)chunks.size()) + (int)chunks.size()) % (int)chunks.size();
	std::vector<float> world(m.vertices.size() * 3);
	for (size_t i = 0; i < m.vertices.size(); i++) {
		float v[3] = { m.vertices[i].x, m.vertices[i].y, m.vertices[i].z };
		rotate(v, rot[2], 0, 0, 1);
		rotate(v, rot[0], 1, 0, 0);
		rotate(v, rot[1], 0, 1, 0);
		for (int k = 0; k < 3; k++)
			world[i * 3 + k] = v[k] + pos[k];
	}
	for (size_t i = 0; i + 2 < m.indices.size(); i += 3)
		add_triangle(chunk, &world[m.indices[i] * 3u], &world[m.indices[i + 1] * 3u], &world[m.indices[i + 2] * 3u], 3);
}

void CollisionWorld::add_triangle(int chunk, const float a[3], const float b[3], const float c3[3], int list)
{
	Chunk &c = chunks[(size_t)chunk];
	Tri tr;
	for (int k = 0; k < 3; k++) {
		tr.a[k] = a[k];
		tr.b[k] = b[k];
		tr.c[k] = c3[k];
	}
	float u[3], w[3];
	for (int k = 0; k < 3; k++) {
		u[k] = tr.b[k] - tr.a[k];
		w[k] = tr.c[k] - tr.a[k];
	}
	float n[3] = { u[1] * w[2] - u[2] * w[1], u[2] * w[0] - u[0] * w[2], u[0] * w[1] - u[1] * w[0] };
	float len = sqrtf(n[0] * n[0] + n[1] * n[1] + n[2] * n[2]);
	if (len < 1e-6f)
		return;
	for (float &x : n)
		x /= len;
	const float raw[3] = { n[0], n[1], n[2] };
	if (n[1] < 0) {
		/* Ground faces point up; a downward one is ground seen from below (an underpass
		 * ceiling): it still counts, turned over. */
		for (float &x : n)
			x = -x;
	}
	if (n[1] > 0.75f) {
		for (int k = 0; k < 3; k++)
			tr.normal[k] = n[k];
		tr.list = list;
		c.ground.push_back(tr);
		return;
	}
	/* An upright or steep face (over ~40 degrees): its longest horizontal edge is the
	 * wall. */
	const float *e[3][2] = { { tr.a, tr.b }, { tr.b, tr.c }, { tr.c, tr.a } };
	int best = 0;
	float bl = -1;
	for (int k = 0; k < 3; k++) {
		float dx = e[k][1][0] - e[k][0][0], dz = e[k][1][2] - e[k][0][2];
		float l2 = dx * dx + dz * dz;
		if (l2 > bl) {
			bl = l2;
			best = k;
		}
	}
	if (bl < 1)
		return;
	Wall wl;
	wl.x0 = e[best][0][0];
	wl.z0 = e[best][0][2];
	wl.x1 = e[best][1][0];
	wl.z1 = e[best][1][2];
	wl.ymin = std::min({ tr.a[1], tr.b[1], tr.c[1] });
	wl.ymax = std::max({ tr.a[1], tr.b[1], tr.c[1] });
	float hl = sqrtf(raw[0] * raw[0] + raw[2] * raw[2]);
	if (hl < 1e-6f)
		return;
	wl.nx = raw[0] / hl;
	wl.nz = raw[2] / hl;
	const float *pt[3] = { tr.a, tr.b, tr.c };
	float ex = wl.x1 - wl.x0, ez = wl.z1 - wl.z0;
	for (int k = 0; k < 3; k++) {
		wl.s[k] = ((pt[k][0] - wl.x0) * ex + (pt[k][2] - wl.z0) * ez) / bl;
		wl.y[k] = pt[k][1];
	}
	/* Low edges (kerbs) are driven over. */
	if (wl.ymax - wl.ymin < 4)
		return;
	c.walls.push_back(wl);
}

int CollisionWorld::nearest_chunk(float x, float z, int hint) const
{
	int n = (int)chunks.size();
	if (n == 0)
		return 0;
	if (hint < 0 || hint >= n) {
		/* No idea where we are: look at all of them. */
		int best = 0;
		float bd = 1e30f;
		for (int i = 0; i < n; i++) {
			float dx = chunks[i].pos[0] - x, dz = chunks[i].pos[2] - z, d = dx * dx + dz * dz;
			if (d < bd) {
				bd = d;
				best = i;
			}
		}
		return best;
	}
	int best = hint;
	float bd = 1e30f;
	for (int k = -6; k <= 6; k++) {
		int i = ((hint + k) % n + n) % n;
		float dx = chunks[i].pos[0] - x, dz = chunks[i].pos[2] - z, d = dx * dx + dz * dz;
		if (d < bd) {
			bd = d;
			best = i;
		}
	}
	return best;
}

/* Whether (x, z) lies in the triangle's footprint; the height there in y. */
static bool height_in(const float a[3], const float b[3], const float c[3], float x, float z, float &y)
{
	float d = (b[2] - c[2]) * (a[0] - c[0]) + (c[0] - b[0]) * (a[2] - c[2]);
	if (fabsf(d) < 1e-9f)
		return false;
	float l1 = ((b[2] - c[2]) * (x - c[0]) + (c[0] - b[0]) * (z - c[2])) / d;
	float l2 = ((c[2] - a[2]) * (x - c[0]) + (a[0] - c[0]) * (z - c[2])) / d;
	float l3 = 1 - l1 - l2;
	const float eps = -1e-4f;
	if (l1 < eps || l2 < eps || l3 < eps)
		return false;
	y = l1 * a[1] + l2 * b[1] + l3 * c[1];
	return true;
}

bool CollisionWorld::ground(float x, float z, float y_max, int chunk, GroundHit &hit) const
{
	int n = (int)chunks.size();
	bool found = false;
	for (int k = -NEAR; k <= NEAR; k++) {
		const Chunk &c = chunks[((chunk + k) % n + n) % n];
		for (const Tri &t : c.ground) {
			float y;
			if (!height_in(t.a, t.b, t.c, x, z, y) || y > y_max)
				continue;
			if (!found || y > hit.y) {
				hit.y = y;
				for (int i = 0; i < 3; i++)
					hit.normal[i] = t.normal[i];
				hit.list = t.list;
				found = true;
			}
		}
	}
	return found;
}

bool CollisionWorld::Wall::extent(float t, float &bottom, float &top) const
{
	bool any = false;
	for (int k = 0; k < 3; k++) {
		int j = (k + 1) % 3;
		float s0 = s[k], s1 = s[j];
		if (t < std::min(s0, s1) - 1e-4f || t > std::max(s0, s1) + 1e-4f)
			continue;
		float yy = fabsf(s1 - s0) < 1e-6f ? std::max(y[k], y[j]) : y[k] + (y[j] - y[k]) * (t - s0) / (s1 - s0);
		if (fabsf(s1 - s0) < 1e-6f) {
			/* An upright edge: it spans both heights. */
			bottom = any ? std::min(bottom, std::min(y[k], y[j])) : std::min(y[k], y[j]);
			top = any ? std::max(top, yy) : yy;
		}
		else {
			bottom = any ? std::min(bottom, yy) : yy;
			top = any ? std::max(top, yy) : yy;
		}
		any = true;
	}
	return any;
}

bool CollisionWorld::push_out(float &x, float &z, float r, float y0, float y1, int chunk, float nout[2]) const
{
	int n = (int)chunks.size();
	bool touched = false;
	nout[0] = nout[1] = 0;
	for (int k = -NEAR; k <= NEAR; k++) {
		const Chunk &c = chunks[((chunk + k) % n + n) % n];
		for (const Wall &w : c.walls) {
			if (w.ymax < y0 || w.ymin > y1)
				continue;
			float ex = w.x1 - w.x0, ez = w.z1 - w.z0;
			float l2 = ex * ex + ez * ez;
			float t = ((x - w.x0) * ex + (z - w.z0) * ez) / l2;
			t = std::clamp(t, 0.0f, 1.0f);
			float bottom, top;
			if (!w.extent(t, bottom, top) || top < y0 || bottom > y1 || top - bottom < 4)
				continue;
			float px = w.x0 + ex * t, pz = w.z0 + ez * t;
			float dx = x - px, dz = z - pz, d2 = dx * dx + dz * dz;
			if (d2 >= r * r || dx * w.nx + dz * w.nz < 0)
				continue;
			float d = sqrtf(d2);
			float nx, nz;
			if (d > 1e-4f) {
				nx = dx / d;
				nz = dz / d;
			}
			else {
				nx = w.nx;
				nz = w.nz;
			}
			if (getenv("A2_TRACE_WALLS"))
				printf("        wall chunk %d (%.0f %.0f)-(%.0f %.0f) y %.0f..%.0f at t %.2f: %.0f..%.0f, car y %.0f..%.0f\n",
					((chunk + k) % n + n) % n, w.x0, w.z0, w.x1, w.z1, w.ymin, w.ymax, t, bottom, top, y0, y1);
			x += nx * (r - d);
			z += nz * (r - d);
			nout[0] += nx;
			nout[1] += nz;
			touched = true;
		}
	}
	return touched;
}
