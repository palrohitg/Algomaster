// Two Sum Easy
/*
	1. Approch :
	a. Pick up the first element and check that elements with every one O(N^2)


*/

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> indices;
		for (int i = 0; i < nums.size(); i++) {
			if (indices.find(target - nums[i]) != indices.end()) {
				return {indices[target - nums[i]], i}; // the remaining index and the current index too
			}
			indices[nums[i]] = i; // insert the elements and their index to
		}
		return {};
	}
};


