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

     /* Create following graph and test
       whether it is 3 colorable
      (3)---(2)
       |   / |
       |  /  |
       | /   |
      (0)---(1)

        V = 4 

      Matrix 2D: 
    bool graph[V][V] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };

    */



    // int V = 5; // Vertices 
    // vector<int> adj[V]; // 0 to 4 
    // addEdge(adj, 1, 2); 
    // printGraph(adj, V);
    // return 0; 

    // Taking input from the code 
    int V, E; cin >> V >> E;
    vector<int> adj[V]; 

    for (int i=0; i<E; i++) {
        int v1, v2; cin >> v1 >> v2;
        addEdge(adj, v1, v2); 
    }

    printGraph(adj, V); 

    return 0;
}