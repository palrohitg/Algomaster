// 1. Simple apply dfs / bfs
// 2. make a color vector
// 3. each time iterating a new vertex mark the current vertex color



#include<bits/stdc++.h>
using namespace std;

bool bipartite(list<int> *adj, int n) {

	// Color, Visited, queue
	queue<int> q;
	vector<int> color(n, 0);

	// 0 --> white, 1 --> blue, 2 --> red
	for (int i = 0; i < n; i++) {
		if (color[i] == 0) {
			q.push(i);
			color[i] = 1; // mark it as blue


			while (!q.empty()) {

				int node = q.front();
				q.pop();
				for (auto nbr : adj[node]) {

					if (color[nbr] == 0) {
						if (color[node] == 1) {
							color[nbr] = 2;
							q.push(nbr);
						}
						if (color[node] == 2) {
							color[nbr] = 1;
							q.push(nbr);
						}
					}
					else {
						if (color[node] == color[nbr]) {
							return false;
						}
					}
				}
			}
		}

	}
	return true;
}


int main() {

	int n; cin >> n;
	list<int> *l = new list<int>[n];

	// Adjacent list
	for (int i = 0; i < n; i++) {
		int u, v; cin >> u >> v;
		l[u].push_back(v);
		l[v].push_back(u);
	}

	bool ans = bipartite(l, n);
	if (ans) {
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}

	return 0;
}