#!/usr/bin/env ruby

n1, n2, n3 = gets.split.map(&:to_i)

if n1 >= n2 and n1 >= n3
	puts "#{n1} eh o maior"
elsif n2 >= n1 && n2 >= n3
	puts "#{n2} eh o maior"
elsif n3 >= n1 && n3 >= n2
	puts "#{n3} eh o maior"
end