// implements the same algorithms using prims's MST


#include<bits/stdc++.h> 
using namespace std; 


// Disjoint set union Data structures 
class DSU {

    int *parent; 
    int *rank; 
    int n; 

    public : 


        DSU(int n) {

            this->n = n;

            parent = new int[n];
            rank = new int[n];

            for (int i = 0; i < n; i++) {
                parent[i] = -1;
                rank[i] = 1;
            }
        }            
        // find set function using path compression 
        int findSet(int i) {

            // Base Case 
            if(parent[i] == -1) {
                return i; 
            } 
            
            // path compression 
            return parent[i] = findSet(parent[i]);
        }

        // union 
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

class Graph {

    vector<vector<int>> edgeList; 
    int V; // no of vertices we have 

    public : 

        Graph(int V) {
            this->V = V;
        }

        void addEdge(int x, int y, int w) {
            edgeList.push_back({w, x, y});
        }   

        int kruskal_mst() {
            
            // Sort the edgelist based upon their weights 
            sort(edgeList.begin(), edgeList.end());

            DSU s(V); // Creating the object of one class to another class 
            int ans = 0; 


            for (auto e : edgeList) {
                
                int w = e[0];
                int x = e[1];
                
                int y = e[2]; 

                // if belongs to different components then unite them and add the weights to the ans 
                if(s.findSet(x) != s.findSet(y)) {
                    ans += w; 
                }
            }
            return ans; 
        }
};


int main() {

    int V,E; cin >> V >> E; 
    Graph g(V); 

    for (int i = 0; i < E; i++) {
        int x, y, z; cin >> x >> y >> z; 
        g.addEdge(x, y, z);
    }

    cout << g.kruskal_mst();

    return 0;
}