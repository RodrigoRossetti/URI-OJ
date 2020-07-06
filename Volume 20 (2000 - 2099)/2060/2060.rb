#!/usr/bin/env ruby

n = gets.to_i
two = three = four = five = 0
array = Array.new(gets.split(' '))
for i in 0...n
    if array[i].to_i % 2 == 0
        two += 1
    end
    if array[i].to_i % 3 == 0
        three += 1
    end
    if array[i].to_i % 4 == 0
        four += 1
    end
    if array[i].to_i % 5 == 0
        five += 1
    end
end
puts "%d Multiplo(s) de 2" % [two]
puts "%d Multiplo(s) de 3" % [three]
puts "%d Multiplo(s) de 4" % [four]
puts "%d Multiplo(s) de 5" % [five]