/*
	- Find the nth ugly numbers .
	- Ugly number are those numbers whose prime factor or mutiple are 2, 3, 5 here.


	- Observation :
	- Looks how the ugly are numbers are generated then make an arrays.
	- select the minimum possible values at the particular indexes.

	- TC -> O(N) nth ugly numbers
	- SC -> O(N) need to create and arrays of nth numbers
*/



#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int solve(int n) {

	ll dp[n + 1];
	dp[0] = 1;
	int i2, i3, i5;

	i2 = i3 = i5 = 0;
	int next_ugly_no = dp[0];

	for (int i = 1; i < n; i++) {

		next_ugly_no = min(dp[i2] * 2, min(dp[i3] * 3, dp[i5] * 5));

		if (next_ugly_no == dp[i2] * 2) {
			i2 = i2 + 1;
			dp[i] = next_ugly_no;
		}

		if (next_ugly_no == dp[i3] * 3) {
			i3 = i3 + 1;
			dp[i] = next_ugly_no;
		}

		if (next_ugly_no == dp[i5] * 5) {
			i5 = i5 + 1;
			dp[i] = next_ugly_no;
		}
	}

	return next_ugly_no;
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		cout << solve(n) << endl;
	}


	return 0;
}