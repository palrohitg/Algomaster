/*
	kth largest elements in the arrays list

	input :
	arrays : [3, 2, 1, 5 ,6, 4]    k = 2
		[6, 5, 4, 3, 2, 1], k - 1
	output :
	     5

	 Approach 1: Simple approach
	 1. Sort the arrays in descending
	 2. pick the kth elements

	 TC : NlogN
	 SC : O(1)

	 Approch 2 : heap
	 1. insert all the element in heap each nlogn

	 arrays : 3, 2, 1 , 5, 6 ,4 ;
	          1 , 2 ,3 ,4 ,5 , 6
     		  logn, k elements, nlogk
      n elements : care about only k elements

       3, 5,
       6 , 5

*/


class Solution {

public:
	int findKthLargest(vector<int>& nums, int k) {

		sort(nums.begin(), nums.end(), greater<int>());
		int ans = nums[k - 1];
		return ans;
	}
};



class Solution {

public:
	int findKthLargest(vector<int>& nums, int k) {

		priority_queue<int, vector<int>, greater<int>> pq;

		// insert first k element in heaps
		for (int i = 0; i < k; i++) {
			pq.push(nums[i]);
		}

		for (int i = k; i < nums.size(); i++) {

			if (pq.top() < arr[i]) {
				pq.pop();
				pq.push(arr[i]);
			}

		}

		return pq.top();
	}
};