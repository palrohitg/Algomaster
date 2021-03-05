#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("../../input.txt", "r", stdin);
// 	freopen("../../output.txt", "w", stdout);
// #endif

	int t; cin >> t;

	while (t--) {
		string str;
		cin >> str;
		int count = 0;

		for (int i = 0; i < str.length() - 1;) {

			if (str[i] == '0' and str[i + 1] == '1') {
				i = i + 2;
				count++;
			}
			else if (str[i] == '1' and str[i + 1] == '0') {
				i++;
				count++;
			}
			else if (str[i] == '1' and str[i + 1] == '1') {
				count++;
				i++;
			}
			else {
				i++;
			}
		}

		cout << count << endl;

	}



	return 0;
}