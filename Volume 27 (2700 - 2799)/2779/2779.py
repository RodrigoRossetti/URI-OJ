n = int(input())
l = []
c = 0
for i in range(0,int(input())):
    x = int(input())
    if x not in l:
        c += 1
        l.append(x)
print(n - c) if n - c >= 0 else print(0)