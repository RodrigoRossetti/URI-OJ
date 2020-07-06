#!/usr/bin/env python3

n, m = [int(i) for i in input().split()]
cifra = decifra = ""
for i in range(0, n):
    a, b = [i for i in input().split()]
    cifra += a
    decifra += b
aux = cifra
cifra += decifra
decifra += aux
for i in range(0, m):
    texto = input()
    print("{}".format(texto.translate(str.maketrans(decifra, cifra))))