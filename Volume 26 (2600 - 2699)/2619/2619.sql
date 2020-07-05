SELECT products.name, providers.name, products.price FROM products
JOIN providers ON products.id_providers = providers.id
JOIN categories ON categories.id = products.id_categories
WHERE categories.name = 'Super Luxury' AND products.price > 1000