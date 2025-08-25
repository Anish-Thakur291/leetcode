# Write your MySQL query statement below
select query_name ,round((sum(rating/position))/count(query_name),2) quality ,
ifnull(round((1/count(query_name))*100,2),0) poor_query_percentage
from Queries
group by query_name;