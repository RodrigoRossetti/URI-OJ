#!/usr/bin/env python3

p1 = [float(i) for i in (input().split(' '))]
p2 = [float(i) for i in (input().split(' '))]
print("VALOR A PAGAR: R$ {:.2f}".format(p1[1] * p1[2] + p2[1] * p2[2]))