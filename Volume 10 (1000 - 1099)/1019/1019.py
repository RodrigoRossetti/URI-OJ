n = int(input())
x = n//3600
n -= x * 3600
print("{}:{:}:{}".format(x,n//60,n%60))