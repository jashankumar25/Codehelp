# Write your MySQL query statement below
select p.product_name as product_name ,s.year as year,s.price as price
from Sales as s
left join Product as p
Using(Product_id);
#  on s.Product_id=p.Product_id;

