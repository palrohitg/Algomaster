#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll noOfPair(ll a, ll b) {

	if (a % 2 != 0 and b % 2 != 0) return ((a * b) / 2 ) + 1;

	return (a * b) / 2;
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	ll t; cin >> t;

	while (t--) {
		ll a, b; cin >> a >> b;
		cout << noOfPair(a, b) << endl;
	}

	return 0;
}