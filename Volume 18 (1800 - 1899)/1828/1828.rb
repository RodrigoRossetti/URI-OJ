#!/usr/bin/ruby

n = gets.to_i
for i in 0...n
    a, b = gets.split(' ')
    if a == b
        puts "Caso #%d: De novo!" % [i+1]
    elsif (a == "tesoura" && b == "papel") || (a == "papel" && b == "pedra") ||
        (a == "pedra" && b == "lagarto") || (a == "lagarto" && b == "Spock") ||
        (a == "Spock" && b == "tesoura") || (a == "tesoura" && b == "lagarto") ||
        (a == "lagarto" && b == "papel") || (a == "papel" && b == "Spock") ||
        (a == "Spock" && b == "pedra") || (a == "pedra" && b == "tesoura")
        puts "Caso #%d: Bazinga!" % [i+1]
    else
        puts "Caso #%d: Raj trapaceou!" % [i+1]
    end
end