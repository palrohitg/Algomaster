# Graph Question List

## Approach / Observation and analysis of the approach 

#### 1. BFS (Breadth first search) 
  
  * visited the current node and explore its neighbour in level order manner
```cpp 
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
            map<int, int> visited; // ordered maps or arrays 
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
```

#### 2. DFS(Depth first search) 

* Visit the current node and explore the current path go deeper and deeper and come back do the same recursively 

```cpp 
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
};
```

#### 3. Cycle Detection in Unweighted graphs 

* Use the dfs to traverse the tree 
* Make a parent varible and if num != parent do recurisvely if cycle found then return true else false 
  
  ```cpp 

  ```
