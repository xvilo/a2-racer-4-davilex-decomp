#include "menu/forms.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>

#include "menu/delphi.h"
#include "menu/dfm.h"
#include "platform/sys.h"
#include "res/archive.h"
#include "xvga/inifile.h"

static std::string lower(std::string s)
{
	for (char &c : s)
		c = (char)tolower((unsigned char)c);
	return s;
}

/* A Delphi TColor / COLORREF (0x00BBGGRR) as RGBA. */
static uint32_t colorref(long long v)
{
	return rgba((uint8_t)(v & 0xff), (uint8_t)(v >> 8 & 0xff), (uint8_t)(v >> 16 & 0xff));
}

std::shared_ptr<Image> MenuResources::image(const std::string &name)
{
	std::string key = lower(name);
	auto it = cache.find(key);
	if (it != cache.end())
		return it->second;
	std::shared_ptr<Image> img;
	std::vector<uint8_t> bytes;
	if (rcs && rcs->read(key, bytes)) {
		img = std::make_shared<Image>();
		if (!decode_image(key.c_str(), bytes, *img))
			img.reset();
		/* BMPs have no alpha: opaque. */
		else if (key.size() > 4 && key.substr(key.size() - 4) == ".bmp")
			for (uint32_t &p : img->pixels)
				p |= 0xff000000u;
	}
	cache[key] = img;
	return img;
}

