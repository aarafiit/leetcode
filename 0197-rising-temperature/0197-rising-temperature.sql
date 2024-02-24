# Write your MySQL query statement below
select prev.id
from Weather  prev
join Weather  curr
on DATEDIFF(prev.recordDate, curr.recordDate) = 1
WHERE 
    prev.temperature > curr.temperature;
