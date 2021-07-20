// MCM Based little variations

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[101][101];

ll sum(int arr[], int s, int e) {

	ll ans = 0;

	for (int i = s; i <= e; i++) {
		ans += arr[i];
		ans %= 100;
	}
	return ans;
}

ll solve(int arr[], int i, int j) {
	// Base Case
	if (i == j) return 0;

	if (dp[i][j] != -1) {
		return dp[i][j];
	}


	dp[i][j] = INT_MAX;

	for (int k = i; k < j; k++) {
		dp[i][j] = min(dp[i][j], solve(arr, i, k) + solve(arr, k + 1, j) + sum(arr, i, k) * sum(arr, k + 1, j));
	}
	return dp[i][j];
}

int main() {

	int n;

	while (scanf("%d", &n) != EOF) {
		int arr[101];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		memset(dp, -1, sizeof(dp));
		cout << solve(arr, 0, n - 1);
		cout << endl;
	}



	return 0;
}