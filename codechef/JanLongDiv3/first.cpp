#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	while (t--) {
		int n, k, d; cin >> n >> k >> d;
		long long int total = 0;
		for (int i = 0; i < n; i++) {
			int data; cin >> data;
			total += data;
		}

		int contents = total / k;

		if (contents > d) {
			cout << d << endl;
		}
		else {
			cout << contents << endl;
		}

	}



	return 0;
}