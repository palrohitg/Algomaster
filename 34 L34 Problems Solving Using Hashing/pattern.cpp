#include<bits/stdc++.h>
using namespace std;


int main() {



	char matrix[41][41];


	int n; cin >> n;

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			matrix[row][col] = ' ';
		}
	}

	for (int row = 0; row < n; row++) {

		if (row == 0 || row == n - 1) {
			for (int col = 0; col < n; col++) {
				matrix[row][col] = '#';
			}
		}
		else {
			matrix[row][0] = matrix[row][n - 1] = '*';
		}
	}



	// print the matrix
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			cout << matrix[row][col];
		}
		cout << endl;
	}

	return 0;
}

