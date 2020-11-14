/*

	https://leetcode.com/problems/next-permutation/
	Constant space O(1)
	time complexity-> O(N) + O(N) + O(N)

	Approach -->
	1. find the non-increasing element from the right
	2. immediate greater element from the right
	3. swap the element
	4. reverse the i+1 index elements


*/
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

	void swap(vector<int> &nums, int i, int j) {

		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;

	}

	void reverse(vector<int> &nums, int start) {

		int end = nums.size() - 1;

		while (start < end) {
			swap(nums, start, end);
			start++;
			end--;
		}
	}


	void nextPermutation(vector<int>& nums) {

		int i = nums.size() - 2;
		while (i >= 0 and nums[i] >= nums[i + 1]) i--;

		// means we found at element that is non-increasing from right
		if (i >= 0) {

			int j = nums.size() - 1;
			while (j >= 0 and nums[j] <= nums[i]) j--;

			// swap the element
			swap(nums, i, j);

			// reverse the element from i + 1
		}

		reverse(nums, i + 1);
		// print out the arrays
		for (auto num : nums) {
			cout << num;
		}
	}
};

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	vector<int> nums{6, 5, 1, 4, 3, 0};
	nextPermutation(nums);


	return 0;
}
