// Shorest path in the grid using bfs
/*
	Naive Approaches:
	- Let do it recursively and find all the paths


	Approach :
	1. Use simply BFS and queue
	2. Insert the start nodes in the queue
	3. Pickup the elements and check all the possible use and update the distances to concurrently

	// hard problems
	TC : O(N^2) // worst case we can visited all the nodes
	SC : O(N^2) // all the nodes can be pushed and pop in the stacks
*/

#include<bits/stdc++.h>
using namespace std;

// Data Types for Queues
class Cell {
public :
	int x;
	int y;
	int dis;


	Cell(int x, int y, int dis) {
		this->x = x;
		this->y = y;
		this->dis = dis;
	}
};


// Mark all the nodes
bool isInside(int x, int y, int n, int m) {
	if (x >= 1 and x <= n and y >= 1 and y <= m) {
		return true;
	}
	return false;
}

// Mark the hints
int knightMoves(int sx, int sy, int dx, int dy, int n, int m) {

	// Make a Matrix of N * M visited
	bool  visited[n + 1][m + 1];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			visited[i][j] = false;
		}
	}

	int mx[] = { -1, 1, 2, -2, 2, 1, -1, -2};
	int my[] = {2, 2, 1, 1, -1, -2, -2, -1};
	// mark the source  nodes as visited
	visited[sx][sy] = true;

	// insert the sources in the queus
	queue<Cell> q;

	q.push(Cell(sx, sy, 0));

	while (!q.empty()) {

		Cell t = q.front();
		q.pop();

		if (t.x == dx and t.y == dy) return t.dis;

		// check all the possible ways / moves
		for (int i = 0; i < 8; i++) {
			int x = t.x + mx[i];
			int y = t.y + my[i];

			// if x,y inside the grid and not visited
			if (isInside(x, y, n, m) and !visited[x][y]) {
				visited[x][y] = true;
				// cout << t.dis << endl;
				q.push(Cell(x, y, t.dis + 1));
			}
		}
	}

	return -1;
}

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("../input.txt", "r", stdin);
// 	freopen("../output.txt", "w", stdout);
// #endif

	int n, m; cin >> n >> m;
	int sx, sy; cin >> sx >> sy;
	int dx, dy; cin >> dx >> dy;

	cout << knightMoves(sx, sy, dx, dy, n, m) << endl;
	return 0;
}
