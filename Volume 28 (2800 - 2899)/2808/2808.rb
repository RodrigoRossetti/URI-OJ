#!/usr/bin/ruby

movimentos = Array.new(gets.split(' '))
if (movimentos[1][0].ord - movimentos[0][0].ord).abs == 2 and (movimentos[1][1].to_i - movimentos[0][1].to_i).abs == 1
    puts "VALIDO"
elsif (movimentos[1][0].ord - movimentos[0][0].ord).abs == 1 and (movimentos[1][1].to_i - movimentos[0][1].to_i).abs == 2
    puts "VALIDO"
else
    puts "INVALIDO"
end