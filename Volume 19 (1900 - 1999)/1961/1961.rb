#!/usr/bin/ruby

a, n = gets.split.map(&:to_i)
win = 1
arr = Array.new(gets.split.map(&:to_i))
for i in 0...n-1
    if (arr[i+1] - arr[i]).abs > a
        win = 0
    end
end
if win == 1
    puts "YOU WIN"
else
    puts "GAME OVER"
end