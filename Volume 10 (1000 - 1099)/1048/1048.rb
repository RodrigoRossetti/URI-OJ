#!/usr/bin/ruby

s = gets.to_f
if s <= 400
    ns = s * 1.15
    pc = 15
elsif s <= 800
    ns = s * 1.12
    pc = 12
elsif s <= 1200
    ns = s * 1.10
    pc = 10
elsif s <= 2000
    ns = s * 1.07
    pc = 7
else
    ns = s * 1.04
    pc = 4
end
puts "Novo salario: %.2f" % [ns]
puts "Reajuste ganho: %.2f" % [ns - s]
puts "Em percentual: %d" % [pc] + " %"