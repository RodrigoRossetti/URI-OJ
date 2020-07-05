#!/usr/bin/env ruby

s = 1
gremio = inter = empates = total = 0
while s == 1
    a, b = gets.split(' ').map(&:to_i)
    if a > b
        inter += 1
    elsif b > a
        gremio += 1
    else
        empates += 1
    end
    total += 1
    puts "Novo grenal (1-sim 2-nao)"
    s = gets.to_i
end
puts "%d grenais" % [total]
puts "Inter:%d" % [inter]
puts "Gremio:%d" % [gremio]
puts "Empates:%d" % [empates]
if inter > gremio
    puts "Inter venceu mais"
elsif gremio > inter
    puts "Gremio venceu mais"
else
    puts "Nao houve vencedor"
end
gets