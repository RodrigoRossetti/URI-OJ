#!/usr/bin/env ruby

n = gets.to_i
if (n == 1)
    puts "1"
elsif (n == 2)
    puts "1 1"
else
    v = [1, 1]
    for i in 2...n
        v[i] = v[i-1] + v[i-2]
    end
    
    for i in 0...n-1
        print "%d " % [v.reverse[i]]
    end
    puts "%d" % [v.reverse[i]]
end