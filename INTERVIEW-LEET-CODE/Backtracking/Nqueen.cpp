/*
	Backtracking Identifcations
	Print / Count Valid Cofigurations
	Print / Count all Valid Configurations

*/
#include<bits/stdc++.h>
using namespace std;


vector<vector<string>> ans;

bool canPlace(int i, int j, int n, vector<vector<int>> &board) {

	// Vertically check
	for (int x = i; x >= 0; x--) {
		if (board[x][j] == 1) {
			return false;
		}
	}

	// left diagonal check can we place ?
	int x = i;
	int y = j;

	while (x >= 0 and y >= 0) {
		if (board[x][y] == 1) {
			return false;
		}
	}

	// Right Diagonal
	x = i;
	y = j;

	while (x >= 0 and y < n) {
		if (board[x][y] == 1) {
			return false;
		}
	}

	return true;
}

bool solve(int n, int i, vector<vector<int>> &board) {

	// Base Case
	if (i == n) {
		// We found 1 Ways
		string str;
		vector<string> temp;
		//Iterate over the matrix
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == 0) {
					str.push_back(".");
				}
				else {
					str.push_back("Q");
				}
			}
			temp.push(string);
			str.clear();
		}

		ans.push_back(temp);
		temp.clear();
		return false;

	}

	for (int j = 0; j < n; j++) {
		if (canPlace(i, j, n, board)) {
			// Place the Queen
			board[i][j] = 1;
			int sub_ans = solve(n, i + 1, board);

			if (sub_ans) {
				return true;
			}

			// backtrack
			board[i][j] = 0;
		}
	}
	return false;
}


int totalNQueens(int n) {
	vector<vector<int>> board(n, vector<int>(n));
	bool res = solve(n, 0, board);
	return ans;
}

int main() {

	int n; cin >> n;

	cout << totalNQueens(n);


	return 0;
}
