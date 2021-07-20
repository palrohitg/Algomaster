
/*
	inputs : [1, 1, 1, 2, 2, 3]
	outputs : [1, 2]
	k = 2


	1 -> 3
	2 -> 2
	3 -> 1

	TC :
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {

		unordered_map<int, int> m;

		// frequency of each elements O(N)
		for (auto num : nums) {
			m[num]++;
		}

		// Min heaps
		priority_queue < pair<int, int> , vector < pair<int, int>>, greater<pair<int, int>> > pq;

		// NlogK
		for (auto it = m.begin(); it != m.end(); it++) {

			pq.push({it->second, it->first});

			if (pq.size() > k) {
				pq.pop();
			}

		}

		vector<int> ans;

		// O(K)

		while (!pq.empty()) {
			ans.push_back(pq.top().second);
			pq.pop();
		}

		return ans;
	}

	void hello() {
		cout << "hello" << endl;
	}
};

int main() {
	Solution s;
	vector<int> nums({1, 1, 1, 2, 2, 3});
	int k = 2;
	vector<int> ans = s.topKFrequent(nums, k);
	for (auto num : ans) {
		cout << num << " ";
	}
	// s.hello();

	return 0;
}