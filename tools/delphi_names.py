#!/usr/bin/env python3
"""Names for a Delphi program from its own class and form metadata.

Usage: delphi_names.py <program.exe> <names.tsv> <forms_dir>

A Delphi (3-7) executable keeps, for every class, a VMT with the class name, its parent,
its instance size and unit (in the class's type info), the names and addresses of its
published methods (event handlers such as TMainForm.StartButtonClick), the names and
offsets of its published fields (the components on a form), its message handlers and its
property accessors. Forms are stored as binary DFM resources (RCDATA "TMAINFORM", ...),
which describe every component and which method each event calls.

Writes:
  <names.tsv>        function and data names, in the columns of tools/merge_names.py, with
                     the evidence for each;
  <names.tsv> with .classes.tsv  one row per class: VMT, name, parent, unit, instance size;
  <names.tsv> with .fields.tsv   published fields per class (structs.tsv columns);
  <forms_dir>/<FORM>.dfm         each form as text (binary property data is summarised).
Names: Class.Method for methods, Class.vmt for the VMT, Class.@Destroy and the like for
TObject's virtual methods a class overrides, Class.virtual_<offset> for other overridden
virtual methods, Class.message_<id> for message handlers.
"""
import os
import struct
import sys

# Offsets below the VMT pointer (Delphi 3-7).
VMT = {'SelfPtr': -76, 'IntfTable': -72, 'AutoTable': -68, 'InitTable': -64, 'TypeInfo': -60,
       'FieldTable': -56, 'MethodTable': -52, 'DynamicTable': -48, 'ClassName': -44,
       'InstanceSize': -40, 'Parent': -36}
# TObject's virtual methods, below the VMT pointer.
TOBJECT_VIRTUALS = {-32: 'SafeCallException', -28: 'AfterConstruction', -24: 'BeforeDestruction',
                    -20: 'Dispatch', -16: 'DefaultHandler', -12: 'NewInstance', -8: 'FreeInstance',
                    -4: 'Destroy'}
