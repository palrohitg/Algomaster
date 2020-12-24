/*
Disjoint Set union Data structure
------------------ -----------------
Operation :
1. Union => Combine two different set
2. find  => find the set in which the elements belongs to



Optimization
-------------------------------------
1. Path compression algorithms
2. Order by rank (maintain the number of elements present in the set or ranks)
------------------------------------

Application :
1. cycle detections how ?
Ans-> Create each nodes as indepedent set and union them, if both element having the common parent then it
has the cycle in the graphs
2. Pairing Problem (DSU, BFS, DFS)
*/

#include<bits/stdc++.h>
using namespace std;


class DSU {

    int V;
    list<pair<int, int> > l; // to store all the edges

public :

    DSU(int V) {
        this->V = V;
    }

    void addEdge(int a, int b) {
        l.push_back(make_pair(a, b));
    }

    // 1. find operations
    int findSet(int i, int *parent) {
        if (parent[i] == -1) {
            return i;
        }
        return parent[i] = findSet(parent[i]);
    }

    // 2. Union Operation;
    void union_set(int a, int b, int parent[]) {

        int s1 = findSet(a, parent); // O(N) in worst case searching
        int s2 = findSet(b, parent);

        // belongs to different set merge the set
        if (s1 != s2) {
            parent[s2] = s1;
        }
    }

    bool detect_cycle() {
        int *parent = new int[V];

        for (int i = 0; i < V; i++) {
            parent[i] = -1;
        }

        // Iterate over the edgelist
        for (auto edge : l) {

            int i = edge.first;
            int j = edge.second;

            int s1 = findSet(i, parent);
            int s2 = findSet(j, parent);

            if (s1 != s2) {
                union_set(i, j, parent);
            }
            else {
                return true;
            }
        }
        delete [] parent;
        return false;
    }
};




int main() {

    DSU l(4);
    l.addEdge(1, 2);
    l.addEdge(2, 3);
    l.addEdge(3, 4);
    l.addEdge(4, 1);

    return 0;
}






