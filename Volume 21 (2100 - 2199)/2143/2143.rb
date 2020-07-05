#!/usr/bin/ruby

n = gets.to_i
total = 0
while n != 0
    for i in 0...n
        x = gets.to_i
        if x % 2 == 0
            total += x*2-2
        else
            total += x*2-1
        end
        puts total
        total = 0
    end
    n = gets.to_i
end