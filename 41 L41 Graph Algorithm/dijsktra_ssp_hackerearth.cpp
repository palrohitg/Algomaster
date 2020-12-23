#include<bits/stdc++.h> 
using namespace std; 


class Graph{
    
    vector<pair<int,int>> *l; 
    int V; 

    public : 
    
    Graph(int n) {
        this->V = n; 
        l = new vector<pair<int, int>>[n]; 
    }

    void addEdge(int x, int y, int w) {
        l[x].push_back({y, w}); 
        l[y].push_back({x, w}); 
    }


    void dijkstra() {

        priority_queue<pair<int, int >, vector<pair<int,int>> , greater<pair<int,int>> > q; 
        bool *visited = new bool[V]{0};
        int *val = new int[V]; 
        val[0] = 0; 
        // mark the first node as visited 


        // inf value except for the source nodes 
        for(int i = 1; i < V; i++) {
            val[i] = INT_MAX; 
        } 

        // insert the sources node in queue  
        q.push({0 , 0}); // distance + vertex 

        while(!q.empty()) {
            
            auto best = q.top(); 
            int distance = best.first; 
            int node = best.second; 
            q.pop(); 
            
            if(visited[node]) {
                continue; 
            }
            
            visited[node] = 1; 
            // find the nbr of the current nodes 
            for(auto x : l[node]) {
                if(visited[x.first] == 0) {
                    // insert into the queue 
                    q.push({x.second, x.first}); 
                    val[x.first] = min(val[x.first], x.second + distance);  
                } 
            }

        }

        // print the distance present in the value arrays 
        for(int i = 1; i < V; i++) {
            if (val[i] == INT_MAX) {
                cout << "-1" << " "; 
            }
            else {
            cout << val[i] << " "; 
            }
        }
        cout << endl;
    }
}; 


int main() {

    int n, m; cin >> n >> m; 
    Graph g(n); 
   
    for(int i = 0; i < m; i++) {
        int x, y, w; 
        cin >> x >> y >> w;
        g.addEdge(x - 1, y - 1, w); 
    }   
   
    g.dijkstra(); 

    return 0; 
}