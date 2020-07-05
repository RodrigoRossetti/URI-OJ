l = [int(i) for i in input().split(' ')]
if l[1] > l[2] and l[3] > l[0] and l[2] + l[3] > l[0] + l[1] and l[2] > 0 and l[3] > 0 and l[0] % 2 == 0:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")