# Windows messages Delphi classes handle by name (message WM_xxx methods).
MESSAGES = {0x0001: 'WMCreate', 0x0002: 'WMDestroy', 0x0003: 'WMMove', 0x0005: 'WMSize',
            0x0006: 'WMActivate', 0x0007: 'WMSetFocus', 0x0008: 'WMKillFocus', 0x000a: 'WMEnable',
            0x000b: 'WMSetRedraw', 0x000c: 'WMSetText', 0x000d: 'WMGetText', 0x000e: 'WMGetTextLength',
            0x000f: 'WMPaint', 0x0010: 'WMClose', 0x0011: 'WMQueryEndSession', 0x0012: 'WMQuit',
            0x0014: 'WMEraseBkgnd', 0x0015: 'WMSysColorChange', 0x0018: 'WMShowWindow',
            0x001a: 'WMWinIniChange', 0x001c: 'WMActivateApp', 0x001e: 'WMTimeChange',
            0x0020: 'WMSetCursor', 0x0021: 'WMMouseActivate', 0x0024: 'WMGetMinMaxInfo',
            0x0027: 'WMIconEraseBkgnd', 0x0028: 'WMNextDlgCtl', 0x002b: 'WMDrawItem',
            0x002c: 'WMMeasureItem', 0x002d: 'WMDeleteItem', 0x0030: 'WMSetFont', 0x0031: 'WMGetFont',
            0x0037: 'WMQueryDragIcon', 0x0039: 'WMCompareItem', 0x0046: 'WMWindowPosChanging',
            0x0047: 'WMWindowPosChanged', 0x004e: 'WMNotify', 0x0053: 'WMHelp', 0x007b: 'WMContextMenu',
            0x007c: 'WMStyleChanging', 0x007d: 'WMStyleChanged', 0x0081: 'WMNCCreate',
            0x0082: 'WMNCDestroy', 0x0083: 'WMNCCalcSize', 0x0084: 'WMNCHitTest', 0x0085: 'WMNCPaint',
            0x0086: 'WMNCActivate', 0x0087: 'WMGetDlgCode', 0x00a1: 'WMNCLButtonDown',
            0x00a3: 'WMNCLButtonDblClk', 0x0100: 'WMKeyDown', 0x0101: 'WMKeyUp', 0x0102: 'WMChar',
            0x0104: 'WMSysKeyDown', 0x0105: 'WMSysKeyUp', 0x0106: 'WMSysChar', 0x0110: 'WMInitDialog',
            0x0111: 'WMCommand', 0x0112: 'WMSysCommand', 0x0113: 'WMTimer', 0x0114: 'WMHScroll',
            0x0115: 'WMVScroll', 0x0116: 'WMInitMenu', 0x0117: 'WMInitMenuPopup', 0x011f: 'WMMenuSelect',
            0x0120: 'WMMenuChar', 0x0121: 'WMEnterIdle', 0x0132: 'WMCtlColorMsgBox',
            0x0133: 'WMCtlColorEdit', 0x0134: 'WMCtlColorListBox', 0x0135: 'WMCtlColorBtn',
            0x0136: 'WMCtlColorDlg', 0x0137: 'WMCtlColorScrollBar', 0x0138: 'WMCtlColorStatic',
            0x0200: 'WMMouseMove', 0x0201: 'WMLButtonDown', 0x0202: 'WMLButtonUp',
            0x0203: 'WMLButtonDblClk', 0x0204: 'WMRButtonDown', 0x0205: 'WMRButtonUp',
            0x0206: 'WMRButtonDblClk', 0x0207: 'WMMButtonDown', 0x0208: 'WMMButtonUp',
            0x0209: 'WMMButtonDblClk', 0x020a: 'WMMouseWheel', 0x0210: 'WMParentNotify',
            0x0211: 'WMEnterMenuLoop', 0x0212: 'WMExitMenuLoop', 0x0214: 'WMSizing', 0x0215: 'WMCaptureChanged',
            0x0216: 'WMMoving', 0x0220: 'WMMDICreate', 0x0221: 'WMMDIDestroy', 0x0222: 'WMMDIActivate',
            0x0231: 'WMEnterSizeMove', 0x0232: 'WMExitSizeMove', 0x0233: 'WMDropFiles',
            0x0281: 'WMIMESetContext', 0x0282: 'WMIMENotify', 0x0300: 'WMCut', 0x0301: 'WMCopy',
            0x0302: 'WMPaste', 0x0303: 'WMClear', 0x0304: 'WMUndo', 0x030f: 'WMQueryNewPalette',
            0x0311: 'WMPaletteChanged', 0x0312: 'WMHotKey', 0x03b9: 'MMMciNotify'}
# VCL's own control messages (CM_BASE = 0xb000, CN_BASE = 0xbc00).
for i, n in enumerate(['Activate', 'Deactivate', 'GotFocus', 'LostFocus', 'CancelMode', 'DialogKey',
                       'DialogChar', 'FocusChanged', 'ParentFontChanged', 'ParentColorChanged',
                       'HitTest', 'VisibleChanged', 'EnabledChanged', 'ColorChanged', 'FontChanged',
                       'CursorChanged', 'Ctl3DChanged', 'ParentCtl3DChanged', 'TextChanged',
                       'MouseEnter', 'MouseLeave', 'MenuChanged', 'AppKeyDown', 'AppSysCommand',
                       'ButtonPressed', 'ShowingChanged', 'Enter', 'Exit', 'DesignHitTest',
                       'IconChanged', 'WantSpecialKey', 'InvokeHelp', 'WindowHook', 'Release',
                       'ShowHintChanged', 'ParentShowHintChanged', 'SysColorChange',
                       'WinIniChange', 'FontChange', 'TimeChange', 'TabStopChanged', 'UIActivate',
                       'UIDeactivate', 'DocWindowActivate', 'ControlListChange', 'GetDataLink',
                       'ChildKey', 'Drag', 'HintShow', 'DialogHandle', 'IsToolControl', 'RecreateWnd',
                       'Invalidate', 'SysFontChanged', 'ControlChange', 'Changed', 'DockClient',
                       'UndockClient', 'FloatChanged', 'BorderChanged', 'BiDiModeChanged',
                       'ParentBiDiModeChanged', 'AllChildrenFlipped', 'ActionUpdate',
                       'ActionExecute', 'HintShowPause', 'DockNotification', 'MouseWheel']):
    MESSAGES[0xb000 + i] = 'CM' + n
