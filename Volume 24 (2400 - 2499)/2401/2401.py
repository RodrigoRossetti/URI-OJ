#!/usr/bin/env python3

x = 1
n = int(input())
for i in range(n):
	k, op = input().split(' ')
	k = int(k)
	if op == '/': x /= k
	if op == '*': x *= k
print('{:.0f}'.format(x))
