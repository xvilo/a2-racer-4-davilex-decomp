#include "platform/sys.h"

#include <algorithm>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

#include <SDL.h>

#include "gfx/png.h"
#include "platform/gl.h"

static SDL_Window *window;
/* OpenGL when available (needed by the race); else an SDL renderer for the menus. */
static SDL_GLContext gl_context;
static GLuint screen_texture;
static SDL_Renderer *renderer;
static SDL_Texture *texture;
static bool headless;
/* Mouse state survives across SysInput structs: the game polls from many nested loops. */
static int mouse_x, mouse_y;
static bool mouse_down;
/* A quit request stays set: menus nested several deep must all see it. */
static bool quit_requested;

/* Scripted input for tests: one command per line, run in order as time passes.
 *   wait <ms>         pause the script
 *   hold <name> <ms>  hold a key down for a while (for keyispressed)
 *   key <name>        press and release a key (enter, escape, up, down, left, right,
 *                     tab, space, backspace, f1..f12, or a letter/digit)
 *   text <string>     type text
 *   click <x> <y>     left click at an 800x600 position
 *   shot <file.png>   save the screen
 *   glshot <file.png> save the next 3D frame as drawn
 *   quit              close the window
 */
static std::vector<std::string> script_lines;
static size_t script_pos;
static uint32_t script_resume;
static SysScreenshotFn screenshot_fn;
static SDL_Scancode fake_key = SDL_SCANCODE_UNKNOWN; /* held for keyispressed */
static uint32_t fake_key_until;
static std::string glshot_path;
static SDL_Scancode held_key[4];
static uint32_t held_until[4];

void sys_set_screenshot(SysScreenshotFn fn)
{
	screenshot_fn = fn;
}

static void load_script(const std::string &path)
{
	FILE *f = fopen(path.c_str(), "r");
	char line[512];
	if (!f) {
		SDL_Log("script: cannot open %s", path.c_str());
		return;
	}
	while (fgets(line, sizeof line, f)) {
		line[strcspn(line, "\r\n")] = 0;
		if (line[0] && line[0] != '#')
			script_lines.emplace_back(line);
	}
	fclose(f);
}

static SDL_Keycode key_by_name(const char *n)
{
	static const struct { const char *name; SDL_Keycode key; } keys[] = {
		{ "enter", SDLK_RETURN }, { "escape", SDLK_ESCAPE }, { "up", SDLK_UP },
		{ "down", SDLK_DOWN }, { "left", SDLK_LEFT }, { "right", SDLK_RIGHT },
		{ "tab", SDLK_TAB }, { "space", SDLK_SPACE }, { "backspace", SDLK_BACKSPACE },
	};
	for (const auto &k : keys) {
		if (!strcmp(n, k.name))
			return k.key;
	}
	if (n[0] == 'f' && n[1] >= '1' && n[1] <= '9')
		return SDLK_F1 + atoi(n + 1) - 1;
	return (SDL_Keycode)(unsigned char)n[0];
}

static void push_key(SDL_Keycode k)
{
	SDL_Event e = {};
	e.type = SDL_KEYDOWN;
	e.key.keysym.sym = k;
	e.key.keysym.scancode = SDL_GetScancodeFromKey(k);
	fake_key = e.key.keysym.scancode;
	fake_key_until = SDL_GetTicks() + 100;
	SDL_PushEvent(&e);
	e.type = SDL_KEYUP;
	SDL_PushEvent(&e);
}

