# Write your MySQL query statement below
select v.customer_id as customer_id, count(customer_id) as count_no_trans
from Visits as v
left join Transactions as t
on v.visit_id=t.visit_id
where t.amount is null
group by v.customer_id;
/*SELECT customer_id,
       COUNT(*) AS count_no_trans
FROM Visits v
WHERE NOT EXISTS
(
    SELECT 1
    FROM Transactions t
    WHERE t.visit_id = v.visit_id
)
GROUP BY customer_id;*/