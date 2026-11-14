# Write your MySQL query statement below
SELECT d.name as Department, e.name as Employee, e.salary as Salary
from Employee as e
join Department as d
on e.departmentId = d.id
WHERE (e.departmentId, e.salary) in 
(select departmentId, max(salary) from
  Employee 
   GROUP by departmentid);