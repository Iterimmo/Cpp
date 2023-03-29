SELECT address AS Адрес,district AS Описание,
    IF (city_id < 400 , 'смотреть', city_id)  AS Индекс,
	postal_code AS Код,
    phone AS Телефон 
FROM sakila.address
WHERE district IN ('West Greece','Taipei') AND postal_code BETWEEN 80000 AND 100000
ORDER BY postal_code DESC
;