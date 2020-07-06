#!/usr/bin/env ruby

a, b = gets.split.map(&:to_i)
if a == b
    puts a
elsif a > b
    puts a
else
    puts b
end