// STL Based questions 
#include<bits/stdc++.h> 
using namespace std; 

int main() {

    int n; cin >> n; 
    int k; cin >> k; 

    vector<long long int> v; 

    for (long long int i = 0; i < n*k; i++) {
        long long int data; cin >> data; 
        v.push_back(data); 
    }

    sort(v.begin(), v.end()); 

    for (long long int a : v) {
        cout << a << " "; 
    }

    return 0; 
}