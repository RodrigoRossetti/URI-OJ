#!/usr/bin/env ruby

for i in 1..gets.to_i
    s1 = gets.chomp
    s2 = gets.chomp
    if s1 == "ataque" and s2 == "ataque"
    puts "Aniquilacao mutua"
    elsif (s1 == "pedra" and s2 == "papel") or s1 == "ataque"
        puts "Jogador 1 venceu"
    elsif (s2 == "pedra" and s1 == "papel") or s2 == "ataque"
        puts "Jogador 2 venceu"
    elsif s1 == "papel" and s2 == "papel"
        puts "Ambos venceram"
    elsif s1 == "pedra" and s2 == "pedra"
        puts "Sem ganhador"
    end
end