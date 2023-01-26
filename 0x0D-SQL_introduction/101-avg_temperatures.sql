-- Displays the avg temprature (in F)
-- by city ordered by descending temp.
SELECT city, AVG(value) AS avg_temp FROM temperatures GROUP BY city ORDER BY avg_temp DESC;
