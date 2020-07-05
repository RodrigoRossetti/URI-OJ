#!/usr/bin/ruby

a = gets.chomp
b = gets.chomp
c = gets.chomp
if a == "vertebrado"
    if b == "ave"
        if c == "carnivoro"
            puts "aguia"
        else
            puts "pomba"
        end
    else
        if c == "onivoro"
            puts "homem"
        else
            puts "vaca"
        end
    end
else
    if b == "inseto"
        if c == "hematofago"
            puts "pulga"
        else
            puts "lagarta"
        end
    else
        if c == "hematofago"
            puts "sanguessuga"
        else
            puts "minhoca"
        end
    end
end
gets