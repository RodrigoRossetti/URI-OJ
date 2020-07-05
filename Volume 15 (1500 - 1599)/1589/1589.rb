#!/usr/bin/ruby

n = gets.to_i
for i in 1..n
    a,b = Array.new(gets.split.map(&:to_i))
    puts a+b
end