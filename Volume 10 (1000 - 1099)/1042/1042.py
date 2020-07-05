l = [int(i) for i in input().split(' ')]
s = sorted(l)
for i in range(0,len(s)):
    print("{}".format(s[i]))
print()
for i in range(0,len(l)):
    print("{}".format(l[i]))