## Floyd  Cycle Detection Algorithm to Find the Duplicates Elements 

```cpp

// 1. Remove duplicates from linked list (in one traversal).
// 2. Given an integer n, print all binaries of integers between 1 and n. But you can't use any bitwise operator.

 arr = 4, 2, 1 , 2, 3 


int findDuplicateNum(vector<int>& Arr) {
        
        int slow = Arr[0];
        int fast = Arr[0];
        do {
            slow = Arr[slow];
            fast = Arr[Arr[fast]];
        }while(slow != fast);
        
        fast = Arr[0];
        while(slow != fast) {
            slow = Arr[slow];
            fast = Arr[fast];
        }
        return fast;
        
    } 
```

```cpp
// 2. Search in 2D Matrix 
// Simple Top Right Corner se Search Start 
// Log(N*M) 
``` 

```cpp
// 
```