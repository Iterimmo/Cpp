SELECT 
	Name as Название,
    Continent as Континент,
    LifeExpectancy as Продолжительность_жизни
FROM world.country
WHERE LifeExpectancy - (SELECT AVG(LifeExpectancy)FROM world.country) > 14
ORDER BY LifeExpectancy DESC;