for k, v in list(MESSAGES.items()):
    if 0x0100 <= k < 0x0200 or 0x0110 <= k <= 0x0138 or k in (0x0111, 0x004e, 0x002b, 0x002c, 0x002d, 0x0039):
        MESSAGES.setdefault(0xbc00 + k, 'CN' + v[2:])

TYPE_KINDS = ['Unknown', 'Integer', 'Char', 'Enumeration', 'Float', 'String', 'Set', 'Class', 'Method',
              'WChar', 'LString', 'WString', 'Variant', 'Array', 'Record', 'Interface', 'Int64',
              'DynArray']


class PE:
    def __init__(self, data):
        self.d = data
        p = struct.unpack_from('<I', data, 0x3c)[0]
        opt = p + 24
        n = struct.unpack_from('<H', data, p + 6)[0]
        so = struct.unpack_from('<H', data, p + 20)[0]
        self.base = struct.unpack_from('<I', data, opt + 28)[0]
        self.dirs = [struct.unpack_from('<II', data, opt + 96 + 8 * i) for i in range(16)]
        self.secs = []
        for i in range(n):
            o = opt + so + i * 40
            name = data[o:o + 8].rstrip(b'\0').decode('latin1')
            vs, va, rs, ra = struct.unpack_from('<IIII', data, o + 8)
            self.secs.append((name, self.base + va, max(vs, rs), ra, rs))

    def off(self, va):
        for _, v, size, ra, rs in self.secs:
            if v <= va < v + size and va - v < rs:
                return ra + va - v
        return None

    def u8(self, va):
        o = self.off(va)
        return None if o is None else self.d[o]

    def u16(self, va):
        o = self.off(va)
        return None if o is None else struct.unpack_from('<H', self.d, o)[0]

    def i16(self, va):
        o = self.off(va)
        return None if o is None else struct.unpack_from('<h', self.d, o)[0]

    def u32(self, va):
        o = self.off(va)
        return None if o is None or o + 4 > len(self.d) else struct.unpack_from('<I', self.d, o)[0]

    def sstr(self, va):
        o = self.off(va)
        if o is None:
            return None
        n = self.d[o]
        return self.d[o + 1:o + 1 + n].decode('latin1')

    def section(self, name):
        return next(s for s in self.secs if s[0] == name)

    def is_code(self, va):
        _, v, size, _, _ = self.section('CODE')
        return v <= va < v + size


def find_vmts(pe):
    """VMT pointers: a CODE dword equal to its own address + 76 is a vmtSelfPtr."""
    _, cva, _, cra, crs = pe.section('CODE')
    vmts = []
    for k in range(0, crs - 80, 4):
        v = struct.unpack_from('<I', pe.d, cra + k)[0]
        if v == cva + k + 76:
            name = pe.sstr(pe.u32(v + VMT['ClassName']) or 0)
            if name and name.isidentifier():
                vmts.append(v)
    return vmts


def class_info(pe, v):
    c = {'vmt': v, 'name': pe.sstr(pe.u32(v + VMT['ClassName'])),
         'size': pe.u32(v + VMT['InstanceSize'])}
    parent = pe.u32(v + VMT['Parent'])
    c['parent'] = pe.u32(parent) if parent else None
    c['unit'] = ''
    ti = pe.u32(v + VMT['TypeInfo'])
    if ti and pe.u8(ti) == 7:
        n = pe.u8(ti + 1)
        p = ti + 2 + n
        # ClassType, ParentInfo, PropCount, UnitName, then the properties.
        c['unit'] = pe.sstr(p + 10) or ''
        c['typeinfo'] = ti
        c['props'] = []
        q = p + 10 + 1 + (pe.u8(p + 10) or 0)
        count = pe.u16(q) or 0
        q += 2
        for _ in range(count):
            get, set_ = pe.u32(q + 4), pe.u32(q + 8)
            name = pe.sstr(q + 26)
            if name is None:
                break
            c['props'].append((name, get, set_))
            q += 27 + len(name)
    return c


