#!/usr/bin/env python3

n = int(input())
l = [int(i) for i in input().split(' ')]
s = 0
for i in range(len(l)):
    if l[i] == n:
        s+= 1
print(s)