# Most Important Graph Concepts Here
1. Kill Process  Done 
2. Jumping to Zero Done 
3. Word Ladders Done 
4. Bipartite Graph 
5. Dependent Course 
6. Rotten Oranges 
7. Knight Moves 
8. Walls and Gates 
9. Friends Groups 
10. No of Islands 
11. Clone Graph 
12. Max Area of Islands 
13. Dependent Course II 


## New Questions 2 April
1. Find a whether a path exits
2. BFS / DFS traversal Algorithms 
3. Snake and ladders 
4. No of islands (Query Problem to Solved) Disjoint Set Union.
    a. No of islands II 
    b. No of distinct Islands
    c. Max Area of islands 
    d. Count Sub islands
5. Rotten Oranges


## Different Type of Indexing and Their UseCase for Interview Experience
1. Unique Indexes 
2. Full text Indexes 
3. Primary Indexes 
4.  




========================= 
Notes : For Graphs 
1. Steps of Knight Postions: BFS Approach
    - Create Target = (tx, ty) , Start = (x1, y1) 
    - Create queue<pair<int,int>> q; and push the current elements{x1, y1}; 
    - vector<vector<bool>>visited(n, vector<bool>(n, false)); 


## Solution For Top Graph Problem 
1. No of Islands 
```cpp 
#include<bits/stdc++.h>
using namespace std;

// currently this is the dfs call
void markCurrentIslands(vector<vector<char>> &mat, int x, int y, int rows, int col) {
    if (x < 0 || x >= rows || y < 0 || y >= col || mat[x][y] == '0') {
        return; 
    } 
    mat[x][y] = '0'; 
    markCurrentIslands(mat, x-1, y, rows, col);
    markCurrentIslands(mat, x+1, y, rows, col);
    markCurrentIslands(mat, x, y-1, rows, col);
    markCurrentIslands(mat, x, y+1, rows, col);
    return; 
}


int noOfIslands(vector<vector<char>> &ch, int row, int col) {
    // Just Iterate using two loops here 
}


int main() {    
    
    vector<vector<char>> mat; 
    int r,c; 
    cin >> r >> c; 
    for (int i=0; i < r; i++) {
        vector<char> ch; 
        for (int j=0; j < c; j++) {
            char data; cin >> data; 
            ch.push_back(data); 
        }
        mat.push_back(ch); 
    }

    return 0; 
}
```


## 3. Palindromic Strings 
```cpp
bool paildromic(int x) {
    string s = to_string(x); 
    string t = s; 
    reverse(t.begin(), t.end()); 
    return s == t; 
}
```

## 4. Container with Most 
```python 

# Move the Start and End where you got the smaller elements itself.
class Solution:
    def maxArea(self, height: List[int]) -> int:
        n = len(height)
        
        start = area = 0 
        end = n-1
    
        while(start <= end):
            curr_area = min(height[start], height[end]) * (end - start)
            area = max(area, curr_area)
            if (height[start] < height[end]):
                start += 1
            else:
                end -= 1
        
        return area
```

## 5. Integer to Roman Easy 
```cpp
class Solution {
public:
    string intToRoman(int num) {
        
        int codeInt[] = {1000, 900, 500, 400, 100, 90, 50 , 40, 10, 9, 5, 4, 1};
        int n = sizeof(codeInt)/sizeof(codeInt[0]);
        
        string code[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX","V", "IV", "I"}; 
        string ans = ""; 
        
        for (int i = 0; i < n; i++) {
            while (codeInt[i] <= num) {
                ans += code[i]; 
                num -= codeInt[i];  
            }
        }
        
        return ans; 
    }
};
``` 

## 6. Letter Combination of a Phone Number 
```cpp
class Solution {
    private:
        void solve(string digits, int index, string output, string mapping[], vector<string> &ans) {  
            
            if (index >= digits.length()) {
                ans.push_back(output); 
                return; 
            }
            int number = digits[index] - '0'; 
            string value = mapping[number]; 
           
            for (int i = 0; i < value.length(); i++) {
                output.push_back(value[i]); 
                solve(digits, index+1, output, mapping, ans); 
                output.pop_back(); 
            }
            
            return; 
        }
    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans; 
        if (digits == "") {
            return ans; 
        }
        
        string output; 
        int index = 0; 
        string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 
        solve(digits, index, output, mapping, ans); 
        return ans; 
    }
};
```


## 7. Remove Duplicated from a Sorted / Unsorted Linked List 
```cpp
class Solution {
public:
	bool isValid(string s) {
		stack<char> st;

		for (auto i : s) {
			if (i == '(' or i == '{' or i == '[') {
				st.push(i);
			}
			else {
				if (st.empty() or (st.top() == '(' and i != ')') or (st.top() == '[' and i != ']') or (st.top() == '{' and i != '}')) {
					return false;
				}
				st.pop();
			}
		}
		return st.empty();
	}
};
```

## 8. Merge Two Sorted Linked Lists Into One 
```cpp 
// Solve this kind of questions using recursion very easily. 

```

## 9. Generate Parenthesis 
```cpp
class Solution {
public:
    void helper(vector<string> &ans, int open, int close, int n, string s) {
        if (open == n and close == n) {
            ans.push_back(s);
            return ; 
        }
        
        if (open < n) {
            helper(ans, open+1, close, n,  s + "(" ); 
        } 
        if (close < open) {
            helper(ans, open, close+1, n,  s + ")" ); 
        }
    }
    vector<string> generateParenthesis(int n) {
       vector<string> ans; 
       helper(ans, 0, 0, n, ""); 
       return ans; 
    }
};
```

## 10. Reverse in K Groups 



## 11. Search in Rotated Sorted Array 
```python
# Need to specify which part of the arrays is sorted  
# Left half is sorted or not right is sorted 
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

## 12. Rotate the matrix by the 90* 
```cpp
// Inplace algorithms should be solved by the data here 
``` 



## 13. Generate All UseCases:
```python
# Use the yields statements when you want to read the data in the 
# In the large files, it not feasible to load the whole files in the memory 
# Itself. 

import random
import time

def sensor_data_generator():
    while True:
        # Simulate sensor data
        yield random.randint(0, 100)
        time.sleep(1)

# Usage
sensor = sensor_data_generator()
for _ in range(5):
    print(next(sensor))
``` 


## 14. Maximum Path Sum 
```cpp
1. If node == NULL : return 0 
2. leftSum = max(0, maxPathSum(root->left, maxi)) // Path Sum handle the negative score for the elements 
2. rightSum = max(0, maxPathSum(root->right, maxi)) // Path Sum handle the negative score for the elements 
3. max_sum = max(max_sum, root->val + leftSum + rightSum) // Path Sum handle the positive score for the elements
4. root->val + max(left sum, rightsum) 
``` 

## Find the Boundary Traversal of the Tree
```cpp
// find the Boundary Traversal of the binary tree we have 



```

## Dyanmic Programming Problem Statement: 
```cpp

/*
    Similar to fibonnacci series 
    return ways(n-1) + ways(n-2); 

    int countWays(int n, int dp[])
    {
        if (n <= 1)
            return dp[n] = 1;
    
        if (dp[n] != -1) {
            return dp[n];
        }
        dp[n] = countWays(n - 1, dp) + countWays(n - 2, dp);
        return dp[n];
    }
 
// Driver Code
int main()
{
    int n = 4;
    int dp[n + 1];
    memset(dp, -1, sizeof dp);
    cout << "Number of ways = " << countWays(n, dp);
    return 0;
}

*/ 

```