#!/usr/bin/ruby

bit = gets.chomp
if bit.count('1') % 2 == 0
    bit += '0'
else
    bit += '1'
end
puts bit