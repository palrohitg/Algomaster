/*
    Algorithms : 
    1. Start from any Source Vertex
    2. Explore all the active edges from that vertex 
    3. Choose that edges which had minimum cost and include in MST
        - add some more active edges in your active edges list 
        - active edges which are present in the different sets 
    
    time complexity = (V + E)logV
*/


#include<bits/stdc++.h> 
using namespace std;

class Graph {

    vector<pair<int, int>> *l; 
    int V;  // vertices will be use it later 
    public :

        Graph(int n) {
            this->V = n; 
            l = new vector<pair<int,int>>[n]; 
        }

        // add edges 
        void addEdge(int x, int y, int w) {
            l[x].push_back({y, w}); 
            l[y].push_back({x, w}); 
        }

        int prim_mst() {

            // min heap to find out the min edges 
            priority_queue< pair<int,int>, vector<pair<int,int>> , greater<pair<int, int>> > Q; 

            // Arrays that is included in the MST or not 
            bool *visited = new bool[V]{0}; 
            int ans = 0; 

            Q.push({0, 0}); // weight , destination of the nodes 

            while(!Q.empty()) {
                auto best = Q.top(); 
                Q.pop(); 
                int weight = best.first; 
                int to = best.second; 

                // destination is already visted then discard that edges 
                if(visited[to]) {
                    continue; 
                }
                
                ans += weight; 
                visited[to] = 1; 
                
                // find the other nbrs edges 
                for(auto x : l[to]) {
                    if(visited[x.first] == 0) {
                        Q.push({x.second, x.first}); 
                    }
                }

            } 
            return ans; 
        } 
}; 



int main() {
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int n, m; cin >> n >> m; 
    Graph g(n); // n denotes the number of nodes 
    for(int i = 1; i <= m; i++) {
        int x,y,w; 
        cin >> x >> y >> w; 
        g.addEdge(x-1, y-1, w); 
    }
    cout << g.prim_mst(); 
    return 0;

}