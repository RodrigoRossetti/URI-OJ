#!/usr/bin/env ruby

hd = Array.new(gets.split(' ').map(&:to_f))
media = hd[0] / hd[1]
puts "%.2f" % [media]