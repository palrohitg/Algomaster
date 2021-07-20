#include<bits/stdc++.h> 
using namespace std; 

bool compare(pair<int,int> p1, pair<int,int> p2) {
    return p1.second < p2.second; // smalller comes first
}

int main() {

    int t; cin >> t;
    vector<pair<int, int>> v; 
    
    while(t--) {
        
        //  n activities that need to be done 
        int n; cin >> n; 
        for(int i = 0; i < n; i++) {
            int s,e; cin >> s >> e; 
            v.push_back(make_pair(s, e)); 
        }

        sort(v.begin(), v.end(), compare); 
 
        auto p = v[0]; 
        int second = p.second; 
        int count = 1; 

        for (int i = 1; i < n; i++) {
            auto p = v[i]; 
            if (p.first >= second) {
                count++; 
                second = p.second; 
            } 
        }

        cout << count << endl; 
        v.clear();

    }




    return 0; 
}