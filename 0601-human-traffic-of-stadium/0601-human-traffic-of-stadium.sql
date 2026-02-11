# Write your MySQL query statement below
SELECT id, visit_date, people
FROM (
    SELECT *,
           COUNT(*) OVER (PARTITION BY grp) AS cnt
    FROM (
        SELECT *,
               id - ROW_NUMBER() OVER (ORDER BY id) AS grp
        FROM Stadium
        WHERE people >= 100
    ) t1
) t2
WHERE cnt >= 3
ORDER BY visit_date;
