#include<bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;
	while (t--) {
		int n, m, x, y; cin >> n >> m >> x >> y;
		vector<int> ans;
		for (int i = 0; i < n; i++) {
			unordered_map<char, int> mp;
			for (int j = 0; j < m; j++) {
				char ch; cin >> ch;
				mp[ch]++;
			}

			int f = mp['F'];
			int p = mp['P'];
			if (f >= x or (f == x - 1 and p >= y)) {
				ans.push_back(1);
			}
			else {
				ans.push_back(0);
			}
		}

		for (auto a : ans) {
			cout << a;
		}
		cout << endl;
	}


	return 0;
}