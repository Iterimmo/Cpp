SELECT name,city,per_diem,date_first,date_last FROM trip
WHERE name Like '%а %'
ORDER BY date_last DESC
;