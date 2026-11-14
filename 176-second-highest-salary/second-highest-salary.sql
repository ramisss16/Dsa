# Write your MySQL query statement below
SELECT (select DISTINCT salary  from Employee
ORDER by salary  Desc
limit 1 offset 1) as SecondHighestSalary;
