#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			if (i <= k) {
				cout << i << " ";
			}
			else {
				cout << -i << " ";
			}
		}
		cout << endl;
	}


	return 0;
}