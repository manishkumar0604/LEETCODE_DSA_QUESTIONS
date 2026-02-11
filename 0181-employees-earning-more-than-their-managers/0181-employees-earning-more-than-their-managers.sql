# Write your MySQL query statement below
SELECT e1.name AS Employee   /*IN this question we using same table for employee as well as manager */
FROM Employee e1  /*e1 table for employee*/
JOIN Employee e2  /*e2 table for manager*/
ON e1.managerId = e2.id  
WHERE e1.salary > e2.salary;
