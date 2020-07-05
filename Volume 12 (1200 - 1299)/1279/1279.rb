flag = false
while n = gets
	n = n.to_i
	puts '' if flag
	if (n % 4 == 0 and n % 100 != 0) or n % 400 == 0
		puts("This is leap year.")
		if n % 15 == 0
			puts("This is huluculu festival year.")
		end
		if (n % 55 == 0)
			puts("This is bulukulu festival year.")
		end
	elsif n % 15 == 0
		puts("This is huluculu festival year.")
	else
		puts("This is an ordinary year.")
	end
	flag = true
end