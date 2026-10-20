/* Reading the game straight from its CD image: a raw .bin (2352-byte sectors, Mode 1 or
 * Mode 2 XA) or an .iso (2048-byte sectors). The disc's Data folder is unpacked once into
 * a folder, which then serves as the data folder. */
#pragma once

#include <string>

/* Whether the path names a CD image (by its extension). */
bool is_disc_image(const std::string &path);
/* Unpacks the image's Data folder into out_dir (created if needed); an error message, or
 * empty on success. Does nothing when out_dir already holds the game. */
std::string disc_image_unpack(const std::string &image, const std::string &out_dir);
