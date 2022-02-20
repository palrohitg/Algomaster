class Solution {
public:
	int search(vector<int>& nums, int target) {

		int n = nums.size();
		int low = 0;
		int high = n - 1;

		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (nums[mid] == target) {
				return mid;
			}
			// check if left part is sorted
			else if (nums[low] <= nums[mid]) {
				// check if the target element lies in left part
				if (target >= nums[low] and target <= nums[mid]) {
					high = mid - 1;
				}
				else {
					low = mid + 1;
				}
			}
			else {
				// check if right part is rotated
				if (target >= nums[mid] and target <= nums[high]) {
					low = mid + 1;
				}
				else {
					high = mid - 1;
				}
			}
		}
		return -1;
	}
};

// TC : O(logN)
// SC : O(1)