/*
	kth largest elements in the arrays list

	input :
		[3, 2, 1, 5 ,6, 4]    k = 2
		[6, 5, 4, 3, 2, 1]
	output :
	     5

	 Approach 1: Simple approach
	 1. Sort the arrays in descending
	 2. pick the kth elements

	 TC : NlogN
	 SC : O(1)

	 Approch 2 : heap
	 1. insert all the element in heap each nlogn

	 3, 2, 1 , 5, 6 ,4 ;

*/


class Solution {

public:
	int findKthLargest(vector<int>& nums, int k) {

		sort(nums.begin(), nums.end(), greater<int>());
		int ans = nums[k - 1];
		return ans;
	}
};