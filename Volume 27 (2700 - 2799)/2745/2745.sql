SELECT people.name, ROUND(people.salary * 0.1, 2) AS salary FROM people
WHERE people.salary > 3000