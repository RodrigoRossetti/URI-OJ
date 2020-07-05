cifra = input()
texto = input()
print("{}".format(texto.translate(str.maketrans("abcdefghijklmnopqrstuvwxyz", cifra))))