#!/usr/bin/ruby

count = 0
disponiveis = Array.new(gets.split.map(&:to_i))
escolhas = Array.new(gets.split.map(&:to_i))
if escolhas[0] > disponiveis[0]
    count += escolhas[0] - disponiveis[0]
end
if escolhas[1] > disponiveis[1]
    count += escolhas[1] - disponiveis[1]
end
if escolhas[2] > disponiveis[2]
    count += escolhas[2] - disponiveis[2]
end
puts count