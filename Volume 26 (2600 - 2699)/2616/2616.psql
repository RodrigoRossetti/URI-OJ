SELECT customers.id, customers.name FROM customers
LEFT JOIN locations ON customers.id = locations.id_customers
WHERE locations.locations_date IS NULL
ORDER BY customers.id