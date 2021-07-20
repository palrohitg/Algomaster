// No Time to Wait
// chef can used only one timezone out of n timeszone
// we need to figure whether the chef had enough times to solve the last problems


#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("../../input.txt", "r", stdin);
// 	freopen("../../output.txt", "w", stdout);
// #endif

	int N, H, x;
	cin >> N >> H >> x;

	// x = remaining hour
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int timeZone; cin >> timeZone;
		v.push_back(timeZone);
	}

	// linear search laga de if
	// v[i] + x >= H then yes else no
	for (int i = 0; i <= N; i++) {
		if (v[i] + x >= H) {
			cout << "Yes";
			break;
		}
		if (i == N) {
			cout << "No";
		}
	}
	return 0;
}