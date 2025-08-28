# Write your MySQL query statement below
select p.product_name ,sum(o.unit) unit
from Products p
 join Orders o
on p.product_id=o.product_id
where o.order_date LIKE "2020-02-%"
group by o.product_id
having unit>=100;