def method_table(pe, v):
    t = pe.u32(v + VMT['MethodTable'])
    out = []
    if not t:
        return out
    n = pe.u16(t) or 0
    p = t + 2
    for _ in range(n):
        size = pe.u16(p)
        code = pe.u32(p + 2)
        name = pe.sstr(p + 6)
        if not size or name is None:
            break
        out.append((code, name))
        p += size
    return out


def field_table(pe, v):
    t = pe.u32(v + VMT['FieldTable'])
    out = []
    if not t:
        return out
    n = pe.u16(t) or 0
    classes = pe.u32(t + 2)
    p = t + 6
    for _ in range(n):
        off, idx = pe.u32(p), pe.u16(p + 4)
        name = pe.sstr(p + 6)
        if name is None:
            break
        cls = None
        if classes:
            cn = pe.u16(classes) or 0
            if idx < cn:
                ref = pe.u32(classes + 2 + 4 * idx)
                vm = pe.u32(ref) if ref else None
                cls = pe.sstr(pe.u32(vm + VMT['ClassName'])) if vm else None
        out.append((off, name, cls))
        p += 7 + len(name)
    return out


def dynamic_table(pe, v):
    t = pe.u32(v + VMT['DynamicTable'])
    if not t:
        return []
    n = pe.u16(t) or 0
    ids = [pe.u16(t + 2 + 2 * i) for i in range(n)]
    return [(ids[i], pe.u32(t + 2 + 2 * n + 4 * i)) for i in range(n)]


def virtual_slots(pe, v, starts):
    """The positive virtual method slots: up to the next VMT field the compiler placed after
    the VMT (class name, tables) or the next VMT."""
    end = min([x for x in starts if x > v] + [v + 4 * 400])
    slots = []
    for p in range(v, end, 4):
        code = pe.u32(p)
        if code is None or not pe.is_code(code):
            break
        slots.append(code)
    return slots


# ---- binary DFM ----------------------------------------------------------------------------

class Reader:
    def __init__(self, data):
        self.d, self.p = data, 0

    def u8(self):
        b = self.d[self.p]
        self.p += 1
        return b

    def take(self, n):
        b = self.d[self.p:self.p + n]
        self.p += n
        return b

    def sstr(self):
        return self.take(self.u8()).decode('latin1')

    def i(self, fmt):
        v = struct.unpack_from(fmt, self.d, self.p)[0]
        self.p += struct.calcsize(fmt)
        return v


def quote(s):
    out, plain = [], False
    for ch in s:
        if 32 <= ord(ch) < 127 and ch != "'":
            if not plain:
                out.append("'")
                plain = True
            out.append(ch)
        else:
            if plain:
                out.append("'")
                plain = False
            out.append('#%d' % ord(ch))
    if plain:
        out.append("'")
    return ''.join(out) or "''"


