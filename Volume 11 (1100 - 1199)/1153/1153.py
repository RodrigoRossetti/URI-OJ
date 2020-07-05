#!/usr/bin/env python3

n = int(input())
c = 1
for i in range(n, 0, -1):
    c *= i
print(c)