#!/usr/bin/env python3

import math

n = int(input())
for i in range(n):
	flag = 0
	x = int(input())
	if x == 2: flag = 0
	elif x % 2 == 0: flag = 1
	for i in range(3, int(math.sqrt(x)+1), 2):
		if x % i == 0:
			flag = 1
	if flag: print("Not ", end="")
	print("Prime")