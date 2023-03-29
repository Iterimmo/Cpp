
SELECT  
    rental_duration, 
    COUNT(rental_rate)

FROM sakila.film
WHERE rental_rate > 4.00
GROUP BY rental_duration
ORDER BY COUNT(rental_rate) DESC;