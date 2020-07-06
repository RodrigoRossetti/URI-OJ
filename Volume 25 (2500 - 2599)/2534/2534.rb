#!/usr/bin/env ruby

while linha = gets
	n, q = linha.split.map(&:to_i)
	v = Array.new(n)
	for i in 0...n
		v[i] = gets.to_i
	end
	v.sort!
	for i in 1..q
		puts v[n-gets.to_i]
	end
end