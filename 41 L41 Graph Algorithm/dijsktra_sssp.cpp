// Create the hashmap for the adjacent list and make the solution directly 


#include<bits/stdc++.h> 
using namespace std; 

map<int, list<pair<int, int>> > l; 
int *dist; 


void dijkstra(int src) {
      dist[src] = 0;

      // s.first store the distance s.second store the nodes 
      set<pair<int, int>> s; 
      s.insert(make_pair(0, src)); 

      while(!s.empty()) {

          auto t = *(s.begin()); 
          int node = t.second; 
          int nodeDistance = t.first; 

          s.erase(t); 

          // Iterate over the nbrs of the nodes 
          for (auto childPair : l[node]) {

              if (nodeDistance + childPair.second < dist[childPair.first]) {
                  
                  // find in the set 
                auto f=s.find({dist[childPair.first], childPair.first});
                if(f!=s.end()) s.erase(f);
                dist[childPair.first] = nodeDistance + childPair.second; 
                s.insert(make_pair(dist[childPair.first], childPair.first));
              }

          }
      }
}

int main() {

    int t; cin >> t; 

    while(t--) {
        
        int n, m; cin >> n >> m;
        l.clear(); 

        for (int i = 1; i <= m; i++) {
            int x, y, w; cin >> x >> y >> w; 
            l[x].push_back(make_pair(y, w));
            l[y].push_back(make_pair(x, w));
        }

        // Create the distance arrays
        dist = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            dist[i] = INT_MAX; 
        }
        
        int src; cin >> src; 

        dijkstra(src); 

        // Print out the distances arrays 
        for (int i = 1; i <= n; i++) {
            if (i == src) continue; 
            else if (dist[i] == INT_MAX) { 
                cout << "-1" << " "; 
            }
            else { 
                cout << dist[i] << " ";
            }
        }
        cout << endl; 

    }



    return 0;
}