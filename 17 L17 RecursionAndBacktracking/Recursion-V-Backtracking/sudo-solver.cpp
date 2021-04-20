// 37 Sudo-Solver (hard backing problems)
/*
1. Lets try the digits 1 to 9 and call recursively to the smaller problems
2. If the smaller return true then return return aswell if not then other digits
*/


class Solution {
public:

	bool canPlace(vector<vector<char>> &board, int i, int j, int n, int num) {

		// check in the present row or columns
		for (int row = i; row <= n; row++) {
			if (board[row][j] == (char)num) {
				return false;
			}
		}

		// check in the present columns
		for (int col = j; col <= n; col++) {
			if (board[i][col] == (char)num) {
				return false;
			}
		}

		int sx = (i / 3) * 3; // starting point of the subgrids
		int sy = (j / 3) * 3;

		for (int i = sx; sx < 3; sx++) {
			for (int j = sy; sy < 3; sy++) {
				if (board[i][j] == (char)num) {
					return false;
				}
			}
		}

		return true;

	}

	bool solve(vector<vector<char>>& board, int i, int j, int n) {
		// base case
		if (i == n) {
			return true;
		}

		if (j == n) {
			return solve(board, i + 1, 0, n);
		}

		if (board[i][j] != '.') {
			return solve(board, i, j + 1, n);
		}
		// digits 1 to 9 :
		for (int num = 1; num <= 9; num++) {
			if (canPlace(board, i, j, n, num)) { 
				// we can place it
				board[i][j] = num;
				break;
			}
		}
		return false;
	}

 /// dfjklg


	void solveSudoku(vector<vector<char>>& board) {
		int i = 0, j = 0;
		int n = board.size();
		solve(board, i, j, n);
		return;

	}
};