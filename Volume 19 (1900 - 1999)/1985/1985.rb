#!/usr/bin/env ruby

soma = 0
for i in 0...gets.to_i
    a, b = gets.split.map(&:to_i)
    if a == 1001
        soma += 1.50*b
    elsif a == 1002
        soma += 2.50*b
    elsif a == 1003
        soma += 3.50*b
    elsif a == 1004
        soma += 4.50*b
    elsif a == 1005
        soma += 5.50*b
    end
end
puts "%.2f" % [soma]