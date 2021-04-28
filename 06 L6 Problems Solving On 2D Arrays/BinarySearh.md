1. Find Minimum in Rotated And Sorted Arrays

```cpp
class Solution {
public:
	int findMin(vector<int>& nums) {
		int low = 0;
		int high = nums.size() - 1;

		while (low < high) {
			int mid = (low + high) / 2;
			if (nums[mid] > nums[high]) {
				low = mid + 1;
			}
			else {
				high = mid;
			}
		}
		return nums[high];
	}
};
``` 


2. 