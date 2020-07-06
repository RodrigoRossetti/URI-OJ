#!/usr/bin/env python3

from sys import stdin

for line in stdin:
    c, n = [int(i) for i in line.split()]
    cifra = input()
    cifra += cifra.lower()
    decifra = input()
    decifra += decifra.lower()
    aux = cifra
    cifra += decifra
    decifra += aux
    for i in range(0, n):
        texto = input()
        print("{}".format(texto.translate(str.maketrans(decifra, cifra))))
    print()