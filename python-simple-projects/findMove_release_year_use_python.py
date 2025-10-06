from imdb import IMDb
ia = IMDb()

movies = ia.search_movie("KGF2")

movie_id = movies[0].movieID 

movie = ia.get_movie(movie_id)

print("Title:", movie['title'])
print("Year:", movie['year'])