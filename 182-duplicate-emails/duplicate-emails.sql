# Write your MySQL query statement below
select email as Email from person
GROUP by email
having count(*) > 1;