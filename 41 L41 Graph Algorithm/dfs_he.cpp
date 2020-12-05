// find the no of unreachable nodes
#include<bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	list<int>* adj;

public :

	Graph(int V) {
		this->V = V;
		adj = new list<int>[V + 1];
	}

	void addEdge(int x, int y) {
		adj[x].push_back(y);
		adj[y].push_back(x);
	}


	// find the reachable nodes from the given sources
	void bfs(int src) {
		int visited[V + 1];

		for (int i = 1; i <= V; i++) {
			visited[i] = -1;
		}

		visited[src] = 1;
		queue<int> q;
		q.push(src);
		int count = 1;

		while (!q.empty()) {
			int node = q.front();
			q.pop();

			for (auto nbr : adj[node]) {
				if (visited[nbr] == -1) {
					visited[nbr] = 1;
					q.push(nbr);
					count++;
				}
			}
		}

		// Compute the unreachable nodes
		int unreachable = V - count;
		cout << unreachable;
		return;
	}


};



int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int N; cin >> N;
	Graph g(N);
	int M; cin >> M;

	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		g.addEdge(a, b);
	}

	int src; cin >> src;
	g.bfs(src);

	return 0;
}