static void run_script()
{
	while (script_pos < script_lines.size() && SDL_GetTicks() >= script_resume) {
		const char *cmd = script_lines[script_pos++].c_str();
		SDL_Event e = {};
		if (!strncmp(cmd, "wait ", 5)) {
			script_resume = SDL_GetTicks() + (uint32_t)atoi(cmd + 5);
		}
		else if (!strncmp(cmd, "hold ", 5)) {
			char name[32] = "";
			int ms = 0;
			sscanf(cmd + 5, "%31s %d", name, &ms);
			for (int i = 0; i < 4; i++) {
				if (held_until[i] <= SDL_GetTicks()) {
					held_key[i] = SDL_GetScancodeFromKey(key_by_name(name));
					held_until[i] = SDL_GetTicks() + (uint32_t)ms;
					break;
				}
			}
		}
		else if (!strncmp(cmd, "key ", 4)) {
			push_key(key_by_name(cmd + 4));
			script_resume = SDL_GetTicks() + 50;
			break;
		}
		else if (!strncmp(cmd, "text ", 5)) {
			e.type = SDL_TEXTINPUT;
			SDL_strlcpy(e.text.text, cmd + 5, sizeof e.text.text);
			SDL_PushEvent(&e);
		}
		else if (!strncmp(cmd, "click ", 6)) {
			int x = 0, y = 0;
			sscanf(cmd + 6, "%d %d", &x, &y);
			/* Already in screen coordinates: no mapping (see sys_poll). */
			e.type = SDL_MOUSEBUTTONDOWN;
			e.button.button = SDL_BUTTON_LEFT;
			e.button.which = SDL_TOUCH_MOUSEID;
			e.button.x = x;
			e.button.y = y;
			SDL_PushEvent(&e);
			e.type = SDL_MOUSEBUTTONUP;
			SDL_PushEvent(&e);
			script_resume = SDL_GetTicks() + 50;
			break;
		}
		else if (!strncmp(cmd, "shot ", 5)) {
			if (screenshot_fn)
				screenshot_fn(cmd + 5);
		}
		else if (!strncmp(cmd, "glshot ", 7)) {
			glshot_path = cmd + 7;
		}
		else if (!strcmp(cmd, "quit")) {
			e.type = SDL_QUIT;
			SDL_PushEvent(&e);
		}
	}
}

bool sys_init(const char *title, const SysOptions &opt)
{
	headless = opt.hidden;
	if (!opt.script.empty())
		load_script(opt.script);
	if (headless)
		return SDL_Init(SDL_INIT_TIMER) == 0;
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER) != 0) {
		SDL_Log("SDL_Init: %s", SDL_GetError());
		return false;
	}
	int scale = opt.scale > 0 ? opt.scale : 1;
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		SCREEN_W * scale, SCREEN_H * scale, SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);
	if (window) {
		gl_context = SDL_GL_CreateContext(window);
		if (gl_context && !gl_load()) {
			SDL_GL_DeleteContext(gl_context);
			gl_context = nullptr;
		}
		if (!gl_context) {
			SDL_Log("no OpenGL (%s); the race needs it, the menus work without", SDL_GetError());
			SDL_DestroyWindow(window);
			window = nullptr;
		}
	}
	SDL_StopTextInput(); /* only while an edit box is open */
	if (gl_context) {
		SDL_GL_SetSwapInterval(1);
		int depth = 0;
		SDL_GL_GetAttribute(SDL_GL_DEPTH_SIZE, &depth);
		if (depth < 16)
			SDL_Log("OpenGL: only a %d-bit depth buffer", depth);
		glGenTextures(1, &screen_texture);
		glBindTexture(GL_TEXTURE_2D, screen_texture);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, SCREEN_W, SCREEN_H, 0, GL_RGBA, GL_UNSIGNED_BYTE,
			nullptr);
		return true;
	}
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		SCREEN_W * scale, SCREEN_H * scale, SDL_WINDOW_RESIZABLE);
	if (!window) {
		SDL_Log("SDL_CreateWindow: %s", SDL_GetError());
		return false;
	}
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
	if (!renderer)
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
	if (!renderer) {
		SDL_Log("SDL_CreateRenderer: %s", SDL_GetError());
		return false;
	}
	/* Keep the 4:3 picture and map mouse coordinates back to 800x600. */
	SDL_RenderSetLogicalSize(renderer, SCREEN_W, SCREEN_H);
	texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STREAMING,
		SCREEN_W, SCREEN_H);
	return texture != nullptr;
}

void sys_shutdown()
{
	if (gl_context) {
		glDeleteTextures(1, &screen_texture);
		SDL_GL_DeleteContext(gl_context);
	}
	if (texture)
		SDL_DestroyTexture(texture);
	if (renderer)
		SDL_DestroyRenderer(renderer);
	if (window)
		SDL_DestroyWindow(window);
	SDL_Quit();
}

