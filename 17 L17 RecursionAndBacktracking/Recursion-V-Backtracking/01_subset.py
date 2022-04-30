# 1. subsets problems 
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans=[]
        return self.helper(nums,0,[],ans)
       
    
    def helper(self,nums,i,curr,ans):
        if i>=len(nums):        
            ans.append(curr.copy())
            return
        else:
            curr.append(nums[i])
            self.helper(nums,i+1,curr,ans)
            curr.pop()
            self.helper(nums,i+1,curr,ans)
        return ans
        
#2. 
def FindAllPermuWithSpace(curr_str, res, start, ln):
    #Base case
    if start == ln-1:
        res.append(curr_str)
        return
    
    #Left call with no change(without space combs)
    FindAllPermuWithSpace(curr_str, res, start+1, ln)
    
    #Right call with space and backtracking
    curr_str = curr_str[:start+1] + " " + curr_str[start+1:]
    FindAllPermuWithSpace(curr_str, res, start+2, ln+1)
    
    #Backtrack to original position(Parent state) for next possible cases
    curr_str = curr_str[:start+1]+curr_str[start+2:]
        
s = "ABC"
global res
res = []
FindAllPermuWithSpace(s, res, 0, len(s))
print(res)