/*
2
4 5
I::M
9 10
MIM_XII:M


*/

#include<bits/stdc++.h>
using namespace std;

int solve(char *str, int n, int k) {

	int i = 0;
	int j = 0;
	int ans = 0;

	for (; i < n; i++) {
		// found the index of magnets
		if (str[i] == 'M') {
			while (str[j] == 'I' and j < n) {

				// find the no of conducting sheet between the i and i and if any block cell then break it
				int start = min(i, j);
				int end = max(i, j);

				for (int k = start + 1; k < end; k++) {
					if (str[k] == ':') {
						count = count + 1;
					}
					// any point if i found the block cell then we cann't extract the magnets
					if (str[k] == 'X') {
						count = 0;
						break;
					}
				}

				// Calculate the powers
				int p = k + 1 - abs(i - j) + count;
				if (p > 0) {
					ans = ans + 1;
				}
			}
		}
		j++;
	}
	return ans;

}


int main() {

	int t; cin >> t;
	char str[1000005];

	while (t--) {
		int n, k; cin >> n >> k;

		for (int i = 0; i < n; i++) {
			cin >> str;
		}
		int ans = solve(str, n, k);
		cout << ans << endl;

	}

	return 0;
}