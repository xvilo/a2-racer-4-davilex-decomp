#include "engine/road.h"

#include <cstring>

#include "res/archive.h"
#include "res/image.h"

namespace {

struct Reader {
	const std::vector<uint8_t> &d;
	size_t p = 0;
	bool bad = false;

	int32_t i32()
	{
		if (p + 4 > d.size()) {
			bad = true;
			return 0;
		}
		int32_t v = (int32_t)(d[p] | d[p + 1] << 8 | d[p + 2] << 16 | (uint32_t)d[p + 3] << 24);
		p += 4;
		return v;
	}

	float f32()
	{
		int32_t v = i32();
		float f;
		std::memcpy(&f, &v, 4);
		return f;
	}
};

} // namespace

std::string Road::load(const std::string &dir, const std::string &name)
{
	std::vector<uint8_t> rmp, pmp;
	if (!read_file_ci(dir, name + ".rmp", rmp))
		return "cannot read " + name + ".rmp";
	if (!read_file_ci(dir, name + ".pmp", pmp))
		return "cannot read " + name + ".pmp";
	Reader r{ rmp }, p{ pmp };
	int32_t version = r.i32();
	if (version < 0)
		r.i32(); /* a size hint */
	int32_t count = r.i32();
	if (p.i32() != count || count < 0)
		return name + ": the .rmp and .pmp chunk counts differ";
	chunks.assign((size_t)count, RoadChunk());
	for (auto &c : chunks) {
		for (float &x : c.pos)
			x = p.f32();
		c.a = p.i32();
		c.b = p.i32();
		for (auto &l : c.links) {
			int32_t n = p.i32();
			for (int32_t k = 0; k < n && !p.bad; k++)
				l.push_back(p.i32());
		}
		for (auto &list : c.lists) {
			int32_t n = r.i32();
			for (int32_t k = 0; k < n && !r.bad; k++) {
				RoadQuad q;
				for (auto &v : q.v) {
					v.x = r.f32();
					v.y = r.f32();
					v.z = r.f32();
					v.u = r.f32();
					v.v = r.f32();
					uint32_t c = version == -1 ? (uint32_t)r.i32() : 0xffffffu;
					v.colour = rgba((uint8_t)c, (uint8_t)(c >> 8), (uint8_t)(c >> 16));
				}
				for (int &t : q.tri)
					t = r.i32() & 3;
				list.push_back(q);
			}
		}
		if (r.bad || p.bad)
			return name + ": the road files end early";
	}
	return "";
}