bool Form::load(MenuResources &res, const std::string &klass, const std::map<std::string, std::string> &prefixes)
{
	cls = klass;
	auto dfm = load_form(*res.prog, klass);
	if (!dfm)
		return false;
	std::string short_name = lower(klass.substr(klass.size() > 4 ? 4 : 0)).substr(0, 8);
	/* Dialogs (TfrmCoolDialog.virtual_0e4) name their picture the same way but take a
	 * .tga, some a shared one, and take its size. */
	static const std::map<std::string, std::string> dialog_pictures = {
		{ "TfrmDeletePlayer", "popempty" }, { "TfrmDoubleKeys", "popempty" }, { "TfrmInternetDlg", "popempty" },
	};
	auto dp = dialog_pictures.find(klass);
	std::shared_ptr<Image> picture = res.image((dp != dialog_pictures.end() ? dp->second : short_name) + ".tga");
	background = res.image(short_name + ".bmp");
	/* Every component with its place on the form: a panel's children are placed in it. */
	std::vector<std::pair<DfmObject *, std::pair<int, int>>> all;
	std::function<void(DfmObject *, int, int)> walk = [&](DfmObject *o, int ox, int oy) {
		all.push_back({ o, { ox, oy } });
		bool box = o != dfm.get() && (o->cls == "TPanel" || o->cls == "TGroupBox");
		for (auto &c : o->children)
			walk(c.get(), box ? ox + o->get_int("Left") : ox, box ? oy + o->get_int("Top") : oy);
	};
	walk(dfm.get(), 0, 0);
	std::vector<std::pair<int, int>> offset;
	w = dfm->get_int("ClientWidth", 800);
	h = dfm->get_int("ClientHeight", 600);
	/* Dialogs are the TfrmCoolDialog family (TBalloonForm's too); screens fill it. */
	dialog = false;
	for (std::string k = klass; !k.empty() && !dialog; k = res.prog->parent(k))
		dialog = k == "TfrmCoolDialog" || k == "TBalloonForm";
	if (dialog && picture) {
		background = picture;
		w = picture->width;
		h = picture->height;
	}
	if (dialog) {
		x = (800 - w) / 2;
		y = (600 - h) / 2;
	}
	/* Button definitions (TGDIButtonDefinition) of this form and of the data module. */
	std::map<std::string, std::string> defs = prefixes;
	for (auto &[o, at] : all) {
		Control c;
		c.name = o->name;
		c.cls = o->cls;
		if (o == dfm.get())
			continue;
		if (o->cls == "TImage")
			c.kind = Control::IMAGE;
		else if (o->cls == "TLabel" || o->cls == "TDaviLinkLabel")
			c.kind = Control::LABEL;
		else if (o->cls == "TGDIButton")
			c.kind = Control::BUTTON;
		else if (o->cls == "TGDIRadioButton")
			c.kind = Control::RADIO;
		else if (o->cls == "TGDICheckBox")
			c.kind = Control::CHECK;
		else if (o->cls == "TGDIGraphic")
			c.kind = Control::GRAPHIC;
		else if (o->cls == "TEdit")
			c.kind = Control::EDIT;
		else
			continue;
		c.x = o->get_int("Left");
		c.y = o->get_int("Top");
		c.w = o->get_int("Width");
		c.h = o->get_int("Height");
		c.visible = o->get_bool("Visible", true);
		c.enabled = o->get_bool("Enabled", true);
		c.checked = o->get_bool("Checked", false);
		c.caption = o->get_str("Caption");
		c.definition = o->get_str("Definition");
		/* "Data.gdfBtnNext": a definition in the data module. */
		size_t dot = c.definition.rfind('.');
		if (dot != std::string::npos)
			c.definition = c.definition.substr(dot + 1);
		c.on_click = o->get_str("OnClick");
		c.max_length = o->get_int("MaxLength", 0);
		if (const DfmValue *bc = o->prop("Color"); bc && bc->kind == DfmValue::INT)
			c.back = colorref(bc->i);
		if (c.kind == Control::EDIT) {
			c.caption.clear();
			c.font_px = 14;
			c.colour = rgba(0, 0, 0);
		}
		int fh = o->get_int("Font.Height", -13);
		c.font_px = (float)std::abs(fh);
		if (const DfmValue *fc = o->prop("Font.Color"))
			c.colour = fc->kind == DfmValue::INT ? colorref(fc->i) : rgba(255, 255, 255);
		c.wrap = o->get_bool("WordWrap", false);
		c.centre = o->get_str("Alignment") == "taCenter";
		/* Labels are given their text by the program: default to none. Labels named
		 * lblAnc... only mark where the program puts things. */
		if (c.kind == Control::LABEL && (c.caption == c.name || c.name.rfind("lblAnc", 0) == 0))
			c.caption.clear();
		controls.push_back(c);
		offset.push_back(at);
	}
	/* MenuCaps.ini: [DEFAULT] then [<form class>] <control>.<property>. */
	if (res.caps) {
		const IniFile &ini = *res.caps;
		uint32_t def_colour = colorref(strtoll(ini.get("DEFAULT", "FontColor", "0x00ffffff").c_str(), nullptr, 0));
		float def_px = ini.get_int("DEFAULT", "FontSize", 12) * 96.0f / 72;
		for (Control &c : controls) {
			if (c.kind == Control::LABEL) {
				c.colour = def_colour;
				c.font_px = def_px;
			}
			auto key = [&](const char *p) { return c.name + "." + p; };
			if (ini.has(cls, key("Caption")))
				c.caption = ini.get(cls, key("Caption"));
			if (ini.has(cls, key("Left")))
				c.x = ini.get_int(cls, key("Left"));
			if (ini.has(cls, key("Top")))
				c.y = ini.get_int(cls, key("Top"));
			if (ini.has(cls, key("FontSize")))
				c.font_px = ini.get_int(cls, key("FontSize")) * 96.0f / 72;
			if (ini.has(cls, key("FontColor")))
				c.colour = colorref(strtoll(ini.get(cls, key("FontColor")).c_str(), nullptr, 0));
		}
	}
	/* A dialog's OK button without a definition gets the plain OK one when shown
	 * (TGDIButton.SetDefinition with the data module's). */
	for (Control &c : controls)
		if (dialog && c.name == "btnOk1" && c.definition.empty())
			c.definition = "gdfBtnOkDlg";
	for (size_t i = 0; i < controls.size(); i++) {
		controls[i].x += x + offset[i].first;
		controls[i].y += y + offset[i].second;
	}
	for (Control &c : controls) {
		auto p = defs.find(c.definition);
		if (p == defs.end())
			continue;
		static const char *states[5] = { "_up", "_hi", "_do", "_fo", "_di" };
		for (int k = 0; k < 5; k++)
			c.look[k] = res.image(p->second + states[k] + ".tga");
		c.region = res.image(p->second + "_re.bmp");
		if (c.look[0]) {
			c.w = c.look[0]->width;
			c.h = c.look[0]->height;
		}
	}
	return true;
}

Control *Form::get(const std::string &name)
{
	for (Control &c : controls) {
		if (c.name == name)
			return &c;
	}
	return nullptr;
}

void Form::set_graphic(MenuResources &res, const std::string &control, const std::string &name)
{
	if (Control *c = get(control))
		c->picture = res.image(name);
}

bool Form::hit(const Control &c, int x, int y) const
{
	if (!c.visible || !c.enabled || x < c.x || y < c.y || x >= c.x + c.w || y >= c.y + c.h)
		return false;
	/* The region bitmap: the colour of its bottom left pixel is outside (Delphi's
	 * TransparentMode tmAuto), everything else inside. */
	if (c.region && x - c.x < c.region->width && y - c.y < c.region->height) {
		const Image &r = *c.region;
		uint32_t outside = r.pixels[(size_t)(r.height - 1) * r.width] & 0xffffff;
		return (r.pixels[(size_t)(y - c.y) * r.width + (x - c.x)] & 0xffffff) != outside;
	}
	return true;
}

