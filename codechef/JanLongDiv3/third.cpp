// Win election Friends

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(vector<int> A, vector<int> B, int n, int m) {

	// Sort both the arrays
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	// Find the total of a and b
	int total_A = 0;
	int total_B = 0;

	// find the total in A
	for (int i = 0; i < n; i++) {
		total_A += A[i];
	}

	// find the totals in B
	int total_B = 0;
	for (int i = 0; i < m; i++) {
		total_B += B[i];
	}

	int i = 0;
	int j = m - 1;
	int swap_count = 0;
	while (total_A < total_B and i < n and j >= 0) {

		total_A = total_A - A[i];
		total_A = total_A + B[i];

		total_B = total_B - B[j];
		total_B = total_B + A[i];

		i++; j--; swap_count++;

	}
	if (total_A < total_B) {
		return -1; // impossible to make a wins
	}
	return swap_count;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int t; cin >> t;

	vector<int> A;
	vector<int> B;

	while (t--) {
		int n; m; cin >> n >> m;
		A.reserve(A);
		B.reserve(B);
		for (int i = 0; i < n; i++) {
			int data; cin >> data;
			A.push_back(data);
		}

		for (int i = 0; i < m; j++) {
			int data; cin >> data;
			B.push_back(data);
		}

		cout << solve(A, B, n, m) << endl;
		A.clear();
		B.clear();
	}



	return 0;
}