/* The 4:3 picture's place in a w x h window (letterboxed). */
static SDL_Rect fit_4_3(int w, int h)
{
	SDL_Rect r;
	if (w * SCREEN_H > h * SCREEN_W) {
		r.h = h;
		r.w = h * SCREEN_W / SCREEN_H;
	}
	else {
		r.w = w;
		r.h = w * SCREEN_H / SCREEN_W;
	}
	r.x = (w - r.w) / 2;
	r.y = (h - r.h) / 2;
	return r;
}

/* Window coordinates to 800x600. */
static void map_mouse(int &x, int &y)
{
	if (!gl_context)
		return; /* SDL_RenderSetLogicalSize already did it */
	int w, h;
	SDL_GetWindowSize(window, &w, &h);
	SDL_Rect r = fit_4_3(w, h);
	x = r.w ? (x - r.x) * SCREEN_W / r.w : 0;
	y = r.h ? (y - r.y) * SCREEN_H / r.h : 0;
}

void sys_present(const uint32_t *rgba)
{
	if (headless)
		return;
	if (!gl_context) {
		SDL_UpdateTexture(texture, nullptr, rgba, SCREEN_W * 4);
		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, texture, nullptr, nullptr);
		SDL_RenderPresent(renderer);
		return;
	}
	int w, h;
	SDL_GL_GetDrawableSize(window, &w, &h);
	glViewport(0, 0, w, h);
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	SDL_Rect r = fit_4_3(w, h);
	glViewport(r.x, r.y, r.w, r.h);
	glDisable(GL_DEPTH_TEST);
	glDisable(GL_CULL_FACE);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, SCREEN_W, SCREEN_H, 0, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, screen_texture);
	glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
	glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
	glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, SCREEN_W, SCREEN_H, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0);
	glVertex2f(0, 0);
	glTexCoord2f(1, 0);
	glVertex2f(SCREEN_W, 0);
	glTexCoord2f(1, 1);
	glVertex2f(SCREEN_W, SCREEN_H);
	glTexCoord2f(0, 1);
	glVertex2f(0, SCREEN_H);
	glEnd();
	glDisable(GL_TEXTURE_2D);
	SDL_GL_SwapWindow(window);
}

bool sys_gl_begin_frame(int &w, int &h)
{
	if (headless || !gl_context)
		return false;
	int ww, wh;
	SDL_GL_GetDrawableSize(window, &ww, &wh);
	glViewport(0, 0, ww, wh);
	glDisable(GL_SCISSOR_TEST);
	glClearColor(0, 0, 0, 1);
	glDepthMask(GL_TRUE);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	SDL_Rect r = fit_4_3(ww, wh);
	glViewport(r.x, r.y, r.w, r.h);
	glScissor(r.x, r.y, r.w, r.h);
	glEnable(GL_SCISSOR_TEST);
	w = r.w;
	h = r.h;
	return true;
}

void sys_gl_end_frame()
{
	if (headless || !gl_context)
		return;
	glDisable(GL_SCISSOR_TEST);
	if (!glshot_path.empty()) {
		int ww, wh;
		SDL_GL_GetDrawableSize(window, &ww, &wh);
		SDL_Rect r = fit_4_3(ww, wh);
		std::vector<uint32_t> px((size_t)r.w * r.h), flipped(px.size());
		glPixelStorei(GL_PACK_ALIGNMENT, 4);
		glReadPixels(r.x, r.y, r.w, r.h, GL_RGBA, GL_UNSIGNED_BYTE, px.data());
		for (int y = 0; y < r.h; y++)
			memcpy(&flipped[(size_t)y * r.w], &px[(size_t)(r.h - 1 - y) * r.w], (size_t)r.w * 4);
		for (uint32_t &p : flipped)
			p |= 0xff000000u; /* opaque: RGBA bytes, A last */
		png_write_rgba(glshot_path.c_str(), flipped.data(), r.w, r.h);
		glshot_path.clear();
	}
	SDL_GL_SwapWindow(window);
}

