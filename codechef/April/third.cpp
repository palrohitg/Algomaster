#include<bits/stdc++.h>
using namespace std;

int minStepThief(vector<vector<int>> dp, int n , int m, int i, int j) {
	// Base Case
	if (i == n - 1 and j == m - 1) {
		return dp[i][j];
	}

	// Recursive Case
	dp[i][j] = 1 + min(minStep(dp, n, m, i, j + 1), minStep(dp, n, m, i + 1, j + 1));
	return dp[i][j];
}

int minStepPolice(vector<vector<int>> dp, int n, int m, int i, int j) {
	// Base Case
	if (i == n - 1 and j == m - 1) {
		return dp
	}
}

int main() {

	int t; cin >> t;
	while (t--) {

		int n, m, x , y, a, b;
		cin >> n >> m >> x >> y >> a >> b;

		vector<vector<int>> dp(n, vector<int>(m));




	}


	return 0;
}