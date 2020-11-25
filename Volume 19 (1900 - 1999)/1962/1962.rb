#!/usr/bin/env ruby

n = gets.to_i
for i in 0...n
	t = gets.to_i
	if t < 2015
		puts "#{2015-t} D.C."
	else
		puts "#{t-2014} A.C."
	end
end