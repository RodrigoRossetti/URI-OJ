#!/usr/bin/env ruby

largura = gets.to_i
comprimento = gets.to_i
perimetro = 2*largura + 2*comprimento
tipo1 = largura*comprimento + (largura-1)*(comprimento-1)
tipo2 = perimetro - 4
puts tipo1
puts tipo2