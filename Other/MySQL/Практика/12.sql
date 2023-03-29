SELECT city, COUNT(city) as Количество
FROM trip
GROUP BY city
ORDER BY COUNT(city) DESC
LIMIT 2;