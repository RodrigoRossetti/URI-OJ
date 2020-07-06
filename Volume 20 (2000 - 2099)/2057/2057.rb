#!/usr/bin/env ruby

fusos = Array.new(gets.split(' ').map(&:to_i))
total = fusos[0] + fusos[1] + fusos[2]
if total > 24
    total -= 24
elsif total < 0
    total += 24
end
puts total