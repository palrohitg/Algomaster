/*

How BFS works in the graphs Problems


Algo : 
1. firstly we have put the source node in the queue and mark as visited 
2. Then pop karna hai, and uske neightbours ko explore karna agar nbrs visited nhi hai then queue insert
3. Repeat step 2 unitill the queue becomes empty. 



1. To find out the level off each nodes just maintain the level arrays and traverse like the bfs works
2. Deque-> you can perform queue operations from both ends


- compiling the list of files 
- g++ test.cpp 
- Run the Files: ./a.out 




*/


#include<bits/stdc++.h>
using namespace std;

// template<typename T>
class Graph {

    int V;        // number of nodes we have
    list<int> *l; // pointer to list arrays
    // map<T, list<T>> l;

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

    void display() {
        cout << "File first new nodes"; 
    }
};



int main() {

// #ifndef ONLINE_JUDGE
//     freopen("./input.txt", "r", stdin);
//     freopen("./output.txt", "w", stdout);
// #endif

    Graph g(6);

    try {

        g.addEdge(0, 1);
        g.addEdge(0, 3);
        g.addEdge(1, 2);
        g.addEdge(2, 3);
        g.addEdge(3, 4);
        g.addEdge(4, 5);
        
    }  
    catch (int e) {
        cout << e; 
    }
    
    // g.bfs(0); // start vertex and the store nodes where we want to start the traversals
    g.printAdjList();
    // g.display();

    return 0;
}


/*
Time :
Space :

*/