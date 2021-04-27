# String Print in 2d arrays
# Date : 27 April Questions 
```cpp
/*
	Approach :
	1. Make four pointers
	2. sr, er, sc, ec
	3. simulate the process
	4. last check for the break parts
*/


class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {

		vector<int> res;
		if (matrix.size() == 0) {
			return res;
		}


		int sr = 0;
		int sc = 0;
		int er = matrix.size() - 1;
		int ec = matrix[0].size() - 1;



		while (sr <= er and sc <= ec) {

			for (int i = sc; i <= ec; i++) {
				res.push_back(matrix[sr][i]);
			}
			sr++;

			for (int i = sr; i <= er; i++) {
				res.push_back(matrix[i][ec]);
			}
			ec--;

			if (sr <= er) {
				for (int i = ec; i >= sc; i--) {
					res.push_back(matrix[er][i]);
				}

			}
			er--;

			if (sc <= ec) {
				for (int i = er; i >= sr; i--) {
					res.push_back(matrix[i][sc]);
				}

			}
			sc++;
		}
		return res;
	}
};
```