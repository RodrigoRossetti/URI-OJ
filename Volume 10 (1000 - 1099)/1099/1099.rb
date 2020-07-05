#!/usr/bin/env ruby

count = 0
range = gets
for i in 0..range.to_i-1
    a, b = gets.split.map(&:to_i)
    if a.to_i < b.to_i
        for j in a.to_i+1...b.to_i
            if j % 2 != 0
                count += j
            end
        end
    else
        for j in b.to_i+1...a.to_i
            if j % 2 != 0
                count += j
            end
        end
    end
    puts "#{count}"
    count = 0
end