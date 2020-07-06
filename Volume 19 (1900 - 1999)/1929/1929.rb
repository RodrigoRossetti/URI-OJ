#!/usr/bin/env ruby

a, b, c, d = Array.new(gets.split.map(&:to_f))
if (a+b>c and  b+c>a and a+c>b) or (a+b>d and  b+d>a and a+d>b) or (d+b>c and  b+c>d and d+c>b) or (a+d>c and  d+c>a and a+c>d)
    puts "S"
else
    puts "N"
end