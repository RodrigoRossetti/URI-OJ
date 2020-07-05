#!/usr/bin/env python3

l1 = [0, 4, 4.5, 5, 2, 1.5]
l2 = [int(i)for i in input().split(' ')]
print("Total: R$ {:.2f}".format(l2[1] * l1[l2[0]]))