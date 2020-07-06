#!/usr/bin/env ruby

i, n = Array.new(gets.split.map(&:to_i))
while i != 0 and n != 0
    puts n * i
    i, n = Array.new(gets.split.map(&:to_i))
end