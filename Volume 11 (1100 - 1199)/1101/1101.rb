#!/usr/bin/env ruby

total = 0
a,b = Array.new(gets.split.map(&:to_i))
while a > 0 and b > 0
    if b < a
        a,b = b,a
    end
    for i in a..b
        total += i
        print "%d " % [i]
    end
    puts "Sum=%d" % [total]
    a,b = Array.new(gets.split.map(&:to_i))
    total = 0
end