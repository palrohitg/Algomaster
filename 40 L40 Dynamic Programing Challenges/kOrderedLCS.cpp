/*
	In addition to the two sequences, an additional parameter k was introduced.
	A k-ordered LCS is defined to be the LCS of two sequences if you are allowed to change atmost k
	elements in the first sequence to any value you wish to. Can you help Mancunian solve
	this version of the classical problem?


	1 <= N, M <= 2000
	1 <= k <= 5
	1 <= element in any sequence <= 109



	5 5 1
	1 2 3 4 5
	5 3 1 4 2

	3

*/

#include <bits/stdc++.h>

using namespace std;
const int N = 2002;
int n, m, k, arr1[N], arr2[N], DP[N][N][6];

int dp(int n, int m, int k) {

	if (k < 0)	return -1e7;

	if (n == 0 || m == 0)	return 0;

	int &ans = DP[n][m][k];

	if (ans != -1)	return ans;

	// not equal then this case
	ans = max(dp(n - 1, m, k), dp(n, m - 1, k));

	if (arr1[n] == arr2[m])	ans = max(ans, 1 + dp(n - 1, m - 1, k));
	ans = max(ans, 1 + dp(n - 1, m - 1, k - 1));

	return ans;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	assert(n >= 1 && n <= 2000);
	assert(m >= 1 && m <= 2000);
	assert(k >= 1 && k <= 5);
	for (int i = 1; i <= n; i++) {
		cin >> arr1[i];
		assert(arr1[i] >= 1 && arr1[i] <= (int)1e9);
	}
	for (int i = 1; i <= m; i++) {
		cin >> arr2[i];
		assert(arr2[i] >= 1 && arr2[i] <= (int)1e9);
	}
	memset(DP, -1, sizeof(DP));
	cout << dp(n, m, k);
	return 0;
}
