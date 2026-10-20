#include "engine/mesh.h"

#include <algorithm>
#include <cstring>

#include "res/image.h"

static int32_t rd32(const uint8_t *p)
{
	return (int32_t)(p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24);
}

static float rdf(const uint8_t *p)
{
	float f;
	std::memcpy(&f, p, 4);
	return f;
}

/* A colour channel, 0..1 in the file. */
static uint8_t channel(float c)
{
	return (uint8_t)std::clamp((int)(c * 255.0f + 0.5f), 0, 255);
}

bool Mesh::load(const std::vector<uint8_t> &d)
{
	if (d.size() < 8)
		return false;
	int32_t a = rd32(d.data());
	int version = 0;
	size_t p = 4;
	int32_t nv = a;
	if (a < 0) {
		version = a;
		nv = rd32(&d[p]);
		p += 4;
	}
	if (p + 4 > d.size())
		return false;
	int32_t nt = rd32(&d[p]);
	p += 4;
	size_t vs = version == -1 ? 49 : 33;
	if (nv < 0 || nt < 0 || p + (size_t)nv * vs + (size_t)nt * 9 > d.size())
		return false;
	vertices.resize((size_t)nv);
	for (int32_t i = 0; i < nv; i++, p += vs) {
		const uint8_t *v = &d[p];
		MeshVertex &o = vertices[(size_t)i];
		o.x = rdf(v);
		o.y = rdf(v + 4);
		o.z = rdf(v + 8);
		o.nx = rdf(v + 12);
		o.ny = rdf(v + 16);
		o.nz = rdf(v + 20);
		o.u = rdf(v + 24);
		o.v = rdf(v + 28);
		o.colour = version == -1 ? rgba(channel(rdf(v + 32)), channel(rdf(v + 36)), channel(rdf(v + 40)),
			channel(rdf(v + 44))) : rgba(255, 255, 255);
	}
	indices.resize((size_t)nt * 3);
	for (int32_t i = 0; i < nt; i++, p += 9) {
		for (int k = 0; k < 3; k++) {
			uint16_t ix = (uint16_t)(d[p + 2 * k] | d[p + 2 * k + 1] << 8);
			indices[(size_t)i * 3 + k] = ix < nv ? ix : 0;
		}
	}
	for (int k = 0; k < 3; k++) {
		min[k] = vertices.empty() ? 0 : 1e30f;
		max[k] = vertices.empty() ? 0 : -1e30f;
	}
	for (const auto &v : vertices) {
		const float c[3] = { v.x, v.y, v.z };
		for (int k = 0; k < 3; k++) {
			min[k] = std::min(min[k], c[k]);
			max[k] = std::max(max[k], c[k]);
		}
	}
	return true;
}
