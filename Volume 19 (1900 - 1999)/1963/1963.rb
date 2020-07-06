#!/usr/bin/env ruby

a, b = gets.split.map(&:to_f)
t = ((b/a)-1) * 100
print "%.2f" % [t] + "%\n"