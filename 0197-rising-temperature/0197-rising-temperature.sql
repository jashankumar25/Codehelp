# Write your MySQL query statement below
select w1.id 
from Weather as w1
join Weather as w2
ON w2.recordDate = DATE_sub(w1.recordDate, INTERVAL 1 DAY)
where w1.temperature>w2.temperature ;

/*# Write your MySQL query statement below
select w1.id 
from Weather as w1
join Weather as w2
where datediff(w1.recordDate,w2.recordDate)=1
and w1.temperature>w2.temperature;*/
