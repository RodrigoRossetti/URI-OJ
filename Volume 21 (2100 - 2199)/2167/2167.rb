#!/usr/bin/env ruby

count = 0
range = gets
motor = Array.new(gets.split.map(&:to_i))
for i in 1...motor.length
    if motor[i] < motor[i-1]
        count = i+1
        break
    end
end
puts count