/*
	Given the N*N matrix :
	a. m[i][j] = 1 // means direct freinds
	b. A->B and B->C direct then A--->C // indirect friends
	c. Friends Circle is define of direct and indirect friends
	d. find out the connect component in the graphs
	Approachs :
*/

#include<bits/stdc++.h>
using namespace std;

void bfs(map<int, vector<int>> &m, int src, vector<bool> &visited) {

	queue<int> q;
	q.push(src);
	visited[src] = true;

	while (!q.empty()) {
		int node = q.front();
		q.pop();

		// check all the adjacent nodes of the queues
		for (auto v : m[node]) {
			for (auto num : v) {
				if (visited[num] == false) {
					q.push(num);
					visited[num] == true;
				}
			}
		}
	}
	return ;
}

int friendGroups(vector<vector<int>> &matrix, int n) {

	// Create a adjacent list to represent the graphs
	map<int, vector<int>> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == 1) {
				m[i].push_back(j);
			}
		}
	}

	vector<bool> visited(n, false);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (visited[i] == false) {
			bfs(m, i, visited);
			ans++;
		}
	}
}

int main() {

	int n; cin >> n;
	vector<vector<int>> matrix;

	for (int i = 0; i < n; i++) {
		vector<int> temp;
		for (int i = 0; i < n; i++) {
			int num; cin >> num;
			temp.push_back(num);
		}
		matrix.push_back(temp);
	}


	return 0;
}