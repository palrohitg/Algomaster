// DFS --> Recursive Solutions 

#include<bits/stdc++.h> 
using namespace std; 


// Time Complexity Same as BFS Algorithms
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
            visited[src] = true; 

            // Visited all the neigbour of the sources 
            for (int nbr : l[src]) {
                if( !visited[nbr]) {
                    dfs_helper(nbr, visited); 
                }
            }
        }

        void dfs(int src) {

            // created an arrays to check that the elements is visited or not 
            // Mark all the nodes as visited. 
            map<int, bool> visited; 
            for (auto p : l) {
                int node = p.first; 
                visited[node] = false;  // all the nodes as unvisited 
            }
            dfs_helper(src, visited);
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