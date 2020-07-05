#!/usr/bin/ruby

n = gets.to_f
fib = ((((1+Math.sqrt(5))/2)**n)-(((1-Math.sqrt(5))/2)**n))/Math.sqrt(5)
puts "%.1f" % [fib]