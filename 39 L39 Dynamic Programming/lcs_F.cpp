// find the longest common subsequences in the strings

#include<bits/stdc++.h>
using namespace std;
int dp[3001][3001];

int lcs(string s, string t) {
	int n = s.length();
	int m = t.length();
	memset(dp, -1, sizeof(dp));

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {

			if (i == 0 || j == 0) {
				dp[i][j] = 0;
				continue;
			}

			if (s[i - 1] == t[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1]; // smaller subproblems
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[n][m];
}




void printLCS(string s, string t) {

	int lcsLen = lcs(s, t);
	char ans[lcsLen + 1];
	ans[lcsLen] = '\0';
	int n = s.length();
	int m = t.length();
	int i = n;
	int j = m;
	while (i > 0 and j > 0) {

		if (s[i - 1] == t[j - 1]) {
			ans[lcsLen - 1] = s[i - 1];
			lcsLen--;
			i--;
			j--;
			continue;
		}

		if (dp[i][j - 1] > dp[i - 1][j]) {
			j--;
		}
		else {
			i--;
		}

	}

	cout << ans;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s, t;
	cin >> s >> t;
	printLCS(s, t);

	return 0;
}