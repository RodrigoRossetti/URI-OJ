#!/usr/bin/env ruby

while line = gets
    k = "Pizza antes de FdI"
    soma = 0
    x = 1
    pessoas, datas = Array.new(line.split.map(&:to_i))
    for i in 0...datas
        str = Array.new(gets.split)
        for j in 1..pessoas
            soma += str[j].to_i
        end
        if soma == pessoas and x == 1
            k = str[0]
            x = 0
        end
        soma = 0
    end
    x = 1
    puts k
end