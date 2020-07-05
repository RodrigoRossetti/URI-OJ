l = [float(i)for i in input().split(' ')]
t = ""
if l[0] > 0 and l[1] > 0: t = "Q1"
elif l[0] < 0 and l[1] < 0: t = "Q3"
elif l[0] < 0 and l[1] > 0: t = "Q2"
elif l[0] > 0 and l[1] < 0: t = "Q4"
elif l[0] == 0 and l[1] != 0: t = "Eixo Y"
elif l[0] != 0 and l[1] == 0: t = "Eixo X"
elif l[0] == 0 and l[1] == 0: t = "Origem"
print(t)