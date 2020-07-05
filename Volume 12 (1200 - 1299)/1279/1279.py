flag = 0
while True:
	try:
		n = int(input())
		if flag: print()
		if (n % 4 == 0 and n % 100 != 0) or n % 400 == 0:
			print("This is leap year.")
			if n % 15 == 0: print("This is huluculu festival year.")
			if (n % 55 == 0): print("This is bulukulu festival year.")
		elif n % 15 == 0: print("This is huluculu festival year.")
		else: print("This is an ordinary year")
		flag = 1
	except EOFError:
		break