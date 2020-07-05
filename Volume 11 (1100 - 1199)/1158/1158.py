for i in range(0, int(input())):
    total = 0
    s = [int(j) for j in input().split(' ')]
    if (s[0] % 2 == 0):
        total += s[0] + 1
        s[0] += 1
        for k in range(1,s[1]):
            s[0] += 2
            total += s[0]
    else:
        total += s[0]
        for k in range(1,s[1]):
            s[0] += 2
            total += s[0]
    print(total)