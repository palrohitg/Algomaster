// Bellman ford Algorithm 
// ------------------------ 
//  1. Init dist[Vertex] = INT_MAX, dist[src] = 0; 
//  2. Relax all edges V - 1 edges times [most important] 
//  3. Negative weight cycle detections 
// time complexity = O(VE) quardic algorithms 
#include<bits/stdc++.h> 
using namespace std; 

void bellmanFord(vector<vector<int>> edges, int n, int src) {

	vector<int> dist(n + 1, INT_MAX); 
	dist[src] = 0; 

	for(int i = 0; i < n - 1; i++) {
		for(auto edge : edges) {
			int u = edge[0]; // src
			int v = edge[1]; // dest
			int wt = edge[2]; 

			if(dist[u] != INT_MAX and dist[u] + wt < dist[u]) {
				dist[u] = dist[u] + wt; 
			}
		}
	}

	// negative weight cycle 
	for(auto edge : edges) {
		int u = edge[0]; // src
		int v = edge[1]; // dest
		int wt = edge[2]; 
		
		if(dist[u] != INT_MAX and dist[u] + wt < dist[u]) {
				dist[u] = dist[u] + wt; 
			}
	}

}

int main() {

    int n, m; cin >> n >> m; 

    // edge list
    vector<vector<int>> edges; 
	
	for(int i = 0; i < m; i++) {
		int u, v, wt; 
		cin >> u >> v >> wt; 
		edges.push_back({u, v, wt}); 
	}

	


    return 0; 
}