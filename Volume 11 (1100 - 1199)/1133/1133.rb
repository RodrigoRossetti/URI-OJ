#!/usr/bin/env ruby

total = 0
a = gets.to_i
b = gets.to_i
if a > b
    a,b = b,a
end
for i in a+1...b
    if i % 5 == 2 or i % 5 == 3
        puts i
    end
end
gets