# Dynamic Programming (DP) Concepts and Main things to Remember: 

# Idenfication of DP Problem 

    1. Optimal Substructure Problem : Divide the problem into smaller subproblems of the same type 
        Example : sum(6) = sum(5) + 1; 

    2. Overlapping Subproblems : The same subproblem we have already solved in the past and we can store that answer in another DS like array, hashmaps 
        And it any pointe if we have to recomute the same subproblem we can easy look up into the stored ans. 
       Example : fibonnaci Nth 

# Two main approaches : 
    1. Top down DP  : Going into the depth of the problems down 
    2. Bottom Up DP : building the solution from the bottom 