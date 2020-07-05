n = float(input())
t = ' '

if n >= 0 and n <= 25: t = "[0,25]"
elif n > 25 and n <= 50: t = "(25,50]"
elif n > 50 and n <= 75: t = "(50,75]"
elif n > 75 and n <= 100: t = "(75,100]"

if t == ' ': print("Fora de intervalo")
else: print("Intervalo {}".format(t))