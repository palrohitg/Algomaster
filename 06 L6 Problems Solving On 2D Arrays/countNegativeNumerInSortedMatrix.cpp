class Solution {
public:
	int countNegatives(vector<vector<int>>& grid) {
		int m = grid.size();
		int n = grid[0].size();
		int count = 0;
		int i = n - 1;
		int j = 0;

		while (i >= 0 and j < n) {

			if (grid[i][j] < 0) {
				count += (n - j);
				i--;
			}
			else {
				i++;
			}
		}

		return count;
	}
};