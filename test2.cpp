#include<bits/stdc++.h>
using namespace std;

bool compare(vector<vector<i>>)

int minEmailCount(vector<vector<int>> v) {
    int ans = 0; 
    sort(v.begin(), v.end(), compare);   // add the comparator for end sorting 
    int intervalSize = v.size();  
    
    int startTime = v[0][0]; 
    int endTime = v[0][1]; 
    for (int i = 1; i < intervalSize; i++) {
        if (endTime >= v[i][0]) {
            ans++; 
        } else {
            endTime = v[i][1];
            startTime = v[i][0]; 
        }
    }
    return ans; 
}


int main() {
    // Input: intervals = [[, [1,2],[2,3],[3,4],[1,], [1, 5] ] 
    vector<vector<int>> v; 
    v.push_back({1,2}); 
    v.push_back({2,3});
    v.push_back({1,3});
    v.push_back({3,4}); 


    cout << minEmailCount(v) << endl; 
    return 0; 
}