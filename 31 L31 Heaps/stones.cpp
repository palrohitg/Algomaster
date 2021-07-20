/*We have a collection of stones, each stone has a positive integer weight.

Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:

If x == y, both stones are totally destroyed;
If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.
At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)



Example 1:

Input: [2,7,4,1,8,1]
Output: 1

Approach 1:
1. Inserted all the elements in min heaps
2. If both the elements is same then, distory the stones means not to insert the elements
3. if both the elements is different then, generate a new stones and insert in the
   Heaps.
*/

int lastStoneWeight(vector<int>& A) {
	priority_queue<int> pq(begin(A), end(A));
	while (pq.size() > 1) {
		int x = pq.top(); pq.pop();
		int y = pq.top(); pq.pop();
		if (x > y) pq.push(x - y);
	}
	return pq.empty() ? 0 : pq.top();
}

Time O(NlogN)
Space O(N)