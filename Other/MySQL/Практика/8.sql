DELETE FROM fine
WHERE YEAR(date_violation) <= 2020 AND MONTH(date_violation) < 2; 

SELECT * FROM fine;
