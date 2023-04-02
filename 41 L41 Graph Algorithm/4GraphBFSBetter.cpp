#include<bits/stdc++.h>
using namespace std;

class Graph {
    int numVertices;
    list<int> *adjList;
    map<int,int> visited;

    public:
        Graph(int vertices);
        void addEdges(int src, int dest);
        void BFS(int startVertices); 
}; 

Graph::Graph(int vertices) {
    numVertices = vertices;
    adjList = new list<int>[vertices];
}

// DataType name and function should be declared here only
void Graph::addEdges(int src, int dest) {
   adjList[src].push_back(dest);
   adjList[dest].push_back(src); 
}

void Graph::BFS(int startVertices) {
    queue<int> q; 
    q.push(startVertices);
    visited[startVertices] = true;
    list<int>::iterator i; // iterator elements and
    while(!q.empty()) {
        int currentNode = q.front();
        cout << currentNode << "-->";
        q.pop();
        for (i = adjList[currentNode].begin(); i != adjList[currentNode].end(); ++i) {
            int nbr = *i; 
            if (!visited[nbr]){
                q.push(nbr);
                visited[nbr] = true;
            }
        }
    }
    return;
}

int main() {
  Graph g(4);
  g.addEdges(0, 1);
  g.addEdges(0, 2);
  g.addEdges(1, 2);
  g.addEdges(1, 2);
  g.addEdges(2, 0);
  g.addEdges(2, 3);
  g.addEdges(3, 3);

  g.BFS(2);

  return 0;
}