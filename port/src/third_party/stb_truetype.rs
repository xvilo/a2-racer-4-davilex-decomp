// stb_truetype.h - v1.26 - public domain
// authored from 2009-2021 by Sean Barrett / RAD Game Tools
//
// The antialiasing software rasterizer (version 2) of stb_truetype.h, ported to Rust;
// the font parsing comes from the stb_truetype crate.
//
// ------------------------------------------------------------------------------
// This software is available under 2 licenses -- choose whichever you prefer.
// ------------------------------------------------------------------------------
// ALTERNATIVE A - MIT License
// Copyright (c) 2017 Sean Barrett
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
// of the Software, and to permit persons to whom the Software is furnished to do
// so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// ------------------------------------------------------------------------------
// ALTERNATIVE B - Public Domain (www.unlicense.org)
// This is free and unencumbered software released into the public domain.
// Anyone is free to copy, modify, publish, use, compile, sell, or distribute this
// software, either in source code form or as a compiled binary, for any purpose,
// commercial or non-commercial, and by any means.
// In jurisdictions that recognize copyright laws, the author or authors of this
// software dedicate any and all copyright interest in the software to the public
// domain. We make this dedication for the benefit of the public at large and to
// the detriment of our heirs and successors. We intend this dedication to be an
// overt act of relinquishment in perpetuity of all present and future rights to
// this software under copyright law.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
// ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
// ------------------------------------------------------------------------------

//! stb_truetype's glyph rasterizer (STBTT_RASTERIZER_VERSION 2) on top of the stb_truetype
//! crate's FontInfo.

use std::ops::Deref;

pub use ::stb_truetype::{FontInfo, get_font_offset_for_index};


pub const STBTT_VMOVE: u8 = 1;
pub const STBTT_VLINE: u8 = 2;
pub const STBTT_VCURVE: u8 = 3;
pub const STBTT_VCUBIC: u8 = 4;

#[derive(Clone, Copy, Debug, Default)]
pub struct Vertex {
	pub x: i16,
	pub y: i16,
	pub cx: i16,
	pub cy: i16,
	pub cx1: i16,
	pub cy1: i16,
	pub type_: u8,
}

pub struct Bitmap<'a> {
	pub w: i32,
	pub h: i32,
	pub stride: i32,
	pub pixels: &'a mut [u8],
}

pub fn get_glyph_shape<D: Deref<Target = [u8]>>(info: &FontInfo<D>, glyph_index: i32) -> Vec<Vertex> {
	info.get_glyph_shape(glyph_index as u32)
		.unwrap_or_default()
		.iter()
		.map(|v| Vertex { x: v.x, y: v.y, cx: v.cx, cy: v.cy, cx1: 0, cy1: 0, type_: v.vertex_type() as u8 })
		.collect()
}

pub fn find_glyph_index<D: Deref<Target = [u8]>>(info: &FontInfo<D>, unicode_codepoint: i32) -> i32 {
	info.find_glyph_index(unicode_codepoint as u32) as i32
}

//////////////////////////////////////////////////////////////////////////////
//
// antialiasing software rasterizer
//

/// Returns (ix0, iy0, ix1, iy1).
pub fn get_glyph_bitmap_box_subpixel<D: Deref<Target = [u8]>>(
	font: &FontInfo<D>,
	glyph: i32,
	scale_x: f32,
	scale_y: f32,
	shift_x: f32,
	shift_y: f32,
) -> (i32, i32, i32, i32) {
	match font.get_glyph_box(glyph as u32) {
		// e.g. space character
		None => (0, 0, 0, 0),
		// move to integral bboxes (treating pixels as little squares, what pixels get touched)?
		Some(b) => (
			(b.x0 as f32 * scale_x + shift_x).floor() as i32,
			((-(b.y1 as i32) as f32) * scale_y + shift_y).floor() as i32,
			(b.x1 as f32 * scale_x + shift_x).ceil() as i32,
			((-(b.y0 as i32) as f32) * scale_y + shift_y).ceil() as i32,
		),
	}
}

pub fn get_codepoint_bitmap_box_subpixel<D: Deref<Target = [u8]>>(
	font: &FontInfo<D>,
	codepoint: i32,
	scale_x: f32,
	scale_y: f32,
	shift_x: f32,
	shift_y: f32,
) -> (i32, i32, i32, i32) {
	get_glyph_bitmap_box_subpixel(font, find_glyph_index(font, codepoint), scale_x, scale_y, shift_x, shift_y)
}

