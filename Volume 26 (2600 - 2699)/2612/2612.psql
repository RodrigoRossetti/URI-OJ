SELECT DISTINCT movies.id, movies.name FROM movies, genres, actors, movies_actors
WHERE (((actors.id = movies_actors.id_actors) AND (actors.name IN ('Marcelo Silva', 'Miguel Silva'))
AND (movies.id = movies_actors.id_movies)) AND ((movies.id_genres = genres.id)
AND (genres.description = 'Action')))