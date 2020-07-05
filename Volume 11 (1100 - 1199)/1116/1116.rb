#!/usr/bin/env ruby

for i in 0...gets.to_i
    a, b = gets.split(' ').map(&:to_f)
    if b == 0
        puts "divisao impossivel"
    else
        puts "%.1f" % [a/b]
    end
end