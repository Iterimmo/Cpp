# Таблица городов, состоящий из двух слов и идентификатором страны [100-999]
SELECT
	city_id AS ID,
    city AS Город,
    country_id AS ID_Страны,
    last_update AS Последнее_обновление
FROM sakila.city
WHERE city LIKE '% %' AND country_id  LIKE '___';