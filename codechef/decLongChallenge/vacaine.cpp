#include<bits/stdc++.h>
using namespace std;


int minDays(int d1, int v1, int d2, int v2, int p) {

	// Base case
	if (d1 == 1 and d2 == 1) {
		int vaccine = v1 + v2;
		return ceil(p / vaccine);
	}

	int minDay = min(d1, d2);
	int maxDay = max(d1, d2);

	int days = minDay - 1;
	int total_vaccine = 0;

	int tempVaccine = 0;
	if (d1 < d2) {
		tempVaccine = v1;
	}
	if (d2 < d1) {
		tempVaccine = v2;
	}

	while (minDay < maxDay and total_vaccine < p) {
		total_vaccine += tempVaccine;
		minDay++;
		days++;
	}

	while (total_vaccine < p) {
		total_vaccine += (v1 + v2);
		days++;
	}
	return days;
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int d1, d2, v1, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;

	int ans = minDays(d1, v1, d2, v2, p);

	cout << ans << endl;



	return 0;
}