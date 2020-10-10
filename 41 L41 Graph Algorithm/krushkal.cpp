#include<bits/stdc++.h> 
using namespace std;

// implement the DSU data structure
// 1. Path compression 
// 2. Union by ranks 

class DSU{

    int *parent; 
    int *rank; 

    public : 

        // Initialize of rank and parent arrays 
        DSU(int n) {

            // create the arrays
            parent = new int[n]; 
            rank = new int[n];


            for(int i = 0; i < n; i++) {
                parent[i] = -1; 
                rank[i] = 1; 
            }
        }

        int findSet(int i) {
            // BC 
            if (parent[i] == -1) {
                return i; 
            }
            return parent[i] = findSet(parent[i]); 
        }

        // Union functions 
        void unite(int x, int y) {

            int s1 = findSet(x); 
            int s2 = findSet(y); 

            if (s1 != s2) {
                if(rank[s1] < rank[s2]) {
                    parent[s1] = s2; 
                    rank[s2] += rank[s1];
                }
                else { 
                     parent[s2] = s1; 
                    rank[s1] += rank[s2];
                }
            }
        }
};

// Graph Class 
class Graph{

    int V; // vertex 
    vector<vector<int>> v;
    public : 
        Graph(int V) {
            this->V = V; 
        }

        // add edge and weight to the vectors 
        void addEdge(int s, int d, int w) {
            v.push_back({w, s, d});
        }

        void kruskal() {

            // sort the vector according to vectors
            sort(v.begin(), v.end());
            
            // create the dsu object 
            DSU s(V); 
            int ans = 0; 
            for(auto x: v) {
               
                int w = x[0];
                int src = x[1];
                int dest = x[2];

                // if not contain the cycle than add the addege 
                if (s.findSet(src) != s.findSet(dest)) {
                    s.unite(src, dest);
                    ans += w; 
                }
                // leave it; 
            }

            cout << ans; 
        }
}; 




