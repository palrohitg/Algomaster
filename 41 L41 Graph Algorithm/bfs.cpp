/*
How BFS works in the graphs Problems 


*/


#include<bits/stdc++.h>
using namespace std; 


class Graph {
    
    int V;        // number of nodes we have 
    list<int> *l; // pointer to list arrays  

    public : 

        // Graphs 
        Graph(int V) {
            
            this->V = V; 
            l = new list<int>[V]; // here we can also use the vector to form the arrays 
        }

        void addEdge(int x, int y) {
            
            l[x].push_back(y);
            l[y].push_back(x);
        }        

        void bfs(int src) {
            
            // Marked all the visited arrays keys denoted the node and second will denotes the values  
            map<int, int> visited; // ordered maps  
            queue<int> q; 
            q.push(src); 
            visited[src] = 1; 

            while(!q.empty()) {

                int node = q.front(); 
                cout << node << " "; 
                q.pop(); 

                // Iterate over the nbrs of the nodes 
                for(int nbr : l[node]) {
                    // if nbrs are not visited insert into the queues  and marks are visited 
                    if(!visited[nbr]) {
                        q.push(nbr); 
                        visited[nbr] = 1; 
                    }
                }
            }
        }

        // print Adjacent  
        void printAdjList() {

            // Iterate over the vertices 
            for (int i = 0; i < V; i++) {
                cout << i << "-->";

                for(int nbr : l[i]) {
                    cout << nbr << " "; 
                }
                cout << endl;
            }
        }
};



int main() {

    Graph g(4); 
    g.addEdge(0, 1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);

    g.bfs(0); // start vertex and the store nodes where we want to start the traversals 
    // g.printAdjList();

    return 0;
}