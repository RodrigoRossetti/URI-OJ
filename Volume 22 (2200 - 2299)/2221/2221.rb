#!/usr/bin/env ruby

for i in 0...gets.to_i
    bonus = gets.to_i
    ataque, defesa, level = Array.new(gets.split.map(&:to_i))
    dabriel = (if level % 2 == 0 then ((ataque + defesa)/2)+bonus else ((ataque + defesa)/2) end)
    ataque, defesa, level = Array.new(gets.split.map(&:to_i))
    guarte = (if level % 2 == 0 then ((ataque + defesa)/2)+bonus else ((ataque + defesa)/2) end)
    if dabriel > guarte
        puts "Dabriel"
    elsif guarte > dabriel
        puts "Guarte"
    else
        puts "Empate"
    end
end