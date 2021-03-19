class Solution {
public:
	vector<int> runningSum(vector<int>& nums) {
		vector<int> runningSum;
		int n = nums.size();

		runningSum.push_back(nums[0]);

		for (int i = 1; i < n; i++) {
			runningSum.push_back(runningSum[i - 1] + nums[i]);
		}

		return runningSum;
	}
};