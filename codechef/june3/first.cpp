#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("./input.txt", "r", stdin);
	freopen("./output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int xa, xb, Xa, Xb;
		cin >> xa >> xb >> Xa >> Xb;
		int ans = Xa / xa + Xb / xb;
		cout << ans << endl;
	}

	return 0;
}