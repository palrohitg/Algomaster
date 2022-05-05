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


-- Delete the duplicate records from the Employee table 
select empname, department, age, gender, salary, Count(*) from emyDetails
group by empyname, department, age, gender, salary
having count(*) > 1

-- idea here to retain the max id and delete all other ids in table 
delete from empydetails where id not in (
    select max(id) from empyDetails groupby empyName, department, age , gender, salary
)