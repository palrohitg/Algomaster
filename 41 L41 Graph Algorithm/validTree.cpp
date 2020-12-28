// Given a unweighted or undirected graph find it is valid tree or not
// Two properites
// 1. There is no cycle
// 2. The graph is connected
https://ide.codingblocks.com/s/395789

// Approaches :
// -- > Simply bfs or dfs can findout this two properites


bool cycle_helper(int node, bool *visited, int parent) {

	visited[node] = true;

	for (int num : visited[node]) {
		if (!visited[node]) {
			if (cycle_helper(num, visited, node)) {
				return true;
			}
		}
		if (num != parent) {
			return true;
		}
	}
	return false;
}

bool isCyclic(vector<int> g[], int V)
{
	// Your code here
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}
	int node = 0;

	return cycle_helper(node, visited, -1);
}