#!/usr/bin/ruby

c = r = s = 0
for i in 0...gets.to_i
    t = Array.new(gets.split(' '))
    if t[1] == 'C'
        c += t[0].to_f
    elsif t[1] == 'S'
        s += t[0].to_f
    elsif t[1] == 'R'
        r += t[0].to_f
    end
end
total = c+r+s
puts "Total: %d cobaias" % [total]
puts "Total de coelhos: %d" % [c]
puts "Total de ratos: %d" % [r]
puts "Total de sapos: %d" % [s]
puts "Percentual de coelhos: %.2f" % [(c*100)/total] + " %"
puts "Percentual de ratos: %.2f" % [(r*100)/total] + " %"
puts "Percentual de sapos: %.2f" % [(s*100)/total] + " %"