//////////////////////////////////////////////////////////////////////////////
//
//  Rasterizer

#[derive(Clone, Copy, Default)]
struct Edge {
	x0: f32,
	y0: f32,
	x1: f32,
	y1: f32,
	invert: i32,
}

#[derive(Clone, Copy)]
struct ActiveEdge {
	fx: f32,
	fdx: f32,
	fdy: f32,
	direction: f32,
	sy: f32,
	ey: f32,
}

fn new_active(e: &Edge, off_x: i32, start_point: f32) -> ActiveEdge {
	let dxdy = (e.x1 - e.x0) / (e.y1 - e.y0);
	let mut fx = (dxdy * (start_point - e.y0) + e.x0);
	fx -= off_x as f32;
	ActiveEdge {
		fdx: dxdy,
		fdy: if dxdy != 0.0 { 1.0 / dxdy } else { 0.0 },
		fx,
		direction: if e.invert != 0 { 1.0 } else { -1.0 },
		sy: e.y0,
		ey: e.y1,
	}
}

// the edge passed in here does not cross the vertical line at x or the vertical line at x+1
// (i.e. it has already been clipped to those)
fn handle_clipped_edge(
	scanline: &mut [f32],
	x: i32,
	e: &ActiveEdge,
	mut x0: f32,
	mut y0: f32,
	mut x1: f32,
	mut y1: f32,
) {
	if y0 == y1 {
		return;
	}
	if y0 > e.ey {
		return;
	}
	if y1 < e.sy {
		return;
	}
	if y0 < e.sy {
		x0 += (x1 - x0) * (e.sy - y0) / (y1 - y0);
		y0 = e.sy;
	}
	if y1 > e.ey {
		x1 += (x1 - x0) * (e.ey - y1) / (y1 - y0);
		y1 = e.ey;
	}

	let xf = x as f32;
	let xi = x as usize;
	if x0 <= xf && x1 <= xf {
		scanline[xi] = (e.direction * (y1 - y0) + scanline[xi]);
	} else if x0 >= (x + 1) as f32 && x1 >= (x + 1) as f32 {
	} else {
		// coverage = 1 - average x position
		scanline[xi] = ((e.direction * (y1 - y0)) * (1.0 - ((x0 - xf) + (x1 - xf)) / 2.0) + scanline[xi]);
	}
}

fn sized_trapezoid_area(height: f32, top_width: f32, bottom_width: f32) -> f32 {
	(top_width + bottom_width) / 2.0 * height
}

fn position_trapezoid_area(height: f32, tx0: f32, tx1: f32, bx0: f32, bx1: f32) -> f32 {
	sized_trapezoid_area(height, tx1 - tx0, bx1 - bx0)
}

fn sized_triangle_area(height: f32, width: f32) -> f32 {
	height * width / 2.0
}

