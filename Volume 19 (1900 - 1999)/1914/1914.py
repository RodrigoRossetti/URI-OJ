#!/usr/bin/env python3

for i in range(0,int(input())):
    l1 = input().split(' ')
    l2 = [int(i) for i in input().split(' ')]
    if (l2[0] + l2[1]) % 2 == 0:
        print(l1[l1.index("PAR")-1])
    else:
        print(l1[l1.index("IMPAR")-1])