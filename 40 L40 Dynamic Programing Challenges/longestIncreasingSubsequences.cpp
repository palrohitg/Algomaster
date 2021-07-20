/*
	Follow up question :
	1. Can we have the duplicate elements or strictly increasing elements


	# Approachs :
	1. Brute forces with recursive
	2. Bottom dp n^2
	3. patiences sorting nlogn approaches

	# Similar
	1. Increasing Triplet subsequences
	2. Russian Doll Envelops
	3. Max length of pair Chain
	4. Number of longest incrasing subsequences
	5. Minimum ASCII delete sum for two strings
	6. Minimum Numbers of Removals to Make mountain arrays

*/

// Bottom up approach using 1dp
class Solution {
public:
	int lengthOfLIS(vector<int>& nums) {
		int dp[nums.size() + 1];

		//  Initialized the dp arrays
		for (int i = 0; i < nums.size(); i++) {
			dp[i] = 1;
		}


		for (int i = 1; i < nums.size(); i++) {
			// j range from 0 to < I
			for (int j = 0; j < i; j++) {
				// arr[j] < arr[i] then increment the len by 1
				if (nums[j] < nums[i]) {
					dp[i] = max(dp[i], 1 + dp[j]);
				}
			}
		}

		// compute the max anwers
		int ans = INT_MIN;
		for (int i = 0; i < nums.size(); i++) {
			ans = max(ans, dp[i]);
		}

		return ans;
	}
};