/// scanline2 is the C's scanline_fill - 1 (scanline_fill[x] is scanline2[x + 1]).
fn fill_active_edges_new(scanline: &mut [f32], scanline2: &mut [f32], len: i32, active: &[ActiveEdge], y_top: f32) {
	let y_bottom = y_top + 1.0;
	let lenf = len as f32;

	for e in active {
		// brute force every pixel

		// compute intersection points with top & bottom
		if e.fdx == 0.0 {
			let x0 = e.fx;
			if x0 < lenf {
				if x0 >= 0.0 {
					handle_clipped_edge(scanline, x0 as i32, e, x0, y_top, x0, y_bottom);
					handle_clipped_edge(scanline2, x0 as i32 + 1, e, x0, y_top, x0, y_bottom);
				} else {
					handle_clipped_edge(scanline2, 0, e, x0, y_top, x0, y_bottom);
				}
			}
		} else {
			let mut x0 = e.fx;
			let dx = e.fdx;
			let mut xb = x0 + dx;
			let mut x_top;
			let mut x_bottom;
			let mut sy0;
			let mut sy1;
			let mut dy = e.fdy;

			// compute endpoints of line segment clipped to this scanline (if the
			// line segment starts on this scanline. x0 is the intersection of the
			// line with y_top, but that may be off the line segment.
			if e.sy > y_top {
				x_top = (dx * (e.sy - y_top) + x0);
				sy0 = e.sy;
			} else {
				x_top = x0;
				sy0 = y_top;
			}
			if e.ey < y_bottom {
				x_bottom = (dx * (e.ey - y_top) + x0);
				sy1 = e.ey;
			} else {
				x_bottom = xb;
				sy1 = y_bottom;
			}

			if x_top >= 0.0 && x_bottom >= 0.0 && x_top < lenf && x_bottom < lenf {
				// from here on, we don't have to range check x values

				if x_top as i32 == x_bottom as i32 {
					// simple case, only spans one pixel
					let x = x_top as i32;
					let height = (sy1 - sy0) * e.direction;
					scanline[x as usize] +=
						position_trapezoid_area(height, x_top, x as f32 + 1.0, x_bottom, x as f32 + 1.0);
					scanline2[x as usize + 1] += height; // everything right of this pixel is filled
				} else {
					// covers 2+ pixels
					if x_top > x_bottom {
						// flip scanline vertically; signed area is the same
						sy0 = y_bottom - (sy0 - y_top);
						sy1 = y_bottom - (sy1 - y_top);
						std::mem::swap(&mut sy0, &mut sy1);
						std::mem::swap(&mut x_bottom, &mut x_top);
						dy = -dy;
						std::mem::swap(&mut x0, &mut xb);
					}

					let x1 = x_top as i32;
					let x2 = x_bottom as i32;
					// compute intersection with y axis at x1+1
					let mut y_crossing = (dy * ((x1 + 1) as f32 - x0) + y_top);

					// compute intersection with y axis at x2
					let mut y_final = (dy * (x2 as f32 - x0) + y_top);

					//           x1    x_top                            x2    x_bottom
					//     y_top  +------|-----+------------+------------+--------|---+------------+
					//            |            |            |            |            |            |
					//            |            |            |            |            |            |
					//       sy0  |      Txxxxx|............|............|............|............|
					// y_crossing |            *xxxxx.......|............|............|............|
					//            |            |     xxxxx..|............|............|............|
					//            |            |     /-   xx*xxxx........|............|............|
					//            |            | dy <       |    xxxxxx..|............|............|
					//   y_final  |            |     \-     |          xx*xxx.........|............|
					//       sy1  |            |            |            |   xxxxxB...|............|
					//            |            |            |            |            |            |
					//            |            |            |            |            |            |
					//  y_bottom  +------------+------------+------------+------------+------------+
					//
					// goal is to measure the area covered by '.' in each pixel

					// if x2 is right at the right edge of x1, y_crossing can blow up, github #1057
					// @TODO: maybe test against sy1 rather than y_bottom?
					if y_crossing > y_bottom {
						y_crossing = y_bottom;
					}

					let sign = e.direction;

					// area of the rectangle covered from sy0..y_crossing
					let mut area = sign * (y_crossing - sy0);

					// area of the triangle (x_top,sy0), (x1+1,sy0), (x1+1,y_crossing)
					scanline[x1 as usize] += sized_triangle_area(area, (x1 + 1) as f32 - x_top);

					// check if final y_crossing is blown up; no test case for this
					if y_final > y_bottom {
						y_final = y_bottom;
						dy = (y_final - y_crossing) / (x2 - (x1 + 1)) as f32; // if denom=0, y_final = y_crossing, so y_final <= y_bottom
					}

					// in second pixel, area covered by line segment found in first pixel
					// is always a rectangle 1 wide * the height of that line segment; this
					// is exactly what the variable 'area' stores. it also gets a contribution
					// from the line segment within it. the THIRD pixel will get the first
					// pixel's rectangle contribution, the second pixel's rectangle contribution,
					// and its own contribution. the 'own contribution' is the same in every pixel except
					// the leftmost and rightmost, a trapezoid that slides down in each pixel.
					// the second pixel's contribution to the third pixel will be the
					// rectangle 1 wide times the height change in the second pixel, which is dy.

					let step = sign * dy * 1.0; // dy is dy/dx, change in y for every 1 change in x,
					// which multiplied by 1-pixel-width is how much pixel area changes for each step in x
					// so the area advances by 'step' every time

					for x in x1 + 1..x2 {
						scanline[x as usize] += area + step / 2.0; // area of trapezoid is 1*step/2
						area += step;
					}

					// area covered in the last pixel is the rectangle from all the pixels to the left,
					// plus the trapezoid filled by the line segment in this pixel all the way to the right edge
					scanline[x2 as usize] += (sign * (position_trapezoid_area(sy1 - y_final, x2 as f32, x2 as f32 + 1.0, x_bottom, x2 as f32 + 1.0)) + area);

					// the rest of the line is filled based on the total height of the line segment in this pixel
					scanline2[x2 as usize + 1] = (sign * (sy1 - sy0) + (scanline2[x2 as usize + 1]));
				}
			} else {
				// if edge goes outside of box we're drawing, we require
				// clipping logic. since this does not match the intended use
				// of this library, we use a different, very slow brute
				// force implementation
				// note though that this does happen some of the time because
				// x_top and x_bottom can be extrapolated at the top & bottom of
				// the shape and actually lie outside the bounding box
				for x in 0..len {
					// cases:
					//
					// there can be up to two intersections with the pixel. any intersection
					// with left or right edges can be handled by splitting into two (or three)
					// regions. intersections with top & bottom do not necessitate case-wise logic.
					//
					// the old way of doing this found the intersections with the left & right edges,
					// then used some simple logic to produce up to three segments in sorted order
					// from top-to-bottom. however, this had a problem: if an x edge was epsilon
					// across the x border, then the corresponding y position might not be distinct
					// from the other y segment, and it might ignored as an empty segment. to avoid
					// that, we need to explicitly produce segments based on x positions.

					// rename variables to clearly-defined pairs
					let y0 = y_top;
					let x1 = x as f32;
					let x2 = (x + 1) as f32;
					let x3 = xb;
					let y3 = y_bottom;

					// x = e->x + e->dx * (y-y_top)
					// (y-y_top) = (x - e->x) / e->dx
					// y = (x - e->x) / e->dx + y_top
					let y1 = (x as f32 - x0) / dx + y_top;
					let y2 = ((x + 1) as f32 - x0) / dx + y_top;

					if x0 < x1 && x3 > x2 {
						// three segments descending down-right
						handle_clipped_edge(scanline, x, e, x0, y0, x1, y1);
						handle_clipped_edge(scanline, x, e, x1, y1, x2, y2);
						handle_clipped_edge(scanline, x, e, x2, y2, x3, y3);
					} else if x3 < x1 && x0 > x2 {
						// three segments descending down-left
						handle_clipped_edge(scanline, x, e, x0, y0, x2, y2);
						handle_clipped_edge(scanline, x, e, x2, y2, x1, y1);
						handle_clipped_edge(scanline, x, e, x1, y1, x3, y3);
					} else if x0 < x1 && x3 > x1 {
						// two segments across x, down-right
						handle_clipped_edge(scanline, x, e, x0, y0, x1, y1);
						handle_clipped_edge(scanline, x, e, x1, y1, x3, y3);
					} else if x3 < x1 && x0 > x1 {
						// two segments across x, down-left
						handle_clipped_edge(scanline, x, e, x0, y0, x1, y1);
						handle_clipped_edge(scanline, x, e, x1, y1, x3, y3);
					} else if x0 < x2 && x3 > x2 {
						// two segments across x+1, down-right
						handle_clipped_edge(scanline, x, e, x0, y0, x2, y2);
						handle_clipped_edge(scanline, x, e, x2, y2, x3, y3);
					} else if x3 < x2 && x0 > x2 {
						// two segments across x+1, down-left
						handle_clipped_edge(scanline, x, e, x0, y0, x2, y2);
						handle_clipped_edge(scanline, x, e, x2, y2, x3, y3);
					} else {
						// one segment
						handle_clipped_edge(scanline, x, e, x0, y0, x3, y3);
					}
				}
			}
		}
	}
}

