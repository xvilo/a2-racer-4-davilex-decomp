/* The menu (Menu.exe): its screens, and the hand-over to the race. */
#pragma once

#include <string>

class NamedArchive;

/* Runs the menu until the player quits; races are run from it. 0 on a normal exit. */
int menu_main(const std::string &data_dir, const NamedArchive &rcs, const std::string &screenshot);
