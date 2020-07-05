SELECT produts.name, providers.name
FROM produts, providers
WHERE products.id_providers = providers.id AND produts.id_categories = 6