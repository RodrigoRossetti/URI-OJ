from sys import stdin

for line in stdin:
	print("{}".format(line.translate(str.maketrans("1234567890-=WERTYUIOP[]\SDFGHJKL;'XCVBNM,./", "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,."))), end="")