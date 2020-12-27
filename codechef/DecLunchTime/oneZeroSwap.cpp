#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	vector<char> S, P;
	while (t--) {

		int n; cin >> n;
		for (int i = 0; i <= n; i++) {
			char ch; cin >> ch;
			S.push_back(ch);
		}

		for (int i = 0; i <= n; i++) {
			char ch; cin >> ch;
			P.push_back(ch);
		}

		int one_S = 0;
		int one_P = 0;


		for (int i = 0; i < n; i++) {

			if (P[i] == '1') {
				one_P++;
			}
			if (S[i] == '1') {
				one_S++;
			}
		}

		if (one_P == one_S) cout << "Yes";
		else cout << "No";

		S.clear();
		P.clear();
		cout << endl;


	}


	return 0;
}