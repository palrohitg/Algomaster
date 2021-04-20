// Generate the Brackets
// N = 3 , ((()))


#include<bits/stdc++.h>
using namespace std;


int solve(int *weight, int *price, int W, int i, int n) {
	// Base Case
	if (i == n) {
		return 0;
	}

	int include = 0, exclude = 0;

	if (weight[i] <= W) {
		int include = price[i] + solve(weight, price, W - weight[i], i + 1, n);
		int exclude = solve(weight, price, W, i + 1, n);
	}

	return max(include, exclude);
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int weight[] = {1, 2, 3, 5};
	int price[] = {40, 20, 35, 100};
	int W = 7;
	int n = 4;

	int ans = solve(weight, price, W, 0, 4);
	cout << ans << endl;

	return 0;
}