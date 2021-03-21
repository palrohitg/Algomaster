#include<bits/stdc++.h>
using namespace std;

/*
	Approach :
	1. check if the complemets is already present then return indexes
	2. Insert the pair(nums[i], i)


*/


vector<int> twoSum(vector<int> nums, int target) {

	unordered_map<int, int> m;

	// iterate over the vectors
	for (int i = 0; i < nums.size(); i++) {
		int complement = target - nums[i];

		// lookup in complements 1
		if (m.find(complement) != m.end()) {
			return vector<int> {i, m[complement]};
		}

		// insert in hashtable
		m[nums[i]] = i;
	}

	return vector<int> {};

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	vector<int>v{3, 2, 4};
	int target = 6;
	twoSum(v, target);

	vector<int> ans = twoSum(v, target);

	for (auto num : ans) {
		cout << num << " ";
	}

	return 0;
}


// 3 Sum : two pointer Questions