// directly AA rasterize edges w/o supersampling
fn rasterize_sorted_edges(result: &mut Bitmap, e: &mut [Edge], n: usize, _vsubsample: i32, off_x: i32, off_y: i32) {
	let mut active: Vec<ActiveEdge> = Vec::new();
	let w = result.w as usize;
	let mut scanline_data = vec![0.0f32; w * 2 + 1];
	let (scanline, scanline2) = scanline_data.split_at_mut(w);

	let mut y = off_y;
	let mut j = 0;
	let mut ei = 0;
	e[n].y0 = (off_y + result.h) as f32 + 1.0;

	while j < result.h {
		// find center of pixel for this scanline
		let scan_y_top = y as f32 + 0.0;
		let scan_y_bottom = y as f32 + 1.0;

		scanline.fill(0.0);
		scanline2.fill(0.0);

		// update all active edges;
		// remove all active edges that terminate before the top of this scanline
		active.retain(|z| z.ey > scan_y_top);

		// insert all edges that start before the bottom of this scanline
		while e[ei].y0 <= scan_y_bottom {
			if e[ei].y0 != e[ei].y1 {
				let mut z = new_active(&e[ei], off_x, scan_y_top);
				if j == 0 && off_y != 0 && z.ey < scan_y_top {
					// this can happen due to subpixel positioning and some kind of fp rounding error i think
					z.ey = scan_y_top;
				}
				// insert at front
				active.insert(0, z);
			}
			ei += 1;
		}

		// now process all active edges
		if !active.is_empty() {
			fill_active_edges_new(scanline, scanline2, result.w, &active, scan_y_top);
		}

		{
			let mut sum = 0.0f32;
			for i in 0..w {
				sum += scanline2[i];
				let mut k = scanline[i] + sum;
				k = ((k.abs()) * 255.0 + 0.5);
				let mut m = k as i32;
				if m > 255 {
					m = 255;
				}
				result.pixels[j as usize * result.stride as usize + i] = m as u8;
			}
		}
		// advance all the edges
		for z in &mut active {
			z.fx += z.fdx; // advance to position for current scanline
		}

		y += 1;
		j += 1;
	}
}

