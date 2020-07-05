#!/usr/bin/ruby

for i in 0...gets.to_i
    a = gets.to_i
    if a <= 8000
        puts "Inseto!"
    else 
        puts "Mais de 8000!"
    end
end