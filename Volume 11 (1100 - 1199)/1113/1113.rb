#!/usr/bin/env ruby

a, b = Array.new(gets.split.map(&:to_i))
while a != b
    if b < a
        puts "Decrescente"
    else
        puts "Crescente"
    end
    a, b = Array.new(gets.split.map(&:to_i))
end