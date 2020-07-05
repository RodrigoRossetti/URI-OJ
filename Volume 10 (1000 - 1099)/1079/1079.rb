#!/usr/bin/env ruby

n = gets.to_i
media = 0
for i in 0...n
    a, b, c = Array.new(gets.split.map(&:to_f))
    media = ((a*2 + b*3 + c*5) / 10)
    puts "%.1f" % [media]
end