fn compare(a: &Edge, b: &Edge) -> bool {
	a.y0 < b.y0
}

fn sort_edges_ins_sort(p: &mut [Edge], n: usize) {
	for i in 1..n {
		let t = p[i];
		let mut j = i;
		while j > 0 {
			if !compare(&t, &p[j - 1]) {
				break;
			}
			p[j] = p[j - 1];
			j -= 1;
		}
		if i != j {
			p[j] = t;
		}
	}
}

fn sort_edges_quicksort(mut p: &mut [Edge], mut n: i32) {
	// threshold for transitioning to insertion sort
	while n > 12 {
		// compute median of three
		let m = (n >> 1) as usize;
		let c01 = compare(&p[0], &p[m]);
		let c12 = compare(&p[m], &p[n as usize - 1]);
		// if 0 >= mid >= end, or 0 < mid < end, then use mid
		if c01 != c12 {
			// otherwise, we'll need to swap something else to middle
			let c = compare(&p[0], &p[n as usize - 1]);
			// 0>mid && mid<n:  0>n => n; 0<n => 0
			// 0<mid && mid>n:  0>n => 0; 0<n => n
			let z = if c == c12 { 0 } else { n as usize - 1 };
			p.swap(z, m);
		}
		// now p[m] is the median-of-three
		// swap it to the beginning so it won't move around
		p.swap(0, m);

		// partition loop
		let mut i = 1usize;
		let mut j = n as usize - 1;
		loop {
			// handling of equality is crucial here
			// for sentinels & efficiency with duplicates
			while compare(&p[i], &p[0]) {
				i += 1;
			}
			while compare(&p[0], &p[j]) {
				j -= 1;
			}
			// make sure we haven't crossed
			if i >= j {
				break;
			}
			p.swap(i, j);

			i += 1;
			j -= 1;
		}
		// recurse on smaller side, iterate on larger
		if (j as i32) < n - i as i32 {
			sort_edges_quicksort(p, j as i32);
			let rest = p;
			p = &mut rest[i..];
			n -= i as i32;
		} else {
			sort_edges_quicksort(&mut p[i..], n - i as i32);
			n = j as i32;
		}
	}
}

fn sort_edges(p: &mut [Edge], n: usize) {
	sort_edges_quicksort(p, n as i32);
	sort_edges_ins_sort(p, n);
}

#[derive(Clone, Copy, Default)]
struct Point {
	x: f32,
	y: f32,
}

