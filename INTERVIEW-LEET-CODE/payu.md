```cpp 
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Returns Length of the required subarray
int maxLen(int arr[], int N)
{
	// Map to store the previous sums
	unordered_map<int, int> presum;

	int sum = 0; // Initialize the sum of elements
	int max_len = 0; // Initialize result

	// Traverse through the given array
	for (int i = 0; i < N; i++) {

		// Add current element to sum
		sum += arr[i];
		if (sum == 0)
			max_len = i + 1;

		// Look for this sum in Hash table
		if (presum.find(sum) != presum.end()) {
			// If this sum is seen before, then update
			// max_len
			max_len = max(max_len, i - presum[sum]);
		}
		else {
			// Else insert this sum with index
			// in hash table
			presum[sum] = i;
		}
	}

	return max_len;
}

// Driver's Code
int main()
{
	int arr[] = { 15, -2, 2, -8, 1, 7, 10, 23 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << "Length of the longest 0 sum subarray is "
		<< maxLen(arr, N);

	return 0;
}

```


Given an array with head node of sorted linked list, Convert it into a single linked list(sorted)
Different types of attack and how can we ensure safety from them. eg. DDOS, SQL injection.

Question on Join(Inner Join and Left Join).


## Level Order Traversal 
- Put the NULL values and use the queue 
- PreOrder Traversal use the maps and then use the orders/. 
