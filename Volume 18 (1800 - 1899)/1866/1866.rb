#!/usr/bin/env ruby

n = gets.to_i
for i in 1..n
    a = gets.to_i
    if a % 2 == 0
        puts 0
    else
        puts 1
    end
end