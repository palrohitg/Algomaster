```python 
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low = 0 
        high  =  len(nums) - 1

        while low <= high:
            mid = (low + high) // 2 
            if (nums[mid] == target): return mid 
            # Left part is sorted
            elif (nums[low] <= nums[mid]):
                # target element is lie between here 
                if (target >= nums[low] and target <= nums[mid]):
                    high = mid - 1 
                else:
                    low = mid + 1 
            else:
                # right part is sorted 
                if (target >= nums[mid] and target <= nums[high]):
                    low = mid+1
                else:
                    high = mid - 1 
        
        return -1 
```

```python 
# Median of two sorted arrays 
nums = [1, 2, 0, 19, 3]  
nums.sort() 
print(nums)
```

```python 
# allocation of max no of pages 

```