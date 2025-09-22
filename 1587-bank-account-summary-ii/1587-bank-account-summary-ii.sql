# Write your MySQL query statement below
select u.name name , sum(t.amount) balance
from Transactions t
  join  Users u
on t.account=u.account
group by u.name
having balance>10000;