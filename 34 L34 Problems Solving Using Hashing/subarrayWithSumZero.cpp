// Amazon tag

#include<bits/stdc++.h>
using namespace std;

int longestSubArraySumToZero(vector<int> &nums, int k, int n) {

	// hashmap to store unique sum and w.r.t index
	unordered_map<int, int> map;
	int curSum = 0;
	int len = 0;

	for (int i = 0; i < n; i++) {
		curSum += nums[i];

		// while traverse from start if the sum becomes k
		if (curSum == k) {
			len = max(len, i + 1);
		}

		// check in the hashmaps if same sum is present or not, if present
		// then compute the infactive length
		if (map.find(curSum - k) != map.end()) {
			int idx = map[curSum - k];
			len = max(len, i - idx);
		}

		// if you see the elment first time than insert in the hashamap to get the greater lengths
		if (map.find(curSum) == map.end()) {
			map[curSum] = i;
		}
	}
	return len;
}


int main() {
	/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/
	int t; cin >> t;
	vector<int> arr;
	while (t--) {
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			int data; cin >> data;
			arr.push_back(data);
		}
		cout << longestSubArraySumToZero(arr, k, n);
		cout << endl;
		arr.clear();
	}

	return 0;
}