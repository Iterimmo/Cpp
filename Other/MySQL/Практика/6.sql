UPDATE fine f, payment p
SET f.sum_fine = IF((DATEDIFF(p.date_payment,p.date_violation)) <= 20,f.sum_fine / 2,f.sum_fine),
    f.date_payment = p.date_payment
WHERE f.date_payment IS NULL AND
      (f.name,f.number_plate,f.violation) = (p.name,p.number_plate,p.violation);
