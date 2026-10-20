/* Writes PNG files (screenshots for testing), without a compression library: the image
 * data goes into stored deflate blocks. */
#pragma once

#include <cstdint>

/* An image of w x h pixels, 4 bytes each (R, G, B, A) in memory; false on failure. */
bool png_write_rgba(const char *path, const uint32_t *rgba, int w, int h);
