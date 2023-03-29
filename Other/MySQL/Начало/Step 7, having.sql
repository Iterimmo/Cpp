SELECT 
	Name AS Название,
	SUM(Population/ SurfaceArea) AS Плотность
FROM world.country
WHERE Name NOT LIKE "% %"
GROUP BY Name
HAVING SUM(Capital * LifeExpectancy) < 10000;