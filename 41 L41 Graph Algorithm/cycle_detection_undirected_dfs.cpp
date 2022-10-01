// cycle Detection in undirected graph
#include <bits/stdc++.h>
using namespace std;

class Graph
{

    int V;
    map<int, list<int>> l;

public:
    Graph(int v)
    {
        this->V = v;
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool detectCycle(int src, int parent, map<int, bool> &visited, map<int, list<int>> l)
    {
        cout << "Start " << src << endl; 
        visited[src] = true;
        cout << visited[src] << endl; 
        cout << "End" << src << endl;
        cout << parent << endl;  

        for (auto nbr : l[src])
        {   
            cout << "neig: " << nbr << "parent: " << parent << endl;
            if (visited[nbr] && parent != nbr)
            {
                return true;
            }
            if (!visited[nbr])
            {
                return detectCycle(nbr, src, visited, l);
            }
        }
        return false;
    }

    void cycleDetection()
    {

        map<int, bool> visited;
        int src = 0;
        int parent = -1;
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }

        for (int i = 0; i < V; i++)
        {
            cout << i << "-->" << visited[i] << endl;
        }

        if (detectCycle(src, parent, visited, l))
        {
            cout << "Cycle is present" << endl;
            return;
        }
        cout << "No cycle" << endl;
        return;
    }
};

int main()
{

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    // g.addEdge(3, 1);
    // g.addEdge(3, 0);

    g.cycleDetection();
    return 0;
}