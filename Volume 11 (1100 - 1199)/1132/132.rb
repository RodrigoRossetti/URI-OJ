#!/usr/bin/ruby

total = 0
a = gets.to_i
b = gets.to_i
if a > b
    a,b = b,a
end
for i in a..b
    if i % 13 != 0
        total += i
    end
end
puts total