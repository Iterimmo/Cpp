SELECT MONTHNAME(date_first) AS Месяц ,COUNT(MONTH(date_first)) AS Количество
FROM trip
GROUP BY MONTHNAME(date_first)
ORDER BY COUNT(MONTH(date_first)) DESC,MONTHNAME(date_first);


