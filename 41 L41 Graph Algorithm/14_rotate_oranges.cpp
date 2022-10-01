#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int orangesRotting(vector<vector<int>>& grid) {

		int m = grid.size(); // rows
		int n = grid[0].size(); // cols

		queue<pair<int, int>> q; // pair
		vector<int> dir{ -1 , 0, 1, 0, -1}; // four directions
		int fresh = 0;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (grid[i][j] == 2) {
					q.push(make_pair(i, j));
				}
				if (grid[i][j] == 1) {
					fresh++;
				}
			}

		}

		if (fresh == 0) {
			return 0; // no fresh oranges
		}

		int ans = -1;
		while (!q.empty()) {
			int sz  = q.size();
			while (sz--) {
				pair<int, int> p = q.front();
				q.pop();

				for (int i = 0; i < 4; i++) {
					int r = p.first + dir[i];
					int c = p.second + dir[i + 1];

					if (r >= 0 and r < m and c >= 0 and c < n and grid[r][c] == 1) {
						// rotte the organes
						grid[r][c] = 2;
						q.push(make_pair(r, c));
						fresh--;
					}
				}
			}
            cout << "test"; 
			ans++;
		}

		// To check whether we can mark all the oranges as fresh rotten or not. 
		if (fresh == 0) return ans;

		return -1;
	}
};