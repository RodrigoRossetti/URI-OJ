SELECT customers.name, rentals.rentals_date FROM customers
JOIN rentals ON rentals.id_customers = customers.id
WHERE EXTRACT(MONTH FROM rentals.rentals_date) = 9 AND
      EXTRACT(YEAR FROM rentals.rentals_date) = 2016