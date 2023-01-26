-- Displays the top 3 of cities temperature during July and August
-- ordered by temp descending
SELECT city, AVG(value) AS avg_temp FROM temperatures WHERE MONTH(date) IN (7,8) GROUP BY city ORDER BY avg_temp DESC LIMIT 3;
