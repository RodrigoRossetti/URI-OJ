#!/usr/bin/env python3

t = int(input())
s = 0
if t <= 800 and t >= 0:
    s = 1
elif t > 800 and t <= 1400:
    s = 2
elif t > 1400 and t <= 2000:
    s = 3
print("{}".format(s))