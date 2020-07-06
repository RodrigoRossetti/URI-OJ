#!/usr/bin/env python3

from sys import stdin

l = []
for line in stdin:
    if line not in l:
        l.append(line)
print(len(l))