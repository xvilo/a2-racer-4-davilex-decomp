#include "menu/dfm.h"

#include <cmath>
#include <cstring>
#include <stdexcept>

#include "menu/delphi.h"

namespace {

struct Reader {
	const std::vector<uint8_t> &d;
	size_t p = 0;

	uint8_t u8()
	{
		if (p >= d.size())
			throw std::runtime_error("dfm: end of data");
		return d[p++];
	}
	uint8_t peek() const { return p < d.size() ? d[p] : 0; }
	std::string take(size_t n)
	{
		if (p + n > d.size())
			throw std::runtime_error("dfm: end of data");
		std::string s((const char *)&d[p], n);
		p += n;
		return s;
	}
	std::string sstr() { return take(u8()); }
	int32_t i32()
	{
		std::string b = take(4);
		return (int32_t)((uint8_t)b[0] | (uint8_t)b[1] << 8 | (uint8_t)b[2] << 16 | (uint32_t)(uint8_t)b[3] << 24);
	}
};

DfmValue value(Reader &r)
{
	DfmValue v;
	uint8_t t = r.u8();
	switch (t) {
	case 0:
		break;
	case 1: /* list */
		v.kind = DfmValue::LIST;
		while (r.peek() != 0)
			v.list.push_back(value(r));
		r.u8();
		break;
	case 2:
		v.kind = DfmValue::INT;
		v.i = (int8_t)r.u8();
		break;
	case 3: {
		v.kind = DfmValue::INT;
		std::string b = r.take(2);
		v.i = (int16_t)((uint8_t)b[0] | (uint8_t)b[1] << 8);
		break;
	}
	case 4:
		v.kind = DfmValue::INT;
		v.i = r.i32();
		break;
	case 5: { /* 80-bit extended */
		std::string b = r.take(10);
		unsigned long long mant = 0;
		for (int k = 7; k >= 0; k--)
			mant = mant << 8 | (uint8_t)b[(size_t)k];
		int exp = ((uint8_t)b[9] << 8 | (uint8_t)b[8]) & 0x7fff;
		bool neg = (uint8_t)b[9] & 0x80;
		v.kind = DfmValue::FLOAT;
		v.f = mant == 0 ? 0 : (neg ? -1 : 1) * (double)mant / 9223372036854775808.0 * std::ldexp(1.0, exp - 16383);
		break;
	}
	case 6: /* string */
	case 7: /* identifier */
		v.kind = t == 6 ? DfmValue::STRING : DfmValue::IDENT;
		v.s = r.sstr();
		break;
	case 8:
	case 9:
		v.kind = DfmValue::BOOL;
		v.i = t == 9;
		break;
	case 10: /* binary */
		v.kind = DfmValue::BINARY;
		v.s = r.take((size_t)r.i32());
		break;
	case 11: /* set */
		v.kind = DfmValue::SET;
		for (std::string m = r.sstr(); !m.empty(); m = r.sstr())
			v.set.push_back(m);
		break;
	case 12: /* long string */
		v.kind = DfmValue::STRING;
		v.s = r.take((size_t)r.i32());
		break;
	case 13: /* nil */
		break;
	case 14: /* collection: items of property lists */
		v.kind = DfmValue::COLLECTION;
		while (r.peek() != 0) {
			if (r.peek() >= 2 && r.peek() <= 4)
				value(r);
			if (r.u8() != 1)
				throw std::runtime_error("dfm: bad collection");
			DfmValue item;
			item.kind = DfmValue::LIST;
			while (r.peek() != 0) {
				DfmValue key;
				key.kind = DfmValue::IDENT;
				key.s = r.sstr();
				item.list.push_back(key);
				item.list.push_back(value(r));
			}
			r.u8();
			v.list.push_back(item);
		}
		r.u8();
		break;
	case 15: { /* single */
		v.kind = DfmValue::FLOAT;
		float f;
		std::string b = r.take(4);
		memcpy(&f, b.data(), 4);
		v.f = f;
		break;
	}
	case 16:
	case 17: { /* currency, date */
		v.kind = DfmValue::FLOAT;
		double f;
		std::string b = r.take(8);
		memcpy(&f, b.data(), 8);
		v.f = f;
		break;
	}
	case 18: { /* wide string: kept as Latin-1 */
		v.kind = DfmValue::STRING;
		size_t n = (size_t)r.i32();
		std::string b = r.take(2 * n);
		for (size_t k = 0; k < n; k++)
			v.s += (char)(b[2 * k + 1] ? '?' : b[2 * k]);
		break;
	}
	case 19: { /* int64 */
		v.kind = DfmValue::INT;
		std::string b = r.take(8);
		long long x = 0;
		for (int k = 7; k >= 0; k--)
			x = x << 8 | (uint8_t)b[(size_t)k];
		v.i = x;
		break;
	}
	case 20: /* UTF-8 */
		v.kind = DfmValue::STRING;
		v.s = r.take((size_t)r.i32());
		break;
	default:
		throw std::runtime_error("dfm: unknown value type");
	}
	return v;
}

std::unique_ptr<DfmObject> object(Reader &r)
{
	auto o = std::make_unique<DfmObject>();
	if ((r.peek() & 0xf0) == 0xf0) {
		uint8_t flags = r.u8() & 0x0f;
		o->inherited = flags & 1;
		if (flags & 2)
			value(r); /* position in the parent */
	}
	o->cls = r.sstr();
	o->name = r.sstr();
	while (r.peek() != 0) {
		std::string key = r.sstr();
		o->props[key] = value(r);
	}
	r.u8();
	while (r.peek() != 0)
		o->children.push_back(object(r));
	r.u8();
	return o;
}

/* Puts what child (an inherited form) changes into base. */
void merge(DfmObject &base, DfmObject &child)
{
	base.cls = child.cls;
	base.name = child.name;
	for (auto &kv : child.props)
		base.props[kv.first] = kv.second;
	for (auto &c : child.children) {
		DfmObject *b = c->inherited ? base.find(c->name) : nullptr;
		if (b && b != &base)
			merge(*b, *c);
		else
			base.children.push_back(std::move(c));
	}
}

} // namespace

