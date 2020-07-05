#!/usr/bin/env ruby

n1, n2, n3, n4 = Array.new(gets.split.map(&:to_f))
media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0))/10.0
puts "Media: %.1f" % [media]
if media >= 7
    puts "Aluno aprovado."
elsif media < 5
    puts "Aluno reprovado."
else
    puts "Aluno em exame."
    exame = gets.to_f
    puts "Nota do exame: %.1f" % [exame]
    media = (media+exame) / 2
    if media >= 5
        puts "Aluno aprovado."
    else
        puts "Aluno reprovado."
    end
    puts "Media final: %.1f" % [media]
end