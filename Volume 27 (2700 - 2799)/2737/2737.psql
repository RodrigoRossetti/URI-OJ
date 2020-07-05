SELECT lawyers.name, lawyers.customers_number AS customers_number FROM lawyers
WHERE lawyers.customers_number = (SELECT max(lawyers.customers_number) FROM lawyers)
UNION ALL
SELECT lawyers.name, lawyers.customers_number FROM lawyers
WHERE lawyers.customers_number = (SELECT MIN(lawyers.customers_number) FROM lawyers)
UNION ALL
SELECT 'Average', CAST(AVG(lawyers.customers_number) AS INTEGER) FROM lawyers;