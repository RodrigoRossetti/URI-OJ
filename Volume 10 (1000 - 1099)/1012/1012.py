#!/usr/bin/env python3

x = [float(i) for i in (input().split(' '))]
print("TRIANGULO: {:.3f}".format(x[0] * x[2] / 2))
print("CIRCULO: {:.3f}".format(x[2] * x[2] * 3.14159))
print("TRAPEZIO: {:.3f}".format((x[0] + x[1]) * x[2] / 2))
print("QUADRADO: {:.3f}".format(x[1] * x[1]))
print("RETANGULO: {:.3f}".format(x[0] * x[1]))