SELECT 
	Code,
    Name,
    Continent,
    (SELECT MAX(LifeExpectancy) FROM world.country) - LifeExpectancy as Селекты
FROM world.country
WHERE LifeExpectancy < ANY (
	SELECT MAX(LifeExpectancy)
    FROM world.country
)
ORDER BY Name;