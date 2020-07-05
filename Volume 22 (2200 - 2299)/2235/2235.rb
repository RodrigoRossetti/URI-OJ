a, b, c = Array.new(gets.split.map(&:to_i))
if a == (b-c).abs or c == (b-a).abs or b == (a-c).abs or b == a or b == c or c == a
    puts "S"
else
    puts "N"
end