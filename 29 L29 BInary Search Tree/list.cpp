#include<bits/stdc++.h> 
using namespace std;

int main() {
    list<int> g1; 
    g1.push_back(10); 
    g1.push_front(2); 
    g1.pop_back(); 

    for (auto it = g1.begin(); it != g1.end(); it++) {
        cout << *it << endl; 
    }
    return 0;
}