/*

	nums = [1, 2, 3, 4, 5, 6, 7] and k = 3
	rotate 1 steps : [7, 1, 2, 3, 4, 5, 6]
	rotate 2 steps : [6, 7, 1, 2, 3, 4, 5]
	rotate 3 steps : [5, 6, 7 ,1, 2, 3, 4]

	Approaches 2 :
	a. Using a extra arrays (i + k) % length_of_arrays is the orginal index
	b. Then copies the content of the temp arrays to originals arrays

	Approches 3 : Using Cyclic Replacements
	lets look laters
*/

class Solution {
public:
	void rotate(vector<int>& nums, int k) {

		vector<int> temp(nums.size());

		for (int i = 0; i < nums.size(); i++) {
			temp[(i + k) % nums.size()] = nums[i];
		}

		// Copy the elements again to the original arrays
		for (int i = 0; i < nums.size(); i++) {
			nums[i] = temp[i];
		}
	}
};