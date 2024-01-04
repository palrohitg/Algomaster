from typing import List




class meeting:
    def __init__(self, start, end, pos):
        self.start = start
        self.end = end
        self.pos = pos




class Solution:

    # Here Specify the list Data structures 
    def maxMeetings(self, s: List[int], e: List[int], n: int) -> None:
        meet = [meeting(s[i], e[i], i + 1) for i in range(n)]
        print(meet)
        sorted(meet, key=lambda x: (x.end, x.pos))
        answer = []
        limit = meet[0].end
        answer.append(meet[0].pos)
        for i in range(1, n):
            if meet[i].start > limit:
                limit = meet[i].end
                answer.append(meet[i].pos)
        print("The order in which the meetings will be performed is ")
        for i in answer:
            print(i, end=" ")




if __name__ == "__main__":
    obj = Solution()
    n = 6
    start = [1, 3, 0, 5, 8, 5] # we have the nth mettings, finally need to find the meetings 
    # Given the start and End time for each meetings. we need to figure out the
    # how often the maxmeetting we can have
    end = [2, 4, 5, 7, 9, 9]
    obj.maxMeetings(start, end, n)
  
    
"""
 -- Maximum no of meetings,in one meeting remains. 
 
"""

class Solution {
public:

	int trap(vector<int>& height) {
		int n = height.size();
		vector<int> leftHeight(n);
		vector<int> rightHeight(n);

		int leftHighest = 0;
		for (int i = 0; i < n; i++) {
			leftHighest = max(leftHighest, height[i]);
			leftHeight[i] = leftHighest;
		}

		int rightHighest = 0;
		for (int i = n - 1; i >= 0; i--) {
			rightHighest = max(rightHighest, height[i]);
			rightHeight[i] = rightHighest;
		}

		int totalStoredWater = 0;
		for (int i = 0; i < n; i++) {
			totalStoredWater += min(leftHeight[i], rightHeight[i]) - height[i];
		}

		return totalStoredWater;
	}
};

// C++ implementation of the approach 

#include <bits/stdc++.h> 
using namespace std; 

// Function to return the maximum 
// water that can be stored 
int maxWater(int arr[], int n) 
{ 
	// To store the maximum water 
	// that can be stored 
	int res = 0; 

	// For every element of the array 
	for (int i = 1; i < n - 1; i++) { 

		// Find the maximum element on its left 
		int left = arr[i]; 
		for (int j = 0; j < i; j++) 
			left = max(left, arr[j]); 

		// Find the maximum element on its right 
		int right = arr[i]; 
		for (int j = i + 1; j < n; j++) 
			right = max(right, arr[j]); 

		// Update the maximum water 
		res = res + (min(left, right) - arr[i]);  // current height minus kardiya hai 
	} 

	return res; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	cout << maxWater(arr, n); 

	return 0; 
}
 
// You can also solve this problem in O(N) and O(1) constants time Two Pointer approach here.
// C++ implementation of the approach  

Follow the steps mentioned below to implement the idea:

Take two pointers l and r. Initialize l to the starting index 0 and r to the last index N-1.
Since l is the first element, left_max would be 0, and right_max for r would be 0.
While l ≤ r, iterate the array. We have two possible conditions
Condition1 : left_max <= right max
Consider Element at index l
Since we have traversed all elements to the left of l, left_max is known 
For the right max of l,     We can say that the right max would  always be >= current r_max here
So, min(left_max,right_max) would always equal to left_max in this case
Increment l.
Condition2 : left_max > right max
Consider Element at index r
Since we have traversed all elements to the right of r, right_max is known
For the left max of l, We can say that the left max would  always be >= current l_max here
So, min(left_max,right_max) would always equal to right_max in this case
Decrement r.



#include <bits/stdc++.h> 
using namespace std; 

int maxWater(int arr[], int n) 
{ 
	// Indices to traverse the array 
	int left = 0; 
	int right = n-1; 

	// To store Left max and right max 
	// for two pointers left and right 
	int l_max = 0; 
	int r_max = 0; 

	// To store the total amount 
	// of rain water trapped 
	int result = 0; 
	while (left <= right) 
	{ 

	// We need check for minimum of left 
	// and right max for each element 
	if(r_max <= l_max) 
	{ 

		// Add the difference between 
		// current value and right max at index r 
		result += max(0, r_max-arr[right]); 

		// Update right max 
		r_max = max(r_max, arr[right]); 

		// Update right pointer 
		right -= 1; 
	} 
	else
	{ 

		// Add the difference between 
		// current value and left max at index l 
		result += max(0, l_max-arr[left]); 

		// Update left max 
		l_max = max(l_max, arr[left]); 

		// Update left pointer 
		left += 1; 
	} 
	} 
	return result; 
} 

// Driver code 
int main() { 
	int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}; 
	int N = sizeof(arr)/sizeof(arr[0]); 
	cout << maxWater(arr, N) << endl; 
	return 0; 
} 

// This code is contributed by avanitrachhadiya2155
