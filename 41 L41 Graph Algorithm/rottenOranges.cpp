/* # 994 (Apple)
1. Start from day 3 and increments the count by one.
2. Update the search Day in each iteration like
	first day rotten = 2 and mark the adjacents as 3
	next days rooten = 3 and mark the adjacents as 4
	TC : max(max(r,c) , r * c)


Algorithm :
1. Create a var no = 2 and changed = false
2. Run a loop till is no cell in changed
3. Traverse the matrix 2  by nested loop and mark the elements
4. Travers the matrix and check if there is a mark which is one
5. Else return 2

--> In all iteratio not changes then we just to break the loops
if (!changed) {
	break;
}
change = false;
no++;


// Corner case
check 1 onces agains
// Corner case 0 when no one is present

// Another other to check if it safe to place changes
bool isSafe(int i, int j) {
	if(i >= 0 and i < R and j >=0 and j < C) return true;

	return false;
}

// Observation:
1. Lets tries to rotte the oranges at onces.


Complexity: time complexity is O(mn), because we first traverse our grid to fill queue and
found number of fresh oranges. Then we use classical bfs, so each node will be added and removed
from queue at most 1 time. Space complexity is also can be O(mn), we can have for example O(mn)
rotten oranges in the very beginnig.



*/


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
				if (grid[i][j] == -2) {
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

			ans++;
		}

		if (fresh == 0) return ans;

		return -1;
	}
};


// Linear time O(N) --> O(N*M) each elements visiting exactly one.