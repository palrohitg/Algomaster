# Write your mysql query statement below 
-- https://www.youtube.com/watch?v=BODbEeoE28M
-- list of IDs 
    -- temperatures today > yesterday


SELECT 
    w2.id 
FROM Weather w1
JOIN Weather w2 ON DATEDIFF(w2.recordDate, w1.RecordDate) = 1
and w2.Temperature > w1.Temperature; 


-- Use the self join to join the table with itself. 