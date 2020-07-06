#!/usr/bin/env ruby

patinhos = gets.to_i
while patinhos != -1
    puts (if patinhos > 0 then patinhos-1 else patinhos end)
    patinhos = gets.to_i
end