# Write your MySQL query statement below
select  product_id from Products where low_fats='Y' and recyclable='y' 

# -- SELECT: Retrieve only the product_id column.
-- FROM: Read data from the Products table.
-- WHERE: Filter rows where the product is low fat ('Y' = Yes).
-- AND: Both conditions must be true. recyclable = 'Y' means the product is recyclable.