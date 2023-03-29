SELECT name, SUM((DATEDIFF(date_last,date_first)+1) * per_diem) AS Сумма 
FROM trip
GROUP BY name
HAVING COUNT(name) > 3
ORDER BY SUM((DATEDIFF(date_last,date_first)+1) * per_diem) DESC
;