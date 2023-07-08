#include<bits/stdc++.h> 
using namespace std;

bool compare(vector<int> a, vector<int> b) {
    if (a < b) {
        return true; 
    } 
    return false; 
}

int main() {
    vector<vector<int>> intervals {{2, 6}, {1,3}, {8, 10}, {15, 18}}; 

    sort(intervals.begin(), intervals.end(), compare);

    for (auto name : intervals) {
       for (auto x : name) {
         cout << x << " "; 
       }
       cout << endl; 
    }

    return 0; 
}