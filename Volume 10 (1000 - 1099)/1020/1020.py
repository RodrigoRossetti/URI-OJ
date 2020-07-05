n = int(input())
a = 0
m = 0
if n >= 365:
    a = n//365
    n = n - a*365
if n >= 30:
    m = n//30
    n = n - m*30
print ("{} ano(s)\n{} mes(es)\n{} dia(s)".format(a,m,n))