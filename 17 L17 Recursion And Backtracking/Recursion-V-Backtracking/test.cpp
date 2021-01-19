#include<bits/stdc++.h>
using namespace std;


int main() {

	set<vector<int>> s;

	s.insert({1, 2, 3});
	s.insert({1, 2, 3});

	int n = s.size();

	for (auto it = s.begin(); it != s.end(); it++) {
		for (auto num : *it) {
			cout << num << " ";
		}
		cout << endl;
	}
	return 0;
}