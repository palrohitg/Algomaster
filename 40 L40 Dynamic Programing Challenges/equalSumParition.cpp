// KnapSack problems
/*
	Approach :
	1. Calculate the total sum
		a. if odd then return false. basic observations
		b. else find the sum/2 can we obtain any subset including or excluding some elements
	2. Recurisve break down the problems in the dp arrays
		where i --> sum we can obtains
		j --> elements in the arrays
*/

// class Solution {
// public:



// 	bool canPartition(vector<int>& nums) {

// 		int sum = 0;
// 		int n = nums.size();

// 		for (auto num : nums) {
// 			sum += num;
// 		}

// 		if (sum % 2 != 0) {
// 			return false;
// 		}

// 		bool dp[sum / 2 + 1][n + 1];

// 		// Zero sum is obtain because no need to include or exclude the elements
// 		for (int i = 0; i < n; i++) {
// 			dp[0][i] = true;
// 		}

// 		// when we have the no elements we cann't make any sum except zeros
// 		for (int i = 1; i < sum / 2; i++) {
// 			dp[i][0] = false;
// 		}

// 		// fill the dp for the another smaller problem by including the current elements or not
// 		for (int i = 1; i < sum / 2; i++) {
// 			for (int j = 1; j < n; j++) {

// 				// don't take the current elements
// 				dp[i][j] = dp[i][j - 1];

// 				// can we include the current elements
// 				if (i >= nums[j - 1]) {
// 					dp[i][j] = dp[i][j] || dp[i - nums[j - 1]][j - 1];
// 				}
// 			}
// 		}

// 		return dp[sum / 2][n];
// 	}
// };

#include<bits/stdc++.h>
using namespace std;


bool subsetSum(int arr[], int sum, int n) {

	if (sum == 0) return true; 
	if (n == 0) return false; 

	if (arr[n-1] > sum) {
		return subsetSum(arr, sum, n-1);
	}

	return subsetSum(arr, sum, n-1) || subsetSum(arr, sum-arr[n-1], n-1); 
}

bool equalPartition(int arr[], int n) {

	int sum = 0; 
	for (int i = 0; i < n; i++) {
		sum += arr[i]; 
	}

	if (sum % 2 != 0) {
		return false; 
	} 

	return subsetSum(arr, sum / 2, n); 
}


int main() {

	int arr[] = {5, 5, 2, 10}; 
	int size = sizeof(arr)/sizeof(arr[0]);

	bool ans; 
	ans = equalPartition(arr, size); 
	cout << ans << endl; 


	return 0; 
}
