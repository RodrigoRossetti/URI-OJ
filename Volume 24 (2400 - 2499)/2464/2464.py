#!/usr/bin/env python3

cifra = input()
texto = input()
print("{}".format(texto.translate(str.maketrans("abcdefghijklmnopqrstuvwxyz", cifra))))