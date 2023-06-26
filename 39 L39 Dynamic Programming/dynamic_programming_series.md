## Dynamic  Programming Questions 

```cpp
bool isSubsetSum(int set[], int n, int sum) {
    // Base Case 
    if (sum == 0) return true; 

    // Edge Case 
    if (n == 0) return false; 


    // Check if the values is less or not
    if (set[n-1] > sum) {
        return isSubsetSum(set, n-1, sum); 
    }

    // Include and Exclude Cases 
    return isSubsetSum(set, n-1, sum) || isSubsetSum(set, n-1, sum-set[n-1]); 
}
```


```cpp 
// Count the subsets with Sums Equal to given Sums 

``` 