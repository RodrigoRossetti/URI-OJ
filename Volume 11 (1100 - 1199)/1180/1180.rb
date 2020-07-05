#!/usr/bin/ruby

n = gets.to_i
l = Array.new(gets.split.map(&:to_i))
print "Menor valor: "
puts l.each_with_index.min[0]
print "Posicao: "
puts l.each_with_index.min[1]