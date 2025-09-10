# Write your MySQL query statement below
select p.product_id  product_id ,p.product_name product_name
from Product p
left join Sales s
on p.product_id=s.product_id
where s.sale_date between '2019-01-01' and '2019-03-31'
  AND p.product_id NOT IN (
    SELECT product_id
    FROM Sales
    WHERE sale_date < '2019-01-01' OR sale_date > '2019-03-31'
)
group by product_id,product_name;
