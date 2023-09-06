// Tag : Amazon, Google
/*

	Islands Formed by leetcode
	input : vector<vector<char>> matrix
	elements : '1' or '0'
	
	Approach:
	1. Solve this in matrix format.
	2. Check the direction whether its a islands or not. 
	3. Mark the collection is visited or not. 

*/

#include<bits/stdc++.h>
using namespace std;


bool isInside(int i, int j, int n, int m) {
	if (i >= 0 and i < n and j >= 0 and j < m) {
		return true;
	}
	return false;
}

void bfs(vector<vector<char>> &mat, vector<vector<bool>> &visited, int sx, int sy, int n, int m) {

	queue<pair<int, int>> q;
	q.push(make_pair(sx, sy));
	visited[sx][sy] = true;

	int dx[] = {-1, 0, 0, 1};
	int dy[] = {0, -1, 1, 0};

	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();	
		// check in four direction to mark the attendances. 
		for (int i = 0; i < 4; i++) {
			int x = p.first + dx[i];
			int y = p.second + dy[i];
			if (isInside(x, y, n, m) and mat[x][y] == '1' and visited[x][y] == false) {
				q.push(make_pair(x, y));
				visited[x][y] = true;
			}
		}
	}
	return;
}



int noOfIsland(vector<vector<char>> mat, int n, int m) {

	vector<vector<bool>> visited(n, vector<bool>(m, false));

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == false and mat[i][j] == '1') {
				bfs(mat, visited, i, j, n, m);
				count++;
			}
		}
	}

	return count;
}

int main() {
// inputs is given as vector of strings

// #ifndef ONLINE_JUDGE
// 	freopen("../input.txt", "r", stdin);
// 	freopen("../output.txt", "w", stdout);
// #endif
	int n, m; cin >> n >> m;
	vector < vector<char>> mat;

	for (int i = 0; i < n; i++) {
		vector<char> temp;
		for (int j = 0; j < m; j++) {
			char ch; cin >> ch;
			temp.push_back(ch);
		}
		mat.push_back(temp);
	}
	cout << noOfIsland(mat, n, m);

	return 0;
}