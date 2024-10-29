# Write your MySQL query statement below
select project_id, avg(experience_years) as average_years
from project p, employee e
where p.employee_id = e.employee_id
group by project_id;