void Form::draw(Canvas &cv, const MenuResources &res) const
{
	if (!dialog)
		cv.clear(rgba(0, 0, 0));
	if (background)
		cv.blit(*background, x, y);
	for (size_t i = 0; i < controls.size(); i++) {
		const Control &c = controls[i];
		if (!c.visible)
			continue;
		switch (c.kind) {
		case Control::IMAGE:
		case Control::GRAPHIC:
			if (c.picture)
				cv.blit(*c.picture, c.x, c.y);
			break;
		case Control::BUTTON:
		case Control::RADIO:
		case Control::CHECK: {
			int s = !c.enabled ? 4 : (int)i == pressed && (int)i == hover ? 2 : c.checked ? 2 : (int)i == hover ? 1 : 0;
			const Image *img = c.look[s] ? c.look[s].get() : c.look[0].get();
			if (img)
				cv.blit(*img, c.x, c.y);
			if (c.show_caption && res.font && !c.caption.empty())
				res.font->draw(cv, c.x + (int)((c.w - res.font->width(c.caption, c.font_px)) / 2), c.y + c.h - (int)c.font_px - 12,
					c.caption, c.font_px, c.colour);
			break;
		}
		case Control::LABEL:
			if (res.font && !c.caption.empty()) {
				std::vector<std::string> lines =
					c.wrap ? res.font->wrap(c.caption, c.font_px, (float)c.w) : std::vector<std::string>{ c.caption };
				float lh = c.font_px * 1.15f;
				for (size_t l = 0; l < lines.size(); l++) {
					int lx = c.x;
					if (c.centre)
						lx += (int)((c.w - res.font->width(lines[l], c.font_px)) / 2);
					res.font->draw(cv, lx, c.y + (int)(l * lh), lines[l], c.font_px, c.colour);
				}
			}
			break;
		case Control::EDIT: {
			cv.fill(c.x, c.y, c.w, c.h, c.back);
			std::string t = c.caption + ((sys_ticks() / 500) % 2 ? "_" : "");
			if (res.font)
				res.font->draw(cv, c.x + 3, c.y + (c.h - (int)c.font_px) / 2, t, c.font_px, c.colour);
			break;
		}
		default:
			break;
		}
	}
	for (const Extra &e : extras) {
		if (e.img)
			cv.blit(*e.img, e.x, e.y);
	}
}

std::string &Form::text()
{
	for (Control &c : controls) {
		if (c.kind == Control::EDIT)
			return c.caption;
	}
	static std::string none;
	return none;
}

void Form::input(const SysInput &in)
{
	for (Control &c : controls) {
		if (c.kind != Control::EDIT || !c.visible)
			continue;
		for (int k = 0; k < in.backspaces && !c.caption.empty(); k++)
			c.caption.pop_back();
		for (char ch : in.text) {
			if ((unsigned char)ch >= 32 && (c.max_length == 0 || (int)c.caption.size() < c.max_length))
				c.caption += ch;
		}
		break;
	}
	hover = -1;
	for (int i = (int)controls.size() - 1; i >= 0; i--) {
		const Control &c = controls[(size_t)i];
		if ((c.kind == Control::BUTTON || c.kind == Control::RADIO || c.kind == Control::CHECK) &&
			hit(c, in.mouse_x, in.mouse_y)) {
			hover = i;
			break;
		}
	}
	if (in.mouse_pressed)
		pressed = hover;
	if (in.mouse_clicked && getenv("A2_MENU_TRACE"))
		printf("menu: click at %d,%d on %s (pressed %d)\n", in.mouse_x, in.mouse_y,
			hover >= 0 ? controls[(size_t)hover].name.c_str() : "nothing", pressed);
	if (in.mouse_clicked) {
		if (pressed >= 0 && pressed == hover) {
			Control &c = controls[(size_t)pressed];
			if (c.kind == Control::RADIO) {
				for (Control &o : controls) {
					if (o.kind == Control::RADIO)
						o.checked = false;
				}
				c.checked = true;
			}
			else if (c.kind == Control::CHECK)
				c.checked = !c.checked;
			auto h = handlers.find(c.on_click.empty() ? c.name : c.on_click);
			if (getenv("A2_MENU_TRACE"))
				printf("menu: %s clicked %s (%s)%s\n", cls.c_str(), c.name.c_str(), c.on_click.c_str(),
					h == handlers.end() ? ": no handler" : "");
			if (h != handlers.end())
				h->second();
		}
		pressed = -1;
	}
}
