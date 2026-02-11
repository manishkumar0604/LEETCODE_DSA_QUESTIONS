# Write your MySQL query statement below
SELECT DISTINCT num AS ConsecutiveNums
FROM(
    SELECT num,
        LAG(num,1) OVER (ORDER BY id) AS prev,
        LEAD(num,1) OVER (ORDER BY id) AS next
    FROM Logs
) AS temp
WHERE num=prev AND num=next;
