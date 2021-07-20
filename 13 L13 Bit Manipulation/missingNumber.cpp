/*
Approach 1 :
Intution :
if order then it would be easy to check which number is missing
example 0 1 2 3 4 7

TC : O(NlogN)
SC : O(N)


Approach 2 :




Approch 3 : XOR operations

*/




class Solution {
public:
	int missingNumber(vector<int>& nums) {
		// iterate over the vectors
		// xor for all the values
		sort(nums.begin(), nums.end());

		int ans = nums.size();
		int i = 0;

		while (i < nums.size()) {
			if (nums[i] == i) {
				i++;
			}
			else {
				ans = i;
				break;
			}
		}

		return ans;
	}
};