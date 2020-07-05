from sys import stdin

s = ""
for line in stdin:
    if (line[len(line)-2] != '#'):
        s += line[0:len(line)-1]
    else:
        s += line[0:len(line)-2]
        x = int(s, 2)
        if x % 131071 == 0: 
            print("YES")
        elif x % 131071 != 0: 
            print("NO")
        s = ""