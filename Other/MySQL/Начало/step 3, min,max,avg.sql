SELECT 
	staff_id,
    ROUND(MAX(amount),0) AS Максимальная_сумма,
    ROUND(MIN(amount),0) AS Минимальная_сумма,
    ROUND(AVG(amount),0) AS Средняя_сумма
FROM sakila.payment
GROUP BY staff_id
ORDER BY staff_id;