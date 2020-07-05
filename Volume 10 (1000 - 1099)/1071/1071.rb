#!/usr/bin/ruby

total = 0
a = gets.to_i
b = gets.to_i
if b < a
    a,b = b,a
end
for i in a+1...b
    if i % 2 != 0
        total += i
    end
end
puts total