def dfm_value(r, indent):
    t = r.u8()
    if t == 0:
        return ''
    if t == 1:
        items = []
        while r.d[r.p] != 0:
            items.append(dfm_value(r, indent + '  '))
        r.u8()
        return '(' + ' '.join(items) + ')'
    if t == 2:
        return str(r.i('<b'))
    if t == 3:
        return str(r.i('<h'))
    if t == 4:
        return str(r.i('<i'))
    if t == 5:
        raw = r.take(10)
        mant = int.from_bytes(raw[:8], 'little')
        exp = int.from_bytes(raw[8:], 'little')
        sign = -1 if exp & 0x8000 else 1
        exp &= 0x7fff
        return repr(0.0 if mant == 0 else sign * mant / (1 << 63) * 2.0 ** (exp - 16383))
    if t in (6, 7):
        s = r.sstr()
        return quote(s) if t == 6 else s
    if t == 8:
        return 'False'
    if t == 9:
        return 'True'
    if t == 10:
        n = r.i('<I')
        data = r.take(n)
        return '{ %d bytes%s }' % (n, (': ' + data[1:1 + data[0]].decode('latin1')) if data and 0 < data[0] < 40 and data[1:1 + data[0]].isascii() else '')
    if t == 11:
        items = []
        while True:
            s = r.sstr()
            if not s:
                break
            items.append(s)
        return '[' + ', '.join(items) + ']'
    if t == 12:
        return quote(r.take(r.i('<I')).decode('latin1'))
    if t == 13:
        return 'nil'
    if t == 14:
        lines = ['<']
        while r.d[r.p] != 0:
            if r.d[r.p] in (2, 3, 4):
                dfm_value(r, indent)
            if r.u8() != 1:
                raise ValueError('collection item')
            lines.append(indent + '  item')
            while r.d[r.p] != 0:
                name = r.sstr()
                lines.append(indent + '    ' + name + ' = ' + dfm_value(r, indent + '    '))
            r.u8()
            lines.append(indent + '  end')
        r.u8()
        return '\n'.join(lines) + '>'
    if t == 15:
        return repr(r.i('<f'))
    if t in (16, 17):
        return repr(r.i('<d'))
    if t == 18:
        n = r.i('<I')
        return quote(r.take(2 * n).decode('utf-16-le'))
    if t == 19:
        return str(r.i('<q'))
    if t == 20:
        return quote(r.take(r.i('<I')).decode('utf-8'))
    raise ValueError('value type %d at %d' % (t, r.p - 1))


def dfm_object(r, indent, events):
    flags = 0
    if r.d[r.p] & 0xf0 == 0xf0:
        flags = r.u8() & 0x0f
        if flags & 2:
            dfm_value(r, indent)
    cls, name = r.sstr(), r.sstr()
    kind = 'inherited' if flags & 1 else 'inline' if flags & 4 else 'object'
    lines = ['%s%s %s: %s' % (indent, kind, name, cls)]
    while r.d[r.p] != 0:
        prop = r.sstr()
        val = dfm_value(r, indent + '  ')
        lines.append('%s  %s = %s' % (indent, prop, val))
        if prop.startswith('On') and val.isidentifier():
            events.append((name, cls, prop, val))
    r.u8()
    while r.d[r.p] != 0:
        lines.extend(dfm_object(r, indent + '  ', events))
    r.u8()
    lines.append(indent + 'end')
    return lines


def resources(pe):
    """(type, name, data) for every resource."""
    rva = pe.dirs[2][0]
    if not rva:
        return []
    root = pe.base + rva
    out = []

    def name_of(entry):
        if entry & 0x80000000:
            p = root + (entry & 0x7fffffff)
            n = pe.u16(p)
            o = pe.off(p + 2)
            return pe.d[o:o + 2 * n].decode('utf-16-le')
        return entry

    def walk(p, path):
        named, ids = pe.u16(p + 12), pe.u16(p + 14)
        for i in range(named + ids):
            e = p + 16 + 8 * i
            nm, ptr = pe.u32(e), pe.u32(e + 4)
            if ptr & 0x80000000:
                walk(root + (ptr & 0x7fffffff), path + [name_of(nm)])
            else:
                drva, size = pe.u32(root + ptr), pe.u32(root + ptr + 4)
                o = pe.off(pe.base + drva)
                out.append((path[0], path[1], pe.d[o:o + size]))

    walk(root, [])
    return out


