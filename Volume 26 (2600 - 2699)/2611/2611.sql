SELECT movies.id, movies.name FROM movies, genres
WHERE movies.id_genres = genres.id AND genres.description = 'Action'