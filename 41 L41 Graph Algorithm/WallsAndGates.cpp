/*
	Question : find the nearest path from each house to shop

	Approachs :
	1. apply bfs
	2. push all the shop in the queue pair of index
	3. visit the adjacent elements house
	4. push the new house in the queues and repeats the process and also mark the nodes which are visited
	5. Make a matix to mark the visited node both the shop and also the inf updated distances

	-1 = obstacle
	0 means shop
	inf means a house



	inf -1    0   inf
	inf inf  inf  inf
	inf -1   inf  -1
	0   -1   inf  inf


	3  -1   0   -1
	2   2   1   -1
	1   -1  2   -1
	0   -1  3    4
*/


#include<bits/stdc++.h>
// #define inf 2147483647;
using namespace std;

void solve(vector<vector<int>> &grid) {

	queue<pair<int, int>> q;
	int rows = grid.size();
	int cols = grid[0].size();

	// mark all the nodes as visited
	vector<vector<bool>> visited(rows, vector<bool>(cols));
	// direction vector
	vector<int> dir{ -1, 0, 1, 0, -1};

	// insert the shop in the queue
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (grid[i][j] == 0) {
				q.push(make_pair(i, j));
				grid[i][j] = true;
			}
		}
	}


	while (!q.empty()) {
		int sz = q.size();
		while (sz--) {

			pair<int, int> p = q.front();
			q.pop();

			// insert values
			for (int i = 0; i < 4; i++) {
				int r = p.first + dir[i];
				int c = p.second + dir[i + 1];

				if (r >= 0 and r < rows and c >= 0 and c < cols and grid[r][c] == 2147483647 and visited[r][c] == false) {
					q.push(make_pair(r, c));
					grid[r][c] = grid[p.first][p.second] + 1;
					visited[r][c] = true;
				}
			}

		}
	}

	// Print the matrix
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n, m; cin >> n >> m;
	vector<vector<int>> grid;

	for (int i = 0; i < n; i++) {
		vector<int> temp;
		for (int j = 0; j < m; j++) {
			int num; cin >> num;
			temp.push_back(num);
		}
		grid.push_back(temp);
	}

	// call the functions
	solve(grid);

	return 0;
}