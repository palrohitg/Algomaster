#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		string days; cin >> days;
		int present = 0;
		int remainDays = 120 - n;
		for (auto ch : days) {
			if (ch == '1') {
				present++;
			}
		}

		int temp = (present + remainDays) * 100 ;
		float result = temp / 120;

		if (result < 75) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}