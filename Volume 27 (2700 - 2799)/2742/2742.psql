SELECT life_registry.name, ROUND(life_registry.omega*1.618, 3) AS "Fator N" FROM dimensions
JOIN life_registry ON life_registry.dimensions_id = dimensions.id
WHERE life_registry.name LIKE 'Richard%' AND (dimensions.name = 'C875' OR dimensions.name = 'C774')