// Sort the list according the salary in the descending orders 
#include<bits/stdc++.h> 
using namespace std; 


bool compare(pair<string, int> p1, pair<string, int> p2) {

    // salary is same then sort on the based of names 
    if (p1.second == p2.second) {
        return p1.first < p2.first; // increasing orders 
    }
    return p1.second > p2.second; // decreasing orders 
}


int main() {

    int X, N; cin >> X >> N; 
    vector<pair<string,int>> v; 
    string name; 
    int salary;  

    for (int i = 0; i < N; i++) {
        cin >> name >> salary; 
        v.push_back(make_pair(name, salary)); 
    }

    // Sort the list based on the salary second parameters of pairs 
    sort(v.begin(), v.end(), compare); 

    // Print all the pair which has greater or equal salary than x 
    for (auto p : v) {
        if(p.second >= X) {
            cout << p.first << " " << p.second << endl; 
        }
    }

    return 0; 
}