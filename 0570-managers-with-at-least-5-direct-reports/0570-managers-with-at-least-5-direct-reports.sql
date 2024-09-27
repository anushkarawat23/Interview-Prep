# Write your MySQL query statement below
SELECT a.name
FROM employee a
JOIN employee b ON a.id = b.managerId
GROUP BY a.id
HAVING COUNT(b.id) >= 5;

