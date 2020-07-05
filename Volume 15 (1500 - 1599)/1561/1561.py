from sys import stdin

def relogio(l):
    a = [0, 0, 0 , 0]
    b = [0, 0, 0, 0, 0, 0]

    if l[0] >= 8:
        a[0] = 1
        l[0] -= 8
    if l[0] >= 4:
        a[1] = 1
        l[0] -= 4
    if l[0] >= 2:
        a[2] = 1
        l[0] -= 2
    if l[0] == 1:
        a[3] = 1
        l[0] -= 1

    if l[1] >= 32:
        b[0] = 1
        l[1] -= 32
    if l[1] >= 16:
        b[1] = 1
        l[1] -= 16
    if l[1] >= 8:
        b[2] = 1
        l[1] -= 8
    if l[1] >= 4:
        b[3] = 1
        l[1] -= 4
    if l[1] >= 2:
        b[4] = 1
        l[1] -= 2
    if l[1] == 1:
        b[5] = 1
        l[1] -= 1

    print(" ____________________________________________")
    print("|                                            |")
    print("|    ____________________________________    |_")
    print("|   |                                    |   |_)")
    print("|   |   8         4         2         1  |   |")
    print("|   |                                    |   |")
    print("|   |   {}         {}         {}         {}  |   |".format('o' if a[0] == 1 else ' ', 'o' if a[1] == 1 else ' ', 'o' if a[2] == 1 else ' ', 'o' if a[3] == 1 else ' '))
    print("|   |                                    |   |")
    print("|   |                                    |   |")
    print("|   |   {}     {}     {}     {}     {}     {}  |   |".format('o' if b[0] == 1 else ' ', 'o' if b[1] == 1 else ' ', 'o' if b[2] == 1 else ' ', 'o' if b[3] == 1 else ' ', 'o' if b[4] == 1 else ' ', 'o' if b[5] == 1 else ' ',))
    print("|   |                                    |   |")
    print("|   |   32    16    8     4     2     1  |   |_")
    print("|   |____________________________________|   |_)")
    print("|                                            |")
    print("|____________________________________________|")
    print()

for line in stdin:
    if line == '': break
    relogio([int(i) for i in line.rstrip('\n').split(':')])