static int map_key(SDL_Keycode k)
{
	switch (k) {
	case SDLK_ESCAPE: return KEY_ESCAPE;
	case SDLK_RETURN:
	case SDLK_KP_ENTER: return KEY_ENTER;
	case SDLK_UP: return KEY_UP;
	case SDLK_DOWN: return KEY_DOWN;
	case SDLK_LEFT: return KEY_LEFT;
	case SDLK_RIGHT: return KEY_RIGHT;
	default: return k > 0 && k < 128 ? (int)k : KEY_NONE;
	}
}

void sys_poll(SysInput &in)
{
	in.mouse_clicked = false;
	in.mouse_pressed = false;
	in.key = KEY_NONE;
	in.text.clear();
	in.backspaces = 0;
	if (headless)
		return;
	run_script();
	SDL_Event e;
	while (SDL_PollEvent(&e)) {
		switch (e.type) {
		case SDL_QUIT:
			quit_requested = true;
			break;
		case SDL_MOUSEMOTION:
			mouse_x = e.motion.x;
			mouse_y = e.motion.y;
			map_mouse(mouse_x, mouse_y);
			break;
		case SDL_MOUSEBUTTONDOWN:
		case SDL_MOUSEBUTTONUP:
			if (e.button.button == SDL_BUTTON_LEFT) {
				mouse_x = e.button.x;
				mouse_y = e.button.y;
				/* Scripted clicks come in screen coordinates already. */
				if (e.button.which != SDL_TOUCH_MOUSEID)
					map_mouse(mouse_x, mouse_y);
				mouse_down = e.type == SDL_MOUSEBUTTONDOWN;
				(mouse_down ? in.mouse_pressed : in.mouse_clicked) = true;
			}
			break;
		case SDL_KEYDOWN:
			in.key = map_key(e.key.keysym.sym);
			if (e.key.keysym.sym == SDLK_BACKSPACE)
				in.backspaces++;
			break;
		case SDL_TEXTINPUT:
			/* UTF-8 to Windows-1252 (Latin-1 range), as the game's text is. */
			for (const unsigned char *p = (const unsigned char *)e.text.text; *p; p++) {
				if (*p < 0x80)
					in.text += (char)*p;
				else if ((*p & 0xE0) == 0xC0 && p[1]) {
					in.text += (char)(((*p & 0x1F) << 6) | (p[1] & 0x3F));
					p++;
				}
			}
			break;
		}
	}
	in.mouse_x = mouse_x;
	in.mouse_y = mouse_y;
	in.mouse_down = mouse_down;
	in.quit = quit_requested;
}

/* Windows virtual-key codes to SDL scancodes, for the keys the game asks about. */
static SDL_Scancode vk_to_scancode(int vk)
{
	if (vk >= 'A' && vk <= 'Z')
		return (SDL_Scancode)(SDL_SCANCODE_A + vk - 'A');
	if (vk >= '1' && vk <= '9')
		return (SDL_Scancode)(SDL_SCANCODE_1 + vk - '1');
	if (vk >= 0x70 && vk <= 0x7b)
		return (SDL_Scancode)(SDL_SCANCODE_F1 + vk - 0x70);
	if (vk >= 0x61 && vk <= 0x69)
		return (SDL_Scancode)(SDL_SCANCODE_KP_1 + vk - 0x61);
	switch (vk) {
	case '0': return SDL_SCANCODE_0;
	case 0x60: return SDL_SCANCODE_KP_0;
	case 0x08: return SDL_SCANCODE_BACKSPACE;
	case 0x09: return SDL_SCANCODE_TAB;
	case 0x0d: return SDL_SCANCODE_RETURN;
	case 0x10: return SDL_SCANCODE_LSHIFT;
	case 0x11: return SDL_SCANCODE_LCTRL;
	case 0x12: return SDL_SCANCODE_LALT;
	case 0x1b: return SDL_SCANCODE_ESCAPE;
	case 0x20: return SDL_SCANCODE_SPACE;
	case 0x25: return SDL_SCANCODE_LEFT;
	case 0x26: return SDL_SCANCODE_UP;
	case 0x27: return SDL_SCANCODE_RIGHT;
	case 0x28: return SDL_SCANCODE_DOWN;
	default: return SDL_SCANCODE_UNKNOWN;
	}
}

