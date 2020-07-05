#!/usr/bin/env python3

total = 0
i = 0
while(1):
    n = int(input())
    if n < 0: break
    total += n
    i += 1
print("{:.2f}".format(total/i))