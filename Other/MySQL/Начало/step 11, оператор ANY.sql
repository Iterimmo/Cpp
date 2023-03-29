
SELECT 
	payment_id,
    customer_id,
    staff_id
FROM sakila.payment
WHERE staff_id < ANY (
	SELECT 
    MIN(staff_id)
    FROM sakila.payment
    GROUP BY payment_id
);