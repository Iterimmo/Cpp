CREATE TABLE ordering AS
SELECT author,title,(SELECT AVG(amount) FROM book) AS amount
FROM book
WHERE amount < (SELECT AVG(amount) FROM book);
