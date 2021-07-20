// Grid DP problems
/*
	1. min cost path


*/
/*

	Approach 2 :
	1. Bottom up solutions :
		a. make the first row and columns as same.
		b. form 1,1 select the min one in the previous steps
		c. return the last row and last column index
*/



class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {

		int col = grid[0].size();
		int row = grid.size();

		// make the first row as sames
		for (int i = 1; i < row; i++) {
			grid[i][0] += grid[i - 1][0];
		}

		for (int i = 1; i < col; i++) {
			grid[0][i] += grid[0][i - 1];
		}

		// fill the rest of the grids
		for (int i = 1; i < row; i++) {
			for (int j = 1; j < col; j++) {
				grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
			}
		}

		return grid[row - 1][col - 1];
	}
};