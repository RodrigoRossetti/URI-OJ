#!/usr/bin/ruby

count = 0
motor = Array.new(gets.split.map(&:to_i))
for i in 0...motor.length
    if motor[i] == 1
        count = i+1
        break
    end
end
puts count