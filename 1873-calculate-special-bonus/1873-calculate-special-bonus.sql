# Write your MySQL query statement below
select employee_id,

 CASE
           WHEN name REGEXP '^[^M]' AND employee_id % 2 <> 0 THEN salary
           ELSE 0
       END as bonus
       from Employees
       order by  employee_id;