// template code for graph problems 
// Tricks when 1 based index then convert into the zero based indexing 

#include<bits/stdc++.h> 
using namespace std; 


 
class Graph {

    int V;  
    list<int> *l; 

    public : 

        Graph(int V) {
            this->V = V;
            l = new list<int>[V];  
        }

        void addEdge(int x, int y) {
            l[x].push_back(y);
            l[y].push_back(x);
        }   

        void bfs(int src) {

            int dist[V]; 
            queue<int> q; 

            // Mark all the distance as infinite 
            for (int i = 0; i < V; i++) {
                dist[i] = INT_MAX; 
            }

            dist[src] = 0; 
            q.push(src); 

            while(!q.empty()) {

                int node = q.front(); 
                q.pop(); 

                // Iterate over the neighbours 
                for(int nbr : l[node]) {
                    
                    // Unvisited neighbour
                    if (dist[nbr] == INT_MAX) {
                        q.push(nbr);
                        dist[nbr] = dist[node] + 6; 
                    }
                }
            }
            
            // Print out the distance index 
            for (int i = 0; i < V; i++) {
                if (i == src) {
                    continue;
                }
                else if(dist[i] == INT_MAX) {
                    cout << "-1" << " ";
                }
                else {
                    cout << dist[i] << " ";
                }
            }

        }

};




int main() {

    int t; cin >> t; 
    while(t--) {
        
        int n, m; cin >> n >> m;
        Graph g(n);
        
        for (int i = 0; i < m; i++) {
            int s, d; 
            cin >> s >> d;
            s--; 
            d--; 
            g.addEdge(s, d);
        }

        int src; cin >> src; 
        g.bfs(src - 1); 
        cout << endl;
    }
    
    return 0;
}