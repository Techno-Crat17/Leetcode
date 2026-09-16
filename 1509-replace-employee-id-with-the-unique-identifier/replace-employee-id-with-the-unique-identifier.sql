# Write your MySQL query statement below

select Eu.unique_id,E.name from 
EmployeeUNI Eu right join 
Employees E on Eu.id=E.id;