const DfmValue *DfmObject::prop(const std::string &key) const
{
	auto it = props.find(key);
	return it == props.end() ? nullptr : &it->second;
}

int DfmObject::get_int(const std::string &key, int def) const
{
	const DfmValue *v = prop(key);
	return v ? v->as_int(def) : def;
}

std::string DfmObject::get_str(const std::string &key, const std::string &def) const
{
	const DfmValue *v = prop(key);
	return v && (v->kind == DfmValue::STRING || v->kind == DfmValue::IDENT) ? v->s : def;
}

bool DfmObject::get_bool(const std::string &key, bool def) const
{
	const DfmValue *v = prop(key);
	return v && v->kind == DfmValue::BOOL ? v->i != 0 : def;
}

DfmObject *DfmObject::find(const std::string &n)
{
	if (name == n)
		return this;
	for (auto &c : children) {
		if (DfmObject *f = c->find(n))
			return f;
	}
	return nullptr;
}

void DfmObject::walk(std::vector<DfmObject *> &out)
{
	out.push_back(this);
	for (auto &c : children)
		c->walk(out);
}

std::unique_ptr<DfmObject> parse_dfm(const std::vector<uint8_t> &data)
{
	if (data.size() < 4 || memcmp(data.data(), "TPF0", 4))
		return nullptr;
	Reader r{ data };
	r.p = 4;
	try {
		return object(r);
	}
	catch (const std::exception &) {
		return nullptr;
	}
}

std::unique_ptr<DfmObject> load_form(const DelphiProgram &prog, const std::string &cls)
{
	auto form = parse_dfm(prog.rcdata(cls));
	if (!form)
		return nullptr;
	if (!form->inherited)
		return form;
	/* An inherited form: the parent class's form first, this one over it. */
	std::string parent = prog.parent(cls);
	std::unique_ptr<DfmObject> base;
	for (std::string p = parent; !p.empty() && !base; p = prog.parent(p))
		base = load_form(prog, p);
	if (!base)
		return form;
	merge(*base, *form);
	return base;
}
