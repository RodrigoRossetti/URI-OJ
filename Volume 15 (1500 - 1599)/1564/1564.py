#!/usr/bin/env python3

from sys import stdin

for line in stdin:
    if line == '':
        break
    if int(line) == 0:
        print("vai ter copa!")
    else:
        print("vai ter duas!")