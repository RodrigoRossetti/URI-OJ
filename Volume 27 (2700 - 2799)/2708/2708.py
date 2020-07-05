total = veiculos = 0
s = [str(i) for i in input().split(' ')]
while s[0] != "ABEND":
    if s[0] == "SALIDA":
        veiculos += 1
        total += int(s[1])
    elif s[0] == "VUELTA":
        veiculos -= 1
        total -= int(s[1])
    s = [str(i) for i in input().split(' ')]
print(total)
print(veiculos)