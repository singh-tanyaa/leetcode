# Write your MySQL query statement below
SELECT t1.unique_id AS unique_id,t2.name AS name
FROM Employees AS t2
LEFT JOIN 
EmployeeUNI AS t1
ON t1.id = t2.id