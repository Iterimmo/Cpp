UPDATE fine,
    (
     SELECT name,number_plate,violation
     FROM fine
     GROUP BY name,number_plate,violation
     HAVING COUNT(*)>1
    ) query_in
SET sum_fine = sum_fine * 2
WHERE date_payment IS NULL AND
      fine.name = query_in.name AND
      fine.number_plate = query_in.number_plate AND
      fine.violation = query_in.violation
     
;