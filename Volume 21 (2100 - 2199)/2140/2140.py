#!/usr/bin/env python3

def test(d, n, total):
	if d >= n:
		d -= n
		total += 1
	return d, total

while True:
	n, m = map(int, input().split())
	if n == 0 and m == 0: break
	d = m-n
	total = 0
	d, total = test(d, 100, total)
	d, total = test(d, 50, total)
	d, total = test(d, 20, total)
	d, total = test(d, 10, total)
	d, total = test(d, 5, total)
	d, total = test(d, 2, total)
	if total == 2 and d == 0: print("possible")
	else: print("impossible")