fn rasterize_windings(
	result: &mut Bitmap,
	pts: &[Point],
	wcount: &[i32],
	scale_x: f32,
	scale_y: f32,
	shift_x: f32,
	shift_y: f32,
	off_x: i32,
	off_y: i32,
	invert: bool,
) {
	let y_scale_inv = if invert { -scale_y } else { scale_y };
	let vsubsample: i32 = 1;
	// vsubsample should divide 255 evenly; otherwise we won't reach full opacity

	// now we have to blow out the windings into explicit edge lists
	let total: i32 = wcount.iter().sum();

	let mut e = vec![Edge::default(); total as usize + 1]; // add an extra one as a sentinel
	let mut n = 0usize;

	let mut m = 0usize;
	for &wc in wcount {
		if wc == 0 {
			continue;
		}
		let p = &pts[m..];
		m += wc as usize;
		let mut j = wc as usize - 1;
		for k in 0..wc as usize {
			let (mut a, mut b) = (k, j);
			// skip the edge if horizontal
			if p[j].y != p[k].y {
				// add edge from j to k to the list
				e[n].invert = 0;
				if if invert { p[j].y > p[k].y } else { p[j].y < p[k].y } {
					e[n].invert = 1;
					a = j;
					b = k;
				}
				e[n].x0 = (p[a].x * scale_x + shift_x);
				e[n].y0 = (p[a].y * y_scale_inv + shift_y) * vsubsample as f32;
				e[n].x1 = (p[b].x * scale_x + shift_x);
				e[n].y1 = (p[b].y * y_scale_inv + shift_y) * vsubsample as f32;
				n += 1;
			}
			j = k;
		}
	}

	// now sort the edges by their highest point (should snap to integer, and then by x)
	sort_edges(&mut e, n);

	// now, traverse the scanlines and find the intersections on each scanline, use xor winding rule
	rasterize_sorted_edges(result, &mut e, n, vsubsample, off_x, off_y);
}

// tessellate until threshold p is happy... @TODO warped to compensate for non-linear stretching
fn tesselate_curve(
	points: &mut Vec<Point>,
	x0: f32,
	y0: f32,
	x1: f32,
	y1: f32,
	x2: f32,
	y2: f32,
	objspace_flatness_squared: f32,
	n: i32,
) -> i32 {
	// midpoint
	let mx = ((2.0 * x1 + x0) + x2) / 4.0;
	let my = ((2.0 * y1 + y0) + y2) / 4.0;
	// versus directly drawn line
	let dx = (x0 + x2) / 2.0 - mx;
	let dy = (y0 + y2) / 2.0 - my;
	if n > 16 {
		// 65536 segments on one curve better be enough!
		return 1;
	}
	if (dx * dx + dy * dy) > objspace_flatness_squared {
		// half-pixel error allowed... need to be smaller if AA
		tesselate_curve(points, x0, y0, (x0 + x1) / 2.0, (y0 + y1) / 2.0, mx, my, objspace_flatness_squared, n + 1);
		tesselate_curve(points, mx, my, (x1 + x2) / 2.0, (y1 + y2) / 2.0, x2, y2, objspace_flatness_squared, n + 1);
	} else {
		points.push(Point { x: x2, y: y2 });
	}
	1
}

fn tesselate_cubic(
	points: &mut Vec<Point>,
	x0: f32,
	y0: f32,
	x1: f32,
	y1: f32,
	x2: f32,
	y2: f32,
	x3: f32,
	y3: f32,
	objspace_flatness_squared: f32,
	n: i32,
) {
	// @TODO this "flatness" calculation is just made-up nonsense that seems to work well enough
	let dx0 = x1 - x0;
	let dy0 = y1 - y0;
	let dx1 = x2 - x1;
	let dy1 = y2 - y1;
	let dx2 = x3 - x2;
	let dy2 = y3 - y2;
	let dx = x3 - x0;
	let dy = y3 - y0;
	let longlen = (((dx0 * dx0 + dy0 * dy0) as f64).sqrt()
		+ ((dx1 * dx1 + dy1 * dy1) as f64).sqrt()
		+ ((dx2 * dx2 + dy2 * dy2) as f64).sqrt()) as f32;
	let shortlen = ((dx * dx + dy * dy) as f64).sqrt() as f32;
	let flatness_squared = (longlen * longlen + -(shortlen * shortlen));

	if n > 16 {
		// 65536 segments on one curve better be enough!
		return;
	}

	if flatness_squared > objspace_flatness_squared {
		let x01 = (x0 + x1) / 2.0;
		let y01 = (y0 + y1) / 2.0;
		let x12 = (x1 + x2) / 2.0;
		let y12 = (y1 + y2) / 2.0;
		let x23 = (x2 + x3) / 2.0;
		let y23 = (y2 + y3) / 2.0;

		let xa = (x01 + x12) / 2.0;
		let ya = (y01 + y12) / 2.0;
		let xb = (x12 + x23) / 2.0;
		let yb = (y12 + y23) / 2.0;

		let mx = (xa + xb) / 2.0;
		let my = (ya + yb) / 2.0;

		tesselate_cubic(points, x0, y0, x01, y01, xa, ya, mx, my, objspace_flatness_squared, n + 1);
		tesselate_cubic(points, mx, my, xb, yb, x23, y23, x3, y3, objspace_flatness_squared, n + 1);
	} else {
		points.push(Point { x: x3, y: y3 });
	}
}

