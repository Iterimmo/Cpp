SELECT 
	length AS Рейтинг,
	MIN(rental_duration * ROUND(rental_rate,0)) AS Минимальное,
    MAX(rental_duration * ROUND(rental_rate,0)) AS Максимальное,
	AVG(rental_duration * ROUND(rental_rate,0)) AS Среднее
FROM sakila.film
GROUP BY length
ORDER BY length;