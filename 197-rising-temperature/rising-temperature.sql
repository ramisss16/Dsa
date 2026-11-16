# Write your MySQL query statement below
SELECT w.id as Id from Weather as w
join Weather as b
on DATEDIFF(w.recordDate , b.recordDate) = 1
where w.temperature > b.temperature;