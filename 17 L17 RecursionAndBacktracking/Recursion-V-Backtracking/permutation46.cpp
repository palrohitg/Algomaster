/*
	Approaches :
	1. Backtracking Approaches :
		TC : O(N*N!) strings of length N would be have N! permuatation and it takes O(N) for one permuatations


*/



class Solution {
public:

	vector<vector<int>> ans;

	void helper(vector<int> &nums, int start, int size) {
		// Base case
		if (start == size) {
			ans.push_back(nums);
			return;
		}

		// iterate over the element and swap the current element for next elements
		for (int j = start; j < size; j++) {
			swap(nums[j], nums[start]);
			helper(nums, start + 1, size);
			swap(nums[j], nums[start]); // restore the arrays states
		}
		return;
	}

	vector<vector<int>> permute(vector<int>& nums) {

		helper(nums, 0, nums.size());
		return ans;
	}
};