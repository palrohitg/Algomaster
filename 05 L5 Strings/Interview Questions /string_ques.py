"""
- Letter combinations of a phone number 
- Valid Parenthesis 
- 
"""
# Print different combination of a tree recursions All the possiblities 


def dfs(index, res, nums, path, dic):
    if (index >= len(nums)):
        res.append(path) 
        return 
    string1 = dic.get(nums[index])
    for i in string1:
        dfs(index+1, res, nums, path+i, dic) 
        

res = [] 
nums = "23" 

dic = { "2": "abc", "3": "def", "4":"ghi", "5":"jkl", "6":"mno", "7":"pqrs", "8":"tuv", "9":"wxyz"}
dfs(0, res, nums, '', dic)
print(res) 
    
    