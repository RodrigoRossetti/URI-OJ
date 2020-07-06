#!/usr/bin/env ruby

while str = gets
    if str.chomp == "esquerda"
        puts "ingles"
    elsif str.chomp == "direita"
        puts "frances"
    elsif str.chomp == "nenhuma"
        puts "portugues"
    elsif str.chomp == "as duas"
        puts "caiu"
    end
end