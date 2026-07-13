# Write your MySQL query statement below
select name from Customer where referee_id!=2 or referee_id is  null;

-- SELECT: Return only the name column.
-- FROM: Read data from the Customer table.
-- WHERE: Select customers whose referee_id is NOT 2.
-- OR: Also include customers with no referee (NULL). '=' cannot compare NULL, so use IS NULL.

-- SELECT name FROM Customer WHERE IFNULL(referee_id,0)!=2;

#<> Is same as !=