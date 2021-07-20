// Number of ways to reach to the end with some obslacates are given
/*
	0 0 0
	0 1 0
	0 0 0

	Ans : 2 ways unique

	Approach :
	1. Condition --> right, down
	2. while fill the table if above there block cell and on the left assign that cell values
	and vice-version
	3. if both above and right are do nothing no ways to reach that cell

*/

class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

		int rows  = obstacleGrid.size();
		int col = obstacleGrid[0].size();

		// fill the first rows and col
		for (int i = 0; i < rows; i++) {
			if (obstacleGrid[i][0] == 1) {
				obstacleGrid[i][0] = 7;
			}
			else {
				obstacleGrid[i][0] = 1;
			}

		}

		for (int i = 0; i < col; i++) {
			if (obstacleGrid[0][i] == 1) {
				obstacleGrid[0][i] = 7;
			}
			else {
				obstacleGrid[0][i] = 1;
			}
		}

		for (int i = 1; i < rows; i++) {
			for (int j = 1; j < col; j++) {

				if (obstacleGrid[i][j] == 1) {
					obstacleGrid[i][j] = 0;
				}
				// if above and left side cell are block then live it
				if (obstacleGrid[i - 1][j] == 7 and obstacleGrid[i][j - 1] == 7) {
					obstacleGrid[i][j] = 0;
				}
				else if (obstacleGrid[i - 1][j] == 7) {
					obstacleGrid[i][j] = obstacleGrid[i][j - 1];
				}
				else if (obstacleGrid[i][j - 1] == 7) {
					obstacleGrid[i][j] = obstacleGrid[i - 1][j];
				}
				else {
					obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
				}
			}
		}

		return obstacleGrid[rows - 1][col - 1];
	}
};