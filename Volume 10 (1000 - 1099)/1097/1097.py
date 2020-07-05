#!/usr/bin/env python3

j = 7
for i in range(1, 10, 2):
    print("I={} J={}\nI={} J={}\nI={} J={}".format(i,j,i,j-1,i,j-2))
    j += 2