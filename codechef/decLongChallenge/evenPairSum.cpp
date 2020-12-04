#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll noOfPair(float a, float b) {

	if (a == 1 and b == 1) return 1;

	return ceil((a * b) / 2);
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll t; cin >> t;

	while (t--) {
		float a, b; cin >> a >> b;
		cout << noOfPair(a, b) << endl;
	}

	return 0;
}