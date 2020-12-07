// Fibonacci series
// Current state is dependent on the last two variables

#include<bits/stdc++.h>
using namespace std;
#define inf 1e9

int solve(vector<int> arr, int n) {
	vector<int> dp(n + 1);

	// Cost to reach 1 state itself is nothings so make it 0
	dp[1] = 0;

	for (int i = 2; i <= n; i++) {

		int opt1 = abs(arr[i] - arr[i - 1]) + dp[i - 1];
		int opt2 = (i == 2) ? inf : abs(arr[i] - arr[i - 2]) + dp[i - 2];
		dp[i] = min(opt1, opt2);
	}

	return dp[n];
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n; cin >> n;
	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	cout << solve(arr, n);


	return 0;
}