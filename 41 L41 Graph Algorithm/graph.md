# Graph Question List

## Approach / Observation and analysis of the approach



## Arrays and Strings
|Problem Number | Problem Name | Status|
|--- | --- | --- |
| 1.1 | Is Unique | [✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/is-unique) |
| 1.2 | Check Permutation |  [✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/check-permutation) |
1.3 | URLify |  [✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/urlify) |
1.4 | Palindrome Permutation |  [Read Solution ✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/palindrome-permutation) |
1.5 | One Away | [Read Solution ✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/one-away) |
1.6 | String Compression | [Read Solution ✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/string-compression) |
1.7 | Rotate Matrix | [Read Solution ✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/rotate-matrix) |
1.8 | Zero Matrix | [Read Solution ✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/zero-matrix) |
1.9 | String Rotation | [Read Solution ✅](https://quastor.org/cracking-the-coding-interview/arrays-and-strings/string-rotation) |


```cpp
Most Important Graph Question
1. kill process
2. jumping to zeros
3. word ladder
4. Bipartite graphs
5. Dependent Course
6. Rotten oranges
7. knight moves
8. walls and gates
9. Friends groups
10. No of islands
11. clone graphs
12. max area of island
13. Dependent course2
```

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

        while (!q.empty()) {

            int node = q.front();
            cout << node << " ";
            q.pop();

            // Iterate over the nbrs of the nodes
            for (int nbr : l[node]) {
                // if nbrs are not visited insert into the queues  and marks are visited
                if (!visited[nbr]) {
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

            for (int nbr : l[i]) {
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
            if ( !visited[nbr]) {
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

#### 3. Word Ladder problems Graph 