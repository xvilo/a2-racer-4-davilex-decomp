/* A port-only preview: flies along a stage's road, to check the stage files and the 3D
 * code (--race-view <stage>). */
#pragma once

#include <string>

class NamedArchive;

int race_view(const std::string &data_dir, const NamedArchive &rcs, int stage, int league);
