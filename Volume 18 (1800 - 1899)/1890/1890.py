n = int(input())
for i in range(0, n):
    a, b = [int(i) for i in input().split(' ')]
    if a == 0 and b == 0:
        print(0)
    else:
        print((26**a)*(10**b))