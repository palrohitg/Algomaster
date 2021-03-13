/*
	input : nums = [1, 2, ,3]
	1. we can't use the random access to priority_queue.

*/

priority_queue<int, vector<int>, greater<int>> pq;
int size;
KthLargest(int k, vector<int> nums) {
	size = k;
	for (int i = 0; i < nums.size(); i++) {
		pq.push(nums[i]);
		if (pq.size() > k) pq.pop();
	}
}

int add(int val) {
	pq.push(val);
	if (pq.size() > size) pq.pop();
	return pq.top();
}