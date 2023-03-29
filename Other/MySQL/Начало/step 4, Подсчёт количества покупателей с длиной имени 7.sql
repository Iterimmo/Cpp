# Подсчёт количества покупателей с длиной имени 7
SELECT DISTINCT COUNT(first_name)  
FROM sakila.customer
WHERE first_name LIKE '_______'
ORDER BY first_name
;