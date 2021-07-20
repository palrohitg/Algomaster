#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	map<int, vector<int>> m;
	m[0].push_back(1);
	// m[1].push_back({2, 2, 3});

	for (auto p : m[0]) {
		for (auto it = p.begin(); it != p.end(); it++) {
			cout << *it << endl;
		}
	}

	return 0;
}