SysPad sys_pad()
{
	static SDL_GameController *pad = nullptr;
	static SDL_Joystick *stick = nullptr;
	SysPad p;
	if (headless || !SDL_WasInit(SDL_INIT_JOYSTICK))
		return p;
	if ((pad && !SDL_GameControllerGetAttached(pad)) || (stick && !SDL_JoystickGetAttached(stick))) {
		if (pad)
			SDL_GameControllerClose(pad);
		if (stick)
			SDL_JoystickClose(stick);
		pad = nullptr, stick = nullptr;
	}
	if (!pad && !stick) {
		for (int i = 0; i < SDL_NumJoysticks() && !pad && !stick; i++) {
			if (SDL_IsGameController(i))
				pad = SDL_GameControllerOpen(i);
			else
				stick = SDL_JoystickOpen(i);
		}
	}
	auto axis = [](int v) { return std::clamp((float)v / 32767.0f, -1.0f, 1.0f); };
	if (pad) {
		p.present = true;
		p.steer = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX));
		p.throttle = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT));
		p.brake = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT));
		/* Or the face buttons for the pedals. */
		if (SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_A))
			p.throttle = 1;
		if (SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_X))
			p.brake = 1;
		p.button[0] = SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER) ||
			SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_Y);
		p.button[1] = SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_B) ||
			SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_LEFTSHOULDER);
		p.button[2] = SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_LEFTSTICK);
	}
	else if (stick) {
		/* A joystick or wheel: x steers, y forward accelerates and back brakes (a wheel's
		 * pedals often come as the next two axes). */
		p.present = true;
		int axes = SDL_JoystickNumAxes(stick);
		p.steer = axes > 0 ? axis(SDL_JoystickGetAxis(stick, 0)) : 0;
		float y = axes > 1 ? axis(SDL_JoystickGetAxis(stick, 1)) : 0;
		p.throttle = std::max(0.0f, -y);
		p.brake = std::max(0.0f, y);
		for (int b = 0; b < 3; b++)
			p.button[b] = SDL_JoystickNumButtons(stick) > b && SDL_JoystickGetButton(stick, b);
	}
	return p;
}

bool keyispressed(int vk)
{
	if (headless)
		return false;
	SDL_PumpEvents();
	const Uint8 *state = SDL_GetKeyboardState(nullptr);
	SDL_Scancode sc = vk_to_scancode(vk);
	if (sc == SDL_SCANCODE_UNKNOWN)
		return false;
	if (sc == fake_key && SDL_GetTicks() < fake_key_until)
		return true;
	for (int i = 0; i < 4; i++) {
		if (sc == held_key[i] && SDL_GetTicks() < held_until[i])
			return true;
	}
	if (vk == 0x10)
		return state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT];
	if (vk == 0x11)
		return state[SDL_SCANCODE_LCTRL] || state[SDL_SCANCODE_RCTRL];
	if (vk == 0x12)
		return state[SDL_SCANCODE_LALT] || state[SDL_SCANCODE_RALT];
	if (vk == 0x0d)
		return state[SDL_SCANCODE_RETURN] || state[SDL_SCANCODE_KP_ENTER];
	return state[sc] != 0;
}

bool sys_quit_requested()
{
	return quit_requested;
}

bool sys_open_url(const std::string &url)
{
	return SDL_OpenURL(url.c_str()) == 0;
}

bool sys_scripted()
{
	return !script_lines.empty();
}

void sys_text_input(bool on)
{
	if (headless)
		return;
	if (on)
		SDL_StartTextInput();
	else
		SDL_StopTextInput();
}

uint32_t sys_ticks()
{
	return SDL_GetTicks();
}

void sys_sleep(uint32_t ms)
{
	SDL_Delay(ms);
}
