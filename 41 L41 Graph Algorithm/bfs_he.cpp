// Number of nodes lying at level x
// Approach --> Maintain an arrays which denotes the nodes level and using the BFS to traversal the trees


#include<bits/stdc++.h>
using namespace std;


class Graph {

	int V;
	// pointer to points the adjacent list
	list<int>* adjList;

public :

	Graph(int V) {
		this->V = V;
		adjList = new list<int>[V + 1];
	}

	void addEdge(int x, int y) {
		adjList[x].push_back(y);
		adjList[y].push_back(x);
	}

	void BFS(int src, int x) {
		int visited[V + 1];
		// mark all the nodes as unvisited
		for (int i = 1; i <= V; i++) {
			visited[i] = -1;
		}

		queue<int> q;
		q.push(src);
		visited[src] = 1;
		// level arrays to maintain the level of each nodes
		int level[V + 1];
		level[src] = 1;

		while (!q.empty()) {
			int node = q.front();
			q.pop();

			// visited all the neighbours of that nodes
			for (auto nbr : adjList[node]) {

				// visited the nodes if not visted
				if (visited[nbr] == -1) {
					q.push(nbr);
					visited[nbr] = 1;
					level[nbr] = level[node] + 1;
				}
			}
		}

		// count the number of nodes at level x
		int count = 0;
		for (int i = 1; i <= V; i++) {
			if (level[i] == x) {
				count++;
			}
		}

		cout << count;
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
	for (int i = 1; i <= N - 1; i++) {
		int a, b; cin >> a >> b;
		g.addEdge(a, b);
	}
	int level; cin >> level;
	g.BFS(1, level);



	return 0;
}