SELECT 
	Code,
	Name,
    Continent,
	GNP
   
FROM world.country
WHERE GNP > ALL (
	SELECT 
    AVG(GNP)
    FROM world.country 
);