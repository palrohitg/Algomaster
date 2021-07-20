#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;

		long long int sum = 0;
		for (int i = 0; i < n; i++) {
			int num; cin >> num;
			sum += num;
		}

		if (sum % k == 0) cout << "0";
		else cout << "1";
		cout << endl;
	}


	return 0;
}