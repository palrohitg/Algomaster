// Find all the SSSP path from all the src to all other nodes

void bfs(int src) {
	map<int, int> dist;
	queue<int> q;


	// Setting the distance of all the nodes from inf
	for (auto node_pair : l) {
		T node = node_pair.first;
		dist[node] = INT_MAX;
	}

	q.push(src);
	dist[src] = 0;

	while (!q.empty()) {
		int node = q.front();
		q.pop();

		for (int nbr : l[node]) {
			if (!dist[nbr]) {
				visited[nbr] = dist[node] + 1;
			}
		}
	}
}