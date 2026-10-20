#!/usr/bin/env python3
"""Split a program's decompiled.c into its original source files.

Usage: split_sources.py <decompiled/program> [<symbols dir>]

The linker keeps each object file's code together, in link order, so a function belongs
to the source file of the functions around it. The anchors are:
  - files.tsv (RecoverNames.java): functions whose diagnostics name their __FILE__;
  - for a Delphi program, symbols/<program>.classes.tsv: a method Class.Method is in the
    unit of its class;
  - symbols/<program>.regions.tsv (hand-written; start, end, path): address ranges with
    no anchors of their own, such as statically linked libraries.
A function between two anchors of the same file is in that file; between two different
files, in the nearer one. Header names (array.hpp, str.h: inline template code) are not
anchors. The directory of each file comes from the full __FILE__ paths in strings.tsv.

Writes <program>/src/<dir>/<file>.c (each function, in address order) and
<program>/sources.tsv (address, name, file, how it was placed).
"""
import bisect
import os
import re
import sys

HEADER = re.compile(r'\.(h|hpp)$', re.I)
PATH = re.compile(r'^(?:[A-Za-z]:)?([\\/\w .-]*?)[\\/]([\w-]+\.(?:cpp|c|h|hpp))$', re.I)
# Directories of the original source trees, by the tail of their path.
DIRS = [('a2iv\\game\\prog', 'game'), ('a2iv\\engine\\prog', 'engine'), ('dx3d', 'dx3d'),
        ('dxdraw', 'dxdraw'), ('inputlib\\prog', 'inputlib'), ('sound_lib', 'sound_lib'),
        ('daviipionsupport', 'daviipionsupport'), ('motor', 'motor')]
FUNC = re.compile(r'^/\* ==== ([0-9a-f]{8}) (.*) ==== \*/$')


def read_tsv(path):
    if not os.path.exists(path):
        return []
    lines = [l.rstrip('\n').split('\t') for l in open(path, encoding='utf-8', errors='replace')
             if l.strip() and not l.startswith('#')]
    head = lines[0]
    return [dict(zip(head, l)) for l in lines[1:]]


def directories(strings):
    """File name (lower case) -> directory in src/, from the full paths among the strings."""
    out = {}
    for r in strings:
        s = r.get('value', '').replace('\\\\', '\\').strip()
        m = PATH.match(s)
        if not m:
            continue
        d = m.group(1).lower().replace('/', '\\')
        for tail, name in DIRS:
            if d.endswith(tail):
                out.setdefault(m.group(2).lower(), name)
    return out


def main(prog, symbols=None):
    name = os.path.basename(os.path.normpath(prog))
    symbols = symbols or os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(prog))), 'symbols')
    funcs = [(int(r['address'], 16), r['name']) for r in read_tsv(os.path.join(prog, 'functions.tsv'))
             if r.get('address', '').strip() and not r['address'].startswith('EXTERNAL')]
    funcs.sort()
    names = dict(funcs)
    dirs = directories(read_tsv(os.path.join(prog, 'strings.tsv')))

    anchors = {}  # address -> (file, how)
    for r in read_tsv(os.path.join(prog, 'files.tsv')):
        f = r['file']
        if HEADER.search(f):
            continue
        a = int(r['address'], 16)
        prev = anchors.get(a)
        # A function naming two files (its own and a callee's macro) keeps the first seen.
        if prev is None:
            d = dirs.get(f.lower(), '')
            anchors[a] = ((d + '/' if d else '') + f, 'names its file')
    classes = {r['class']: r['unit'] for r in read_tsv(os.path.join(symbols, name + '.classes.tsv')) if r.get('unit')}
    for a, n in funcs:
        cls = n.split('.', 1)[0] if '.' in n else None
        if cls in classes and a not in anchors:
            anchors[a] = ('units/' + classes[cls] + '.pas', 'method of ' + cls)
    regions = []
    for r in read_tsv(os.path.join(symbols, name + '.regions.tsv')):
        regions.append((int(r['start'], 16), int(r['end'], 16), r['path']))

    keys = sorted(anchors)
    placed = {}
    for a, n in funcs:
        if n.startswith(('Unwind@', 'Catch@')):
            placed[a] = ('exception_handlers.c', 'exception handler funclet')
            continue
        region = next((p for s, e, p in regions if s <= a < e), None)
        if region:
            placed[a] = (region, 'address range in regions.tsv')
            continue
        if a in anchors:
            placed[a] = anchors[a]
            continue
        i = bisect.bisect_left(keys, a)
        before = keys[i - 1] if i > 0 else None
        after = keys[i] if i < len(keys) else None
        if before is None and after is None:
            placed[a] = ('unplaced.c', 'no anchors')
        elif before is not None and after is not None and anchors[before][0] == anchors[after][0]:
            placed[a] = (anchors[before][0], 'between functions of the file')
        else:
            near = before if after is None or (before is not None and a - before <= after - a) else after
            placed[a] = (anchors[near][0], 'nearest file')

    # Split the C export.
    bodies = {}
    cur = None
    head = []
    for line in open(os.path.join(prog, 'decompiled.c'), encoding='utf-8', errors='replace'):
        m = FUNC.match(line.rstrip('\n'))
        if m:
            cur = int(m.group(1), 16)
            bodies[cur] = [line]
        elif cur is None:
            head.append(line)
        else:
            bodies[cur].append(line)
    out = os.path.join(prog, 'src')
    if os.path.isdir(out):
        for root, _, files in os.walk(out, topdown=False):
            for f in files:
                os.remove(os.path.join(root, f))
            os.rmdir(root)
    byfile = {}
    for a in sorted(bodies):
        f = placed.get(a, ('unplaced.c', 'not in functions.tsv'))[0]
        byfile.setdefault(f, []).append(a)
    for f, addrs in byfile.items():
        path = os.path.join(out, re.sub(r'\.(cpp|pas)$', '.c', f, flags=re.I))
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, 'w', encoding='utf-8') as w:
            w.write('/* %s — %s: %d functions, split from decompiled.c by tools/split_sources.py */\n\n'
                    % (name, f, len(addrs)))
            for a in addrs:
                w.writelines(bodies[a])
    with open(os.path.join(prog, 'sources.tsv'), 'w') as w:
        w.write('address\tname\tfile\thow\n')
        for a, n in funcs:
            f, how = placed[a]
            w.write('%08x\t%s\t%s\t%s\n' % (a, n, f, how))
    print('split_sources: %s: %d functions into %d files (%d anchors)' % (name, len(funcs), len(byfile), len(anchors)))


if __name__ == '__main__':
    main(*sys.argv[1:])
