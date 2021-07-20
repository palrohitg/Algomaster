/*
3
001101
1101
110


*/

#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	while (t--) {
		string str; cin >> str;
		int n = str.length();
		if (n % 2 != 0) {
			cout << "-1" << endl;
		}
		else {

			// iterate over the strings and remove the different character
			// in the strings
			int one = 0;
			int zeros = 0;
			int n = str.length();
			for (int i = 0; i < n; i++) {
				if (str[i] == '1') {
					one++;
				}
			}
			zeros = n - one;
			int ans = abs(one - zeros) / 2;
			cout << ans << endl;
		}
	}
	return 0;
}