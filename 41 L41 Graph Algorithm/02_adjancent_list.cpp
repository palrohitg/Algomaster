#include<bits/stdc++.h> 
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V) {

    for (int i=0; i<V; i++) {
        cout << "Vertex is Connect with " << i << " "; 
        for (auto x : adj[i]) {
            cout << "-->" << x; 
        }
        cout << endl; 
    }
}

int main() {

    int V = 5; // Vertices 
    vector<int> adj[V]; // 0 to 4 
    addEdge(adj, 1, 2); 
    printGraph(adj, V);
    return 0; 
}