/// Returns the points and the length of each contour (no contours: None).
fn flatten_curves(vertices: &[Vertex], objspace_flatness: f32) -> Option<(Vec<Point>, Vec<i32>)> {
	let mut points = Vec::new();
	let objspace_flatness_squared = objspace_flatness * objspace_flatness;

	// count how many "moves" there are to get the contour count
	let num_contours = vertices.iter().filter(|v| v.type_ == STBTT_VMOVE).count();
	if num_contours == 0 {
		return None;
	}
	let mut contour_lengths = vec![0i32; num_contours];

	let (mut x, mut y) = (0.0f32, 0.0f32);
	let mut n: i32 = -1;
	let mut start = 0usize;
	for v in vertices {
		match v.type_ {
			STBTT_VMOVE => {
				// start the next contour
				if n >= 0 {
					contour_lengths[n as usize] = (points.len() - start) as i32;
				}
				n += 1;
				start = points.len();

				x = v.x as f32;
				y = v.y as f32;
				points.push(Point { x, y });
			}
			STBTT_VLINE => {
				x = v.x as f32;
				y = v.y as f32;
				points.push(Point { x, y });
			}
			STBTT_VCURVE => {
				tesselate_curve(
					&mut points,
					x,
					y,
					v.cx as f32,
					v.cy as f32,
					v.x as f32,
					v.y as f32,
					objspace_flatness_squared,
					0,
				);
				x = v.x as f32;
				y = v.y as f32;
			}
			STBTT_VCUBIC => {
				tesselate_cubic(
					&mut points,
					x,
					y,
					v.cx as f32,
					v.cy as f32,
					v.cx1 as f32,
					v.cy1 as f32,
					v.x as f32,
					v.y as f32,
					objspace_flatness_squared,
					0,
				);
				x = v.x as f32;
				y = v.y as f32;
			}
			_ => {}
		}
	}
	contour_lengths[n as usize] = (points.len() - start) as i32;
	Some((points, contour_lengths))
}

pub fn rasterize(
	result: &mut Bitmap,
	flatness_in_pixels: f32,
	vertices: &[Vertex],
	scale_x: f32,
	scale_y: f32,
	shift_x: f32,
	shift_y: f32,
	x_off: i32,
	y_off: i32,
	invert: bool,
) {
	let scale = if scale_x > scale_y { scale_y } else { scale_x };
	if let Some((windings, winding_lengths)) = flatten_curves(vertices, flatness_in_pixels / scale) {
		rasterize_windings(
			result,
			&windings,
			&winding_lengths,
			scale_x,
			scale_y,
			shift_x,
			shift_y,
			x_off,
			y_off,
			invert,
		);
	}
}

pub fn make_glyph_bitmap_subpixel<D: Deref<Target = [u8]>>(
	info: &FontInfo<D>,
	output: &mut [u8],
	out_w: i32,
	out_h: i32,
	out_stride: i32,
	scale_x: f32,
	scale_y: f32,
	shift_x: f32,
	shift_y: f32,
	glyph: i32,
) {
	let vertices = get_glyph_shape(info, glyph);
	let (ix0, iy0, _, _) = get_glyph_bitmap_box_subpixel(info, glyph, scale_x, scale_y, shift_x, shift_y);
	let mut gbm = Bitmap { pixels: output, w: out_w, h: out_h, stride: out_stride };

	if gbm.w != 0 && gbm.h != 0 {
		rasterize(&mut gbm, 0.35, &vertices, scale_x, scale_y, shift_x, shift_y, ix0, iy0, true);
	}
}

