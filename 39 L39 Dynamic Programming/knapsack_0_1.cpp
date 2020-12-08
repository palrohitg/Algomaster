// Include the current elements or leave it
// Building the solution from bottoms up
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct item {
	int wt;
	int val;
};


ll solve(vector<item> arr, int n, int W) {

	ll dp[n + 1][W + 1];

	// Initialized the values
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= W; j++) {
			dp[i][j] = 0;
		}
	}

	/*
		Iterate over the items and maintain the dp state for the items
	*/
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= W; j++) {
			// cur weight of items
			int weight = arr[i].wt;
			if (weight <= j) {
				dp[i][j] = max(arr[i].val + dp[i - 1][j - arr[i].wt], dp[i - 1][j]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return dp[n][W];
}

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n, W; cin >> n >> W;
	vector<item> arr(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> arr[i].wt >> arr[i].val;
	}


	cout << solve(arr, n, W);



	return 0;
}