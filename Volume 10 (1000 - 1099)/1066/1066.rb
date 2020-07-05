#!/usr/bin/ruby

par, impar, negativo, positivo = 0, 0, 0, 0
for i in 0...5
    n = gets.to_i
    if n % 2 == 0
        par += 1
    else
        impar += 1
    end
    if n > 0
        positivo += 1
    elsif n < 0
        negativo += 1
    end 
end
puts "%d valor(es) par(es)" % [par]
puts "%d valor(es) impar(es)" % [impar]
puts "%d valor(es) positivo(s)" % [positivo]
puts "%d valor(es) negativo(s)" % [negativo]