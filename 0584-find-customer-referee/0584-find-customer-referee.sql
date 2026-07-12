# Write your MySQL query statement below
SELECT 
     name FROM Customer WHERE
IFNULL(referee_id,0)!=2;

#<> Is same as !=
/*
------------------------
SELECT
   name
FROM
   Customer
WHERE
    referee_id IS NULL OR referee_id!=2 ;*/