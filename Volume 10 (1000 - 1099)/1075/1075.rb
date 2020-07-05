#!/usr/bin/env ruby

n = gets.to_i
for i in 1..9999
    if i % n == 2
        puts i
    end
end