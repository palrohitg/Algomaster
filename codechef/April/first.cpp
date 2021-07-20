#include<bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;

	while (t--) {

		int x, y, xr, yr, d;
		cin >> x >> y >> xr >> yr >> d;

		int total_food = xr * d;
		int total_water = yr * d;

		if (total_food <= x and total_water <= y) {
			cout << "yes" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}