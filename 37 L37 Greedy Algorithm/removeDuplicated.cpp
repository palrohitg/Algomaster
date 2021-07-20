// Given a Sorted Arrays remove all the duplicated in the sorted arrays
/*
 1. Contraints Don't allocated the extra space, do this inplace O(1) with little
 	modfication in the original arrays
*/

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int n = nums.size();
		if (n == 0) return 0;

		int i = 0;
		for (int j = 1; j < nums.size(); j++) {
			if (nums[i] != nums[j]) {
				i++;
				nums[i] = nums[j];
			}
		}

		return i + 1;
	}
};