#include<bits/stdc++.h> 
using namespace std;

int main() {
    unordered_map<int,int> frequency; 
    // map<int,int> frequency; 

    frequency[10]++; 

    for (auto p : frequency) {
        cout << p.first << " " << p.second << endl;
    }

    return 0; 
}