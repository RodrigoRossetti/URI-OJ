#!/usr/bin/env ruby

t = (Array.new(gets.split.map(&:to_f))).sort
if t[2] >= t[1] + t[0]
    puts "NAO FORMA TRIANGULO"
else
    if t[2]**2 == t[1]**2 + t[0]**2
        puts "TRIANGULO RETANGULO"
    elsif t[2]**2 > t[1]**2 + t[0]**2
        puts "TRIANGULO OBTUSANGULO"
    elsif t[2]**2 < t[1]**2 + t[0]**2
        puts "TRIANGULO ACUTANGULO"
    end
    if t[0] == t[1] and t[1] == t[2]
        puts "TRIANGULO EQUILATERO"
    elsif t[0] == t[1] or t[1] == t[2] or t[0] == t[2]
        puts "TRIANGULO ISOSCELES"
    end
end