# Write your MySQL query statement below

SELECT MAX(DISTINCT salary) AS SecondHighestSalary
FROM Employee 
WHERE salary < (SELECT MAX(DISTINCT salary) FROM  Employee);

