SELECT temperature, COUNT(*) AS number_of_records FROM records
GROUP BY temperature, mark
ORDER BY mark