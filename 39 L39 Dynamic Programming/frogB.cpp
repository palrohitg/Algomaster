// Slight modification and based on the coin change problems
// Implementation using bottom up fashions
#include<bits/stdc++.h>
using namespace std;


int solve(vector<int> arr, int n, int k) {
	vector<int> dp(n + 1);

	// Cost to reach 1 state itself is nothings so make it 0
	dp[1] = 0;

	for (int i = 2; i <= n; i++) {
		dp[i] = INT_MAX;
		for (int j = 1; j <= k; j++) {
			if (i - j >= 1) {
				int op1 = abs(arr[i] - arr[i - j]) + dp[i - j];
				dp[i] = min(dp[i], op1);
			}
		}
	}

	return dp[n];
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n, k; cin >> n >> k;
	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	cout << solve(arr, n, k);


	return 0;
}