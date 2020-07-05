#!/usr/bin/ruby

a,b = Array.new(gets.split.map(&:to_i))
if b > a
    total = b - a
elsif b == a
    total = 24
else
    total = (b+24) - a
end
puts "O JOGO DUROU %d HORA(S)" % [total]