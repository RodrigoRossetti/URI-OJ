#!/usr/bin/ruby

a = Array.new(gets.split.map(&:to_i))
puts a.inject(:+)-3