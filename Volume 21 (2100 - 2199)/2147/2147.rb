#!/usr/bin/env ruby

n = gets.to_i
for i in 0...n
    s = gets.chomp
    puts "%.2f" % [(s.size)/100.0]
end