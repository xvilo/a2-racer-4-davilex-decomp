#include "game/paths.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>

#include "res/archive.h"

std::vector<Path> load_paths(const std::string &dir, const std::string &stage_file)
{
	std::vector<Path> out;
	std::vector<uint8_t> d;
	if (!read_file_ci(dir, stage_file + ".pth", d) || d.size() < 8)
		return out;
	auto i32 = [&](size_t p) {
		int32_t v;
		memcpy(&v, &d[p], 4);
		return v;
	};
	int32_t count = i32(4);
	size_t p = 8;
	for (int32_t i = 0; i < count && p + 24 <= d.size(); i++) {
		Path path;
		path.start = i32(p);
		path.end = i32(p + 4);
		path.type = i32(p + 8);
		path.flags = i32(p + 12);
		path.time = std::max(0.1f, (float)i32(p + 16) / 1000);
		int32_t n = i32(p + 20);
		p += 24;
		for (int32_t k = 0; k < n && p + 16 <= d.size(); k++, p += 16) {
			PathPoint pt;
			memcpy(&pt.x, &d[p + 4], 4);
			memcpy(&pt.y, &d[p + 8], 4);
			memcpy(&pt.z, &d[p + 12], 4);
			path.points.push_back(pt);
		}
		out.push_back(path);
	}
	return out;
}

static void sample(const std::vector<PathPoint> &points, float f, float out[3])
{
	int n = (int)points.size();
	float s = std::clamp(f, 0.0f, 1.0f) * (float)(n - 1);
	int i = std::min((int)s, n - 2);
	float t = s - (float)i;
	auto pt = [&](int k) { return points[(size_t)std::clamp(k, 0, n - 1)]; };
	const PathPoint p0 = pt(i - 1), p1 = pt(i), p2 = pt(i + 1), p3 = pt(i + 2);
	float t2 = t * t, t3 = t2 * t;
	float h00 = 2 * t3 - 3 * t2 + 1, h10 = t3 - 2 * t2 + t, h01 = -2 * t3 + 3 * t2, h11 = t3 - t2;
	auto axis = [&](float a0, float a1, float a2, float a3) {
		return h00 * a1 + h01 * a2 + h10 * (a2 - a0) * 0.5f + h11 * (a3 - a1) * 0.5f;
	};
	out[0] = axis(p0.x, p1.x, p2.x, p3.x);
	out[1] = axis(p0.y, p1.y, p2.y, p3.y);
	out[2] = axis(p0.z, p1.z, p2.z, p3.z);
}

void Path::at(float f, float out[3], float &yaw) const
{
	yaw = 0;
	if (points.empty()) {
		out[0] = out[1] = out[2] = 0;
		return;
	}
	if (points.size() == 1) {
		out[0] = points[0].x, out[1] = points[0].y, out[2] = points[0].z;
		return;
	}
	sample(points, f, out);
	/* The heading: towards a little further on (back from a little before, at the end). */
	float a[3], b[3];
	const float e = 0.01f;
	sample(points, std::min(f, 1 - e), a);
	sample(points, std::min(f, 1 - e) + e, b);
	if (fabsf(b[0] - a[0]) + fabsf(b[2] - a[2]) > 1e-4f)
		yaw = atan2f(b[0] - a[0], b[2] - a[2]);
}
