### Array Logical Questions

## 1. Roman to Integer 
```python
# Traversal from right to left 
# If right has bigger element then left perform minus operations 
# If left has smaller element then right perform add operations 

class Solution:
    def romanToInt(self, s: str) -> int:
        symbol_map = {
            "I" : 1, 
            "V" : 5, 
            "X" : 10, 
            "L" : 50, 
            "C"  : 100, 
            "D"  : 500,
            "M"  : 1000,   
        }   

        n = len(s) 
        total = symbol_map[s[-1]]
        i = n-2
        while(i >= 0):
            if (symbol_map[s[i]] < symbol_map[s[i + 1]]):
                total = total - symbol_map[s[i]] 
            else:
                total = total + symbol_map[s[i]] 
            i -= 1 

        return total
        

```