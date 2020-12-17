// Given two numbers find the number of uniques paths exits
// move down and rights


#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// new content
	int m = 7;
	int n = 3;

	int dp[m][n] = {0};

	// first col with 1 ways only
	for (int i = 1; i < n; i++) {
		dp[0][i] = 1;
	}


	// first rows with 1 ways only
	for (int i = 1; i < m; i++) {
		dp[i][0] = 1;
	}

	// for the rest of the elments
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}