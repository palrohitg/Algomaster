// Two traversal 
// BFS  : Breadth first search 
// DFS  : Depth first search 



#include <iostream>
#include<list> 
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

        void printAdjList() {
            for (int i = 0; i < V; i++) {
                // iterate over each list 
                for (int x : l[i]) {
                    cout << x << ", ";
                }
                cout << endl;
            }
        }
};

int main() {

    // list<int> *l = new list<int>[4]; 
    // l[0].push_back(1);
    // l[1].push_back(2);
    // l[2].push_back(1);
    // l[3].push_back(1);
    Graph g(4); 
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    g.printAdjList();

    return 0;
}
