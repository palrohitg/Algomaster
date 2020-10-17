// Notes : how many activiites that i don't have to do just count that
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;


bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}

int main() {

    int n; cin >> n; 
    int c, r; 
    vector<pair<int, int>> v; 
  
    for(int i = 0; i < n; i++) {
        cin >> c >> r;
        v.push_back(make_pair(c - r, r + c)); // insert the starting and the ending corrdinates of the circle/activities
    }

    // sort the circles 
    sort(v.begin(), v.end(), compare);

    int res = 0;
    int fin = v[0].second;

    for (int i = 1; i < n; i++) {
        if (fin > v[i].first) {
            res++;
        }        
        else {
            fin = v[i].second;
        }
    }
    cout << res; 
    return 0; 
}