SELECT name,city, DATEDIFF(date_last,date_first)+1 AS Длительность
FROM trip
WHERE city <> 'Москва' AND city <> 'Санкт-Петербург'
ORDER BY DATEDIFF(date_last,date_first) DESC;
