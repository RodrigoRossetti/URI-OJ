#!/usr/bin/env python3

l = [0,0,0]
n = int(input())
while n != 4:
    if n == 1: l[0] += 1
    elif n == 2: l[1] += 1
    elif n == 3: l[2] += 1
    n = int(input())
print("MUITO OBRIGADO\nAlcool: {}\nGasolina: {}\nDiesel: {}".format(l[0],l[1],l[2]))