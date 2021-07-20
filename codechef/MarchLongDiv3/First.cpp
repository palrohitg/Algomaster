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

		// iterate over the strings
		// count the different group
		// just keep ignore the continuous one
		int count = 0;
		for (int i = 0; i < str.length(); i++) {

			if (str[i] == '1') {
				count++;
				i++;
				while (i < str.length() and str[i] == '1') {
					i++;
				}
			}
		}
		cout << count << endl;
	}



	return 0;
}