pub fn make_codepoint_bitmap_subpixel<D: Deref<Target = [u8]>>(
	info: &FontInfo<D>,
	output: &mut [u8],
	out_w: i32,
	out_h: i32,
	out_stride: i32,
	scale_x: f32,
	scale_y: f32,
	shift_x: f32,
	shift_y: f32,
	codepoint: i32,
) {
	make_glyph_bitmap_subpixel(
		info,
		output,
		out_w,
		out_h,
		out_stride,
		scale_x,
		scale_y,
		shift_x,
		shift_y,
		find_glyph_index(info, codepoint),
	);
}

#[cfg(test)]
mod tests {
	use super::*;
	use crate::menu::canvas::tests::{Fnv, menu_font};

	fn cp1252(c: u8) -> i32 {
		const HI: [u16; 32] = [
			0x20ac, 0x81, 0x201a, 0x192, 0x201e, 0x2026, 0x2020, 0x2021, 0x2c6, 0x2030, 0x160, 0x2039, 0x152, 0x8d,
			0x17d, 0x8f, 0x90, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 0x2dc, 0x2122, 0x161, 0x203a,
			0x153, 0x9d, 0x17e, 0x178,
		];
		if (0x80..0xa0).contains(&c) { HI[(c - 0x80) as usize] as i32 } else { c as i32 }
	}

	/// Every Windows-1252 glyph of the menu font at the menu's sizes and some subpixel shifts,
	/// hashed like a C program on stb_truetype.h v1.26 (clang, arm64) does.
	#[test]
	fn glyphs_match_c() {
		let Some(ttf) = menu_font() else {
			return;
		};
		let f = FontInfo::new(ttf.clone(), get_font_offset_for_index(&ttf, 0).unwrap() as usize).unwrap();
		let sizes = [10.0, 12.0, 13.0, 14.0, 16.0, 18.666666f32, 20.0, 24.0, 32.0, 48.0];
		let shifts = [0.0, 0.1, 0.25, 0.33333334f32, 0.5, 0.7, 0.9, 0.99];
		let mut total: u64 = 0xcbf29ce484222325;
		let mut h = Fnv::new();
		let v = f.get_v_metrics();
		for x in [v.ascent, v.descent, v.line_gap] {
			h.u32(x as u32);
		}
		for c1 in 0x20..=0xffu8 {
			let m = f.get_codepoint_h_metrics(cp1252(c1) as u32);
			h.u32(m.advance_width as u32);
			h.u32(m.left_side_bearing as u32);
			for c2 in 0x20..=0xffu8 {
				h.u32(f.get_codepoint_kern_advance(cp1252(c1) as u32, cp1252(c2) as u32) as u32);
			}
		}
		println!("metrics {:016x}", h.0);
		total ^= h.0;
		for &size in &sizes {
			let scale = f.scale_for_pixel_height(size);
			for &shift in &shifts {
				let mut h = Fnv::new();
				h.u32(scale.to_bits());
				for c in 0x20..=0xffu8 {
					let cp = cp1252(c);
					let (x0, y0, x1, y1) = get_codepoint_bitmap_box_subpixel(&f, cp, scale, scale, shift, 0.0);
					for x in [x0, y0, x1, y1] {
						h.u32(x as u32);
					}
					let (gw, gh) = (x1 - x0, y1 - y0);
					if gw > 0 && gh > 0 {
						let mut bm = vec![0u8; (gw * gh) as usize];
						make_codepoint_bitmap_subpixel(&f, &mut bm, gw, gh, gw, scale, scale, shift, 0.0, cp);
						let mut b = Fnv::new();
						for &p in &bm {
							b.byte(p);
						}
						for byte in b.0.to_le_bytes() {
							h.byte(byte);
						}
					}
				}
				println!("size {size} shift {shift} {:016x}", h.0);
				total = total.wrapping_mul(31).wrapping_add(h.0);
			}
		}
		println!("total {total:016x}");
		assert_eq!(total, 0xaf7f9c9f3340fb55);
	}
}
