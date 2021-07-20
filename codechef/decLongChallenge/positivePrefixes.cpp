#include<bits/stdc++.h>
using namespace std;


// Pass the vector by reference
void solve(vector<int> &v, int n, int k) {

	// when n == k, then make negative-->postive
	if (n == k) {
		for (int i = n; i > 0; i--) {
			if (v[i] < 0) {
				v[i] = i;
			}
		}
		return;
	}


	// when n is even and k is the half
	if (n % 2 == 0 and n % 2 == k) return;

	// when n is odd and k is n/2 + 1
	if (n % 2 != 0 and (n / 2) + 1 == k) return;


	// when is odd case
	if (n % 2 != 0) {

		// when k is greater than half
		if (k > (n / 2 + 1)) {
			int diff = k - (n / 2) + 1;

			// negative-->postive
			for (int i = n; i > 0; i--) {

				if (diff == 0) break;
				if (v[i] < 0) {
					v[i] = i;
					diff--;
				}
			}

		}

		if (k < (n / 2 + 1)) {
			int diff = (n / 2 + 1) - k;

			// make no of diff element postive-->negative
			for (int i = n; i > 0; i--) {

				if (diff == 0) break;
				if (v[i] > 0) {
					v[i] = -i;
					diff--;
				}
			}
		}
	}

	// when n is odd
	if (n % 2 == 0) {

		if (k > n / 2) {
			int diff = k - (n / 2);
			// make negative-->postive
			for (int i = n; i > 0; i--) {
				if (diff == 0) break;

				if (v[i] < 0) {
					v[i] = i;
					diff--;
				}
			}
		}

		if (k < n / 2) {
			int diff = (n / 2) - k;
			// mark postive-->negative
			for (int i = n; i > 0; i--) {
				if (diff == 0) break;
				if (v[i] > 0) {
					v[i] = -i;
					diff--;
				}
			}
		}
	}

	return;
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	vector<int> v;

	while (t--) {
		int n, k; cin >> n >> k;
		v.push_back(-1);
		// Assign the alernative index to arrays
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				v.push_back(-i);
			}
			else {
				v.push_back(i);
			}
		}

		solve(v, n, k);
		// print the elemnts
		for (int i = 1; i <= n; i++) {
			cout << v[i] << " ";
		}
		cout << endl;


		v.clear();
	}


	return 0;
}