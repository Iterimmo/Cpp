SELECT 
	address,
    district,
    city_id
FROM sakila.address
WHERE district IN (
	SELECT district
    FROM sakila.address
    GROUP BY district
    HAVING COUNT(district) = 1
)
ORDER BY city_id DESC;