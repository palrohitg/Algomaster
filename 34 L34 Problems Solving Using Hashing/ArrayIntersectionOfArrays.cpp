// Find all the common element in the arrays and
// Store all the elments in the result arrays and return the result arrays
/*
	Approach-> 1
	1. Store one arrays in the hashmap searching time O(1), Element with frequency
	2. Decrement the frequency if element is found.

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> result;

void intersectionElement(vector<int> &v1, vector<int> &v2) {

	unordered_map<int, int> map; // key->value, value->index

	for (auto num : v1) {
		map[num]++;
	}

	for (auto num : v2) {

		// check current element is present on hashtable or not
		if (map.find(num) != map.end() and map[num] > 0) {
			// insert the number in the result arrays and decrement the count by one
			result.push_back(num);
			map[num]--;
		}
	}
	return;
}

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	vector<int> v1;
	vector<int> v2;

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int data; cin >> data;
		v1.push_back(data);
	}

	for (int i = 0; i < n; i++) {
		int data; cin >> data;
		v2.push_back(data);
	}

	intersectionElement(v1, v2);
	sort(result.begin(), result.end());

	cout << "[";
	for (int i = 0; i < result.size() - 1; i++) {
		cout << result[i] << "," << " ";
	}
	cout << result[result.size() - 1] << "]";


	return 0;
}