def main(exe, names_tsv, forms_dir):
    pe = PE(open(exe, 'rb').read())
    vmts = find_vmts(pe)
    classes = {v: class_info(pe, v) for v in vmts}
    # Where the compiler placed each VMT's tables, to bound the virtual slots.
    starts = set(vmts)
    for v in vmts:
        for k in ('IntfTable', 'AutoTable', 'InitTable', 'TypeInfo', 'FieldTable', 'MethodTable',
                  'DynamicTable', 'ClassName'):
            x = pe.u32(v + VMT[k])
            if x:
                starts.add(x)
        starts.add(v + VMT['SelfPtr'])
    starts = sorted(starts)
    names = {}

    def name(addr, n, evidence, kind='function'):
        if addr and addr not in names:
            names[addr] = (kind, n, evidence)

    for v in vmts:
        c = classes[v]
        cn = c['name']
        name(v + VMT['SelfPtr'], cn + '.vmt', 'class table', 'data')
        for code, m in method_table(pe, v):
            name(code, '%s.%s' % (cn, m), 'published method')
        for msg, code in dynamic_table(pe, v):
            label = MESSAGES.get(msg) or ('message_%04x' % msg if msg < 0xc000 else 'dynamic_%04x' % msg)
            name(code, '%s.%s' % (cn, label), 'message handler %04x' % msg)
        for prop, get, set_ in c.get('props', []):
            for acc, pre in ((get, 'Get'), (set_, 'Set')):
                # 0xffxxxxxx is a field offset, 0xfexxxxxx a virtual slot.
                if acc and acc < 0xfe000000 and pe.is_code(acc):
                    name(acc, '%s.%s%s' % (cn, pre, prop), 'property accessor')
    # Overridden virtual methods: a slot whose code differs from the parent's.
    for v in vmts:
        c = classes[v]
        p = c['parent']
        for off, m in TOBJECT_VIRTUALS.items():
            code = pe.u32(v + off)
            if code and pe.is_code(code) and (p is None or pe.u32(p + off) != code):
                name(code, '%s.%s' % (c['name'], m), 'TObject virtual')
        mine, theirs = virtual_slots(pe, v, starts), virtual_slots(pe, p, starts) if p in classes else []
        for i, code in enumerate(mine):
            if i >= len(theirs) or theirs[i] != code:
                name(code, '%s.virtual_%03x' % (c['name'], 4 * i), 'virtual method slot %d' % i)

    with open(names_tsv, 'w') as f:
        f.write('address\tkind\tname\tcc\tret\tparams\tdtype\tmangled\tevidence\n')
        for a in sorted(names):
            kind, n, ev = names[a]
            f.write('%08x\t%s\t%s\t\t\t%s\t\t\t%s\n' % (a, kind, n, '' if kind == 'data' else '?', ev))
    base = os.path.splitext(names_tsv)[0]
    with open(base + '.classes.tsv', 'w') as f:
        f.write('vmt\tclass\tparent\tunit\tinstance_size\n')
        for v in vmts:
            c = classes[v]
            parent = classes[c['parent']]['name'] if c['parent'] in classes else ''
            f.write('%08x\t%s\t%s\t%s\t%d\n' % (v, c['name'], parent, c['unit'], c['size'] or 0))
    with open(base + '.fields.tsv', 'w') as f:
        f.write('struct\toffset\ttype\tname\tcomment\n')
        for v in vmts:
            for off, n, cls in field_table(pe, v):
                f.write('%s\t%x\t%s\t%s\t\n' % (classes[v]['name'], off, (cls + '*') if cls else 'void*', n))

    os.makedirs(forms_dir, exist_ok=True)
    nforms, events = 0, []
    for rtype, rname, data in resources(pe):
        if rtype == 10 and data[:4] == b'TPF0':
            r = Reader(data)
            r.p = 4
            ev = []
            try:
                text = dfm_object(r, '', ev)
            except (ValueError, IndexError, struct.error) as e:
                text = ['{ cannot read: %s }' % e]
            with open(os.path.join(forms_dir, '%s.dfm' % rname), 'w') as f:
                f.write('\n'.join(text) + '\n')
            events += [(rname,) + e for e in ev]
            nforms += 1
    with open(os.path.join(forms_dir, 'events.tsv'), 'w') as f:
        f.write('form\tcomponent\tclass\tevent\thandler\n')
        for e in events:
            f.write('\t'.join(e) + '\n')
    print('delphi_names: %d classes, %d names, %d forms, %d event links' % (len(vmts), len(names), nforms, len(events)))


if __name__ == '__main__':
    main(*sys.argv[1:])
