// Every pair of city is consider twice because here order doesn't matters 
// BFS ans DFS can be used to count the no of ways 

#include<bits/stdc++.h> 
using namespace std; 

class DSU {

    int V; 
    list<pair<int, int> > l;     

    public : 

        DSU(int V) {
            this->V = V; 
        }

        void addEdge(int a, int b) {
            l.push_back(make_pair(a, b)); 
        }

        

        // 1. find 
        int findSet(int i, int *parent) {

            // Base Case 
            if (parent[i] == -1) {
                return i; 
            }
            
            // path compreshion 
            return parent[i] = findSet(parent[i], parent);
        } 
        


        void union_set(int x, int y,int *parent, int *rank) {

            int s1 = findSet(x, parent);
            int s2 = findSet(y, parent);

            // If not same the union the sets 
            if (s1 != s2) {

                if (rank[s1] < rank[s2]) {
                    parent[s1] = s2;
                    rank[s2] += rank[s1];
                }
                else {
                    parent[s2] = s1;
                    rank[s1] += rank[s2];
                }
            }  
        }

        void pairing() {

            int *parent = new int[V]; 
            int *rank = new int[V]; 

            // Assign the initial to parent and rank arrays 
            for (int i = 0; i < V; i++) {
                parent[i] = -1; 
                rank[i] = 1; 
            } 
            
            // Iterate over the edge list 
            for (auto p : l) {
                
                // making the elments 
                int a = p.first; 
                int b = p.second; 
                
                // int s1 = findSet(a, parent); 
                // int s2 = findSet(b, parent);

                union_set(a, b, parent, rank);
            } 

            // Compute the no of paths so that there is not any paths 
            int ans = 0; 
            for (int i = 0; i < V; i++) {
                ans += V - rank[findSet(i, parent)];
            }

            delete [] parent; 
            delete [] rank;
            cout << ans/2 << endl;
            
        }
};




int main() {

    int n,m; cin >> n >> m; 
    DSU g(n); 

    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y; 
        g.addEdge(x, y);
    }

    g.pairing();


    return 0;
}