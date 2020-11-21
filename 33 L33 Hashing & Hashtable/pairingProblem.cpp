// hackerearth pairing problems 
/*

    1. Take the roll no and pass to the hash functions 
    2. Hash function return an index in range of vector size of n size 
    3. insert the elment an the particular index 


*/

#include<bits/stdc++.h> 
using namespace std;
// Smaller >= prime numbers 
#define mod 100003

vector<string> v(100003); 


int hashFunc(int rollNo) {
    return rollNo % mod;  
}

void insert(int rollNo, string name) {
    int idx = hashFunc(rollNo); 
    v[idx].push_back(name); 
}

void search(int rollNo) {
    int idx = hashFunc(rollNo); 
    cout << v[idx] << endl; 
}

int main() {

    int n; cin >> n;
    int rollNo;
    string name;  
    for(int i = 0; i < n; i++) {
        cin >> rollNo >> name; 
        insert(rollNo, name); 
    }

    int q; cin >> q; 
    while(q--) {
       cin >> rollNo;
       search(rollNo);  
    }

    return 0; 
}