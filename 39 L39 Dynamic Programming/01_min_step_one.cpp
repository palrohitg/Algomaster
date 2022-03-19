/*
	Find min steps to reach one:
		a.
		b.

Time Complexity: O(n), as there will be n unique calls.
Space Complexity: O(n)
*/

#include<iostream>
using namespace std;

// Recursive approach :
int minStep(int n, int dp[]) {

	if (n == 1) return 0;

	// check if exists in cache
	if (dp[n] > 0) {
		return dp[n];
	}

	int op1 = minStep(n - 1, dp);
	int min_step = op1;

	if (n % 2 == 0) {
		int op2 = minStep( n / 2, dp);
		if (op2 < min_step) {
			min_step = op2;
		}
	}

	if (n % 3 == 0) {
		int op3 = minStep( n / 3, dp);
		if (op3 < min_step) {
			min_step = op3;
		}
	}

	dp[n] = 1 + min_step;
	return dp[n];
}

// Overlapping problem is currently have existing
int main() {
	int n = 10;
	int dp[n + 1];

	// Ensure not take the garbage values
	for (int i = 0; i <= n; i++) {
		dp[i] = 0;
	}
	cout << minStep(n, dp);
	return 0;
}