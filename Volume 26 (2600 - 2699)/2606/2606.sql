SELECT products.id, products.name FROM categories
JOIN products ON products.id_categories = categories.id
WHERE categories.name LIKE 'super%'