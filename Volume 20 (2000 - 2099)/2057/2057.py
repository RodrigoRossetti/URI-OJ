#!/usr/bin/env python3

a, b, c = map(int, input().split())
total = a + b + c
if total > 24: total -= 24
elif total < 0: total += 24
elif total == 24: total = 0
print(f"{total}")