l = [int(i)for i in input().split(' ')]
while l[0] != 0 and l[0] != 0:
    t = ""
    if l[0] > 0 and l[1] > 0: t = "primeiro"
    elif l[0] < 0 and l[1] < 0: t = "terceiro"
    elif l[0] < 0 and l[1] > 0: t = "segundo"
    elif l[0] > 0 and l[1] < 0: t = "quarto"
    print(t)
    l = [int(i)for i in input().split(' ')]
