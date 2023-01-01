`18 Jan 2020`

## Arrays Questions 
| Problem Number | Problem Name | Status | Tag | 
|--- | --- | --- | --- | 
| 1 | Two Sum | 
| 2 | 3 Sum | 
| 3 | Word Search | 
| 4 | Binary Tree ZigZag level | 
| 5 | Best Time to sell Staock | 



```python 
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        IndexMap = {} 
        
        for i in range(len(nums)):
            complement = target - nums[i] 
            if IndexMap.get(complement) != None: 
                return [i, IndexMap[complement]]
            else:
                IndexMap[nums[i]] = i 

        return [] 
```

```python
# How to define minmum and maximum size of arrays 
max_profit, min_price = 0, float('inf') 
print(max_profit, min_price)
```