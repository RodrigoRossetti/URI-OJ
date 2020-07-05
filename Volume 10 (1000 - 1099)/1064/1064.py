n = 0
s = 0
for i in range(0,6):
    x = float(input())
    if x > 0:
        n += 1
        s += x
print("{} valores positivos".format(n))
print("{:.1f}".format(s/n))