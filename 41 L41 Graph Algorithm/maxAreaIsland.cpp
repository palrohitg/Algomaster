// Tag : Amazon, Google
/*
	Time Complexity in the worst case :
	1. When all the nodes are unvisited
	2. When all the nodes are visited at once time only.
*/
#include<bits/stdc++.h>
using namespace std;


bool isInside(int i, int j, int n, int m) {
	if (i >= 0 and i < n and j >= 0 and j < m) {
		return true;
	}
	return false;
}

void bfs(vector<vector<int>> &mat, vector<vector<bool>> &visited, int sx, int sy, int n, int m, int &temp) {

	queue<pair<int, int>> q;
	q.push(make_pair(sx, sy));
	visited[sx][sy] = true;

	int dx[] = { -1, 0, 0, 1};
	int dy[] = {0, -1, 1, 0};

	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();
		temp++;

		// check for the adjacent vertex
		for (int i = 0; i < 4; i++) {
			int x = p.first + dx[i];
			int y = p.second + dy[i];
			// check if (x,y) is inside the grid
			// Value of (x,y) = 1
			// (x,y) is not visited
			if (isInside(x, y, n, m) and mat[x][y] == 1 and visited[x][y] == false) {
				q.push(make_pair(x, y));
				visited[x][y] = true;
			}
		}
	}
	return;
}



int noOfIsland(vector<vector<int>> mat, int n, int m) {

	vector<vector<bool>> visited(n, vector<bool>(m, false));

	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == false and mat[i][j] == 1) {
				int temp = 0;
				bfs(mat, visited, i, j, n, m, temp);
				ans = max(temp, ans);
			}
		}
	}

	return ans;
}

int main() {

// inputs is given as vector of strings

// #ifndef ONLINE_JUDGE
// 	freopen("../input.txt", "r", stdin);
// 	freopen("../output.txt", "w", stdout);
// #endif
	int n, m; cin >> n >> m;
	vector <vector<int>> mat;

	for (int i = 0; i < n; i++) {
		vector<int> temp;
		for (int j = 0; j < m; j++) {
			int ch; cin >> ch;
			temp.push_back(ch);
		}
		mat.push_back(temp);
	}

	cout << noOfIsland(mat, n, m);

	return 0;
}