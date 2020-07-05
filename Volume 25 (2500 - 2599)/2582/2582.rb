#!/usr/bin/ruby

Musica = Hash[0 => "PROXYCITY", 1 => "P.Y.N.G.",  2 => "DNSUEY!",  3 => "SERVERS", 4 => "HOST!", 
	5 => "CRIPTONIZE", 6 => "OFFLINE DAY", 7 => "SALT", 8 => "ANSWER!", 9 => "RAR?",  10 => "WIFI ANTENNAS"]
	
	for i in 0...gets.to_i
		a, b = gets.split(' ').map(&:to_i)
		puts Musica[a+b]
	end