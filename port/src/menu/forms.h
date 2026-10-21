/* The menu's screens as the original builds them: a form from Menu.exe's DFM, its labels'
 * texts, fonts and places as MenuCaps.ini sets them, and its GDI buttons (TGDIButton,
 * TGDIRadioButton, TGDICheckBox) drawn from MenuRcs with the graphics their definitions
 * name: <prefix>_up/_hi (hovered)/_do (down)/_fo (focused)/_di (disabled).tga, and
 * <prefix>_re.bmp, the area that takes clicks. The screen's background is the form class
 * name's first eight letters after "Tfrm" (TfrmMainScreen -> mainscre.bmp). */
#pragma once

#include <functional>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "menu/canvas.h"
#include "res/image.h"

class DelphiProgram;
class NamedArchive;
class IniFile;
struct DfmObject;
struct SysInput;

struct MenuResources {
	const DelphiProgram *prog = nullptr;
	const NamedArchive *rcs = nullptr;
	const IniFile *caps = nullptr;
	const TrueType *font = nullptr;
	std::map<std::string, std::shared_ptr<Image>> cache;
	/* A picture from MenuRcs (name with extension); null if missing. */
	std::shared_ptr<Image> image(const std::string &name);
};

struct Control {
	enum Kind { OTHER, IMAGE, LABEL, BUTTON, RADIO, CHECK, GRAPHIC } kind = OTHER;
	std::string name, cls;
	int x = 0, y = 0, w = 0, h = 0;
	bool visible = true, enabled = true, checked = false;
	std::string caption;
	float font_px = 16;
	uint32_t colour = 0xffffffff;
	bool centre = false, wrap = false;
	std::string definition, on_click;
	/* Graphics: up, hover, down, focus, disabled; and the click region. */
	std::shared_ptr<Image> look[5], region, picture;
};

class Form {
public:
	std::string cls;
	std::shared_ptr<Image> background;
	std::vector<Control> controls;
	std::map<std::string, std::function<void()>> handlers;
	bool closed = false;

	/* Builds the form of class cls; button definitions get the graphic prefixes given
	 * (definition name -> prefix), as the forms' FormCreate code assigns them. */
	bool load(MenuResources &res, const std::string &cls, const std::map<std::string, std::string> &prefixes);
	Control *get(const std::string &name);
	void set_graphic(MenuResources &res, const std::string &control, const std::string &name);
	void draw(Canvas &cv, const MenuResources &res) const;
	/* Mouse and keys: hovering, pressing, clicking (runs the control's handler). */
	void input(const SysInput &in);

private:
	int hover = -1, pressed = -1;
	bool hit(const Control &c, int x, int y) const;
};
