#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int solve(int arr[], int n) {

	if (n == 1) {
		return arr[n - 1];
	}

	if (n == 2) {
		return max(arr[n - 1], arr[n - 2]);
	}

	int x, y = 0;

	if (n > 2) {

		sort(arr, arr + n, compare);

		x = arr[n - 1];
		y = arr[n - 2];
		n = n - 2;

		while (n > 0) {

			if (x < y) {
				x += arr[n - 1];
			}
			else if (y < x) {
				y += arr[n - 1];
			}
			else {
				x += arr[n - 1];
			}
			n = n - 1;
		}
	}

	return max(x, y);
}



int main() {

	/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/
	int arr[5];
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cout << solve(arr, n);
		cout << endl;
	}


	return 0;
}