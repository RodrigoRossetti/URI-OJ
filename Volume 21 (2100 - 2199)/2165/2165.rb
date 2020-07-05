#!/usr/bin/ruby

line = gets.chomp
if line.size <= 140
    puts "TWEET"
else
    puts "MUTE"
end