#!/usr/bin/ruby

total, n = Array.new(gets.split.map(&:to_i))
for i in 0...n
    s = gets.chomp
    if s == "fechou"
        total += 1
    elsif s == "clicou"
        total -= 1
    end
end
puts total