# Write your MySQL query statement below
select name as Customers from 
Customers as c
where id NOT IN (select customerId from Orders);