#!/usr/bin/env python3

total = 0
for i in range(6):
	k = float(input())
	if k >= 0: total += 1
print(f"{total} valores positivos")