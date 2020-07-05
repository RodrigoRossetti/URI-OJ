t1 = t2 = t3 = i1 = i2 = i3 = 0
for i in 0...gets.to_i
    s = gets.chomp
    l1 = Array.new(gets.split.map(&:to_f))
    l2 = Array.new(gets.split.map(&:to_f))
    t1 += l1[0]
    t2 += l1[1]
    t3 += l1[2]
    i1 += l2[0]
    i2 += l2[1]
    i3 += l2[2]
end
print "Pontos de Saque: %.2f" % [i1/t1*100] + " %.\n"
print "Pontos de Bloqueio: %.2f" % [i2/t2*100] + " %.\n"
print "Pontos de Ataque: %.2f" % [i3/t3*100] + " %.\n"