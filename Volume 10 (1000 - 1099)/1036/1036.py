#!/usr/bin/env python3

import math

l = [float(i) for i in (input().split(' '))]
d = (l[1]**2) - (4*l[0]*l[2])
if l[0] == 0 or d < 0: print("Impossivel calcular")
else:
    s1 = (-l[1]+math.sqrt(d))/(2*l[0])
    s2 = (-l[1]-math.sqrt(d))/(2*l[0])
    print("R1 = {:.5f}\nR2 = {:.5f}".format(s1, s2))