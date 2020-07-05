#!/usr/bin/ruby

max = 0
it = 0
for i in 1..100
    x = gets.to_i
    if x > max
        max = x
        it = i
    end
end
puts max
puts it