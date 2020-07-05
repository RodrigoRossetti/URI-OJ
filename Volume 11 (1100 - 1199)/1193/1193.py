n = int(input())
for i in range(n):
	s, t = input().split()
	print("Case {}:".format(i+1))
	if (t == "bin"):
		k = int(s, 2)
		print("{} dec\n{} hex\n".format(k, format(k, 'x')))
	elif (t == "dec"):
		k = int(s)
		print("{} hex\n{} bin\n".format(format(k, 'x'), format(k, 'b')))
	elif (t == "hex"):
		k = int(s, 16)
		print("{} dec\n{} bin\n".format(format(k, 'd'), format(k, 'b')))