#!/usr/bin/env ruby

total = 0
i = 0
begin
    nota = gets.to_f
    if nota > 10 or nota < 0
        puts "nota invalida"
    else
        total += nota
        i += 1
    end
end while i < 2
puts "media = %.2f" % [total/2]