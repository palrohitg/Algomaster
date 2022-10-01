class Solution {
public:
	int maxSubArray(vector<int>& nums) {

		int n = nums.size();
		int curMax = nums[0];
		int globalMax = nums[0];

		for (int i = 1; i < n; i++) {
			curMax = max(nums[i], curMax + nums[i]);
			globalMax = max(curMax, globalMax);
		}
		return globalMax;
	}
};