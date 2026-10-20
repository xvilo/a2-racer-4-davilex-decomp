# A2 Racer 4 port

A C++ rewrite of **A2 Racer: De politie slaat terug!** (Davilex, 2000) on SDL2 and OpenGL, for Windows, Linux and macOS. It is written from the decompiled programs in `../decompiled/`; names follow the original sources (`Hud_Manager.cpp`, `TfrmMainScreen.FormShow`).

The game's own data is not included. Point the port at the original CD image, or at a copy of its files.

## Status

Early: the window, the CD image and the resource archives work, and the main menu's background shows. The menu (a Delphi program in the original) and the race follow.

## Download

Builds of the latest commit are on the [latest release](https://github.com/xvilo/a2-racer-4-davilex-decomp/releases/tag/latest), and every version tag has its own release: Windows (x86-64), macOS (one universal executable for Apple Silicon and Intel) and Linux (x86-64, glibc 2.35 or later, e.g. Ubuntu 22.04+). Each is a single executable with SDL built in.

Put `a2racer4` next to the CD image (`A2RACER4.bin` or `.iso`) and start it, drag the image onto it, or run `a2racer4 --data /path/to/A2RACER4.bin`. A folder with a copy of the CD's files works too. The first start unpacks the CD's `Data` folder into the user's data folder (`%APPDATA%\Davilex\A2 Racer 4\disc` on Windows, `~/.local/share/Davilex/A2 Racer 4/disc` on Linux). The macOS build isn't notarised: run `xattr -dr com.apple.quarantine /path/to/a2racer4` once after unpacking.

## Build

You need CMake 3.16 or later, a C++17 compiler and SDL2. OpenGL is loaded through SDL at run time.

```bash
# Debian/Ubuntu: sudo apt install cmake libsdl2-dev
# macOS:         brew install cmake sdl2
cmake -S port -B port/build
cmake --build port/build
port/build/a2racer4 --data /path/to/A2RACER4.bin
```

For a self-contained executable, build SDL2 statically first: `tools/build_static_sdl.sh deps`, then configure with `-DCMAKE_PREFIX_PATH=$PWD/deps` (what the releases do).

| Option | Does |
|---|---|
| `--data <dir or image>` | Where the game files are (also `A2_DATA`): the CD image (`.bin` with raw 2352-byte sectors, or `.iso`), a copy of the CD, or its `Data` folder |
| `--save <dir>` | Where options and players go. Default: the user's data folder |
| `--scale N` | Opens the window at N × 800×600. The window can be resized freely and keeps 4:3 |
| `--screenshot file.png` | Draws the main menu, saves it and exits, without a window |
| `--script file` | Scripted input for testing: keys, text, clicks and screenshots on a timeline (see `src/platform/sys.cpp`) |

## Layout

| Path | Contents |
|---|---|
| `src/main.cpp` | Entry point; takes the launcher's place (A2Racer4.exe) |
| `src/platform/` | SDL2: window, presenting the screen, OpenGL, input, time |
| `src/res/` | The CD image, the resource archives and the picture formats (TGA, BMP, PCX) |
| `src/gfx/` | PNG writer (screenshots) |
