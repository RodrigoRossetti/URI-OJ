n = int(input())
s = 0
while n != 0:
    if n % 2 == 0:
        s = 5 * n + 20
    else: 
        s = 5 * n + 25
    print(s)
    n = int(input())