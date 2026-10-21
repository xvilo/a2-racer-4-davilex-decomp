/* Platform layer: the window, presenting the screen, input and time. Takes the place of
 * the Win32 message loops, DirectDraw and DirectInput in the menu and the race. */
#pragma once

#include <cstdint>
#include <string>

/* The menu's screen (800x600); the race draws at the window's size. */
constexpr int SCREEN_W = 800;
constexpr int SCREEN_H = 600;

enum {
	KEY_NONE = 0,
	KEY_ESCAPE = 27,
	KEY_ENTER = 13,
	KEY_SPACE = 32,
	KEY_UP = 0x100,
	KEY_DOWN,
	KEY_LEFT,
	KEY_RIGHT,
};

struct SysInput {
	int mouse_x = 0, mouse_y = 0;  /* in 800x600 screen coordinates */
	bool mouse_down = false;       /* left button held */
	bool mouse_pressed = false;    /* left button went down since the last poll */
	bool mouse_clicked = false;    /* left button released since the last poll */
	int key = KEY_NONE;            /* last key pressed since the last poll, KEY_* or ASCII */
	std::string text;              /* characters typed since the last poll (Windows-1252) */
	int backspaces = 0;            /* backspace presses since the last poll */
	bool quit = false;             /* window closed */
};

struct SysOptions {
	int scale = 1;                 /* initial window size = 800x600 * scale */
	bool hidden = false;           /* no window (screenshots, tests) */
	std::string script;            /* scripted input, see sys.cpp (tests) */
};

bool sys_init(const char *title, const SysOptions &opt);
void sys_shutdown();
/* Shows an 800x600 picture, one 32-bit pixel per entry with bytes R, G, B, A in memory. */
void sys_present(const uint32_t *rgba);
/* A 3D frame (the race): clears the window and sets the viewport to the 4:3 picture area
 * (letterboxed); w and h receive its size in pixels. False without OpenGL. */
bool sys_gl_begin_frame(int &w, int &h);
/* Shows the frame (saving it first when the script asked for a "glshot"). */
void sys_gl_end_frame();
/* Gathers input since the last call. */
void sys_poll(SysInput &in);
/* The window was closed (or the process asked to stop); stays true from then on. */
bool sys_quit_requested();
uint32_t sys_ticks();
void sys_sleep(uint32_t ms);
/* Whether a key (Windows virtual-key code, as the game stores them) is held now. */
bool keyispressed(int vk);
/* Opens a web address in the system's browser. */
bool sys_open_url(const std::string &url);
/* Whether a test script drives the input. */
bool sys_scripted();
/* Typed characters arrive in SysInput::text while text input is on. */
void sys_text_input(bool on);
/* The picture the script's "shot" command saves; set by the game. */
using SysScreenshotFn = void (*)(const char *path);
void sys_set_screenshot(SysScreenshotFn fn);
