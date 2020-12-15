/*

	Determine how much water you can trap about rain is over.


	Approach -->
	1. Compute two arrays left and right which store the maximum height
	   from the left and right sides
	2. Compuate the water which the current state of left and right arrays

	// reserve only allocation
	// resize allocations + instances

	https://ide.codingblocks.com/s/388950

*/

#include<bits/stdc++.h>
using namespace std;


int trap(vector<int> height) {
	cout << height.size();

	int n = height.size();
	vector<int> left, right;
	left.reserve(n);
	right.reserve(n);

	int _max = INT_MIN;

	// left most greatest elements
	for (int i = 0; i < n; i++) {
		int best = max(_max, height[i]);
		left [i] = best;
		_max = left[i];
	}

	// right most greatest elements
	_max = INT_MIN;
	for (int i = n - 1; i >= 0; i--) {
		right[i] = max(_max, height[i]);
	}

	int water = 0;
	for (int i = 0; i < n; i++) {
		water += min(left[i], right[i]) - height[i];
	}

	return water;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	vector<int> v;

	while (t--) {
		int n; cin >> n;
		v.reserve(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		cout << v[0];
		// cout << trap(v) << endl;

		v.clear();
	}

	return 0;
}