#!/usr/bin/ruby

while line=gets
    line = line.to_i
    if line >= 360
        line /= 360
    end
    if line >= 0 and line < 90
        puts "Bom Dia!!"
    elsif line >= 90 and line < 180
        puts "Boa Tarde!!"
    elsif line >= 180 and line < 270
        puts "Boa Noite!!"
    elsif line >= 270 and line < 360
        puts "De Madrugada!!"
    end
end