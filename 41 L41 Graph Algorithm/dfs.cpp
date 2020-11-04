// DFS --> Recursive Solutions 

#include<bits/stdc++.h> 
using namespace std; 

class Graph {

    map<int, list<int>> l; 

    public : 

        void addEdge(int x, int y)  {
            l[x].push_back(y); 
            l[y].push_back(x); 
        }


        void dfs_helper(int src, map<int, bool>  &visited) {
            // Traverse the graphs one by one using the recursion; 
            cout << src << " "; 

            // Visited all the neigbour of the sources 
            for (int nbr : l[src]) {
                if( !visited[nbr]) {
                    dfs_helper(nbr, visited); 
                }
            }
        }

        void dfs(int src) {

            // created an arrays to check that the elements is visited or not 
            map<int, bool> visited; 
            for (auto p : l) {
                int node = p.first; 
                visited[node] = false;  // all the nodes as unvisited 
            }
            dfs_helper(src, visited);
        }

        void adjList() {
            for (auto a : l) {
                for(l[a])
            }
        }
};




int main() {

    Graph g; 
    g.addEdge(0, 1); 
    g.addEdge(1, 2); 
    g.addEdge(2, 3); 
    g.addEdge(0, 3); 
    g.addEdge(3, 4);  
    g.addEdge(4, 5);
    g.dfs(0); 

    return 0; 
}