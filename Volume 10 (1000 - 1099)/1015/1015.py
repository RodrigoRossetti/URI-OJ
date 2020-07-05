#!/usr/bin/env python3

import math

p1 = x = [float(i) for i in (input().split(' '))]
p2 = x = [float(i) for i in (input().split(' '))]
distance = math.sqrt((p2[0]*p2[0]-2*p1[0]*p2[0]+p1[0]*p1[0]) + (p2[1]*p2[1]-2*p1[1]*p2[1]+p1[1]*p1[1]))
print("{:.4f}".format(distance))