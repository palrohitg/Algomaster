#include<iostream>
using namespace std;

bool canPlace(int board[][16], int i, int j, int n) {
	for (int row = 0; row < i; row++) {
		if (board[row][j] == 1) {
			return false;
		}
	}

	// left dignals check
	int x = i;
	int y = j;
	while (x >= 0 and y >= 0) {
		if (board[x][y] == 1) {
			return false;
		}
		x--;
		y--;
	}

	// right diagnals
	x = i;
	y = j;
	while (x >= 0 and y < n) {
		if (board[x][y] == 1) {
			return false;
		}
		x--;
		y++;
	}

	return true;
}


// solve the n queen problesms
bool solve(int board[][16], int i, int j, int n, int &count) {
	// Base case
	if (i == n) {
		// for (int i = 0; i < n; i++) {
		// 	for (int j = 0; j < n; j++) {
		// 		cout << board[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		count++;
		return true;
	}

	// check for the row
	for (int j = 0; j < n; j++) {
		if (canPlace(board, i, j, n)) {
			// Assume
			board[i][j] = 1;
			bool couldSolve = solve(board, i + 1, 0, n, count);
			if (couldSolve) {
				true;
			}

			board[i][j] = 0;
		}

	}

	// not able to place the queen
	return false;
}

int main() {

	int board[16][16] = { 0 };
	int n; cin >> n;
	int count = 0;
	solve(board, 0, 0, n, count);
	cout << count;
	return 0;
}

//