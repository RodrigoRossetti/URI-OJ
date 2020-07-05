#!/usr/bin/ruby

par = 0
for i in 0...5
    n = gets.to_i
    if n % 2 == 0
        par += 1
    end
end
puts '%d valores pares' % [par]