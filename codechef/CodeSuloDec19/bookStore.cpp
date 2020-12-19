#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[501];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = arr[0];
	sort(arr + 1, arr + (n - 1));
	int cost = 0;

	for (int i = 1; i < n - 1; i++) {
		cost += left * (arr[1] * arr[i + 1]);
	}
	int rightCost = left * arr[n - 1];
	int leftCost = left;
	int remainCost = leftCost + rightCost;

	cost += remainCost;

	cout << cost;


	return 0;
}