// Given some bits set the bits problems 

#include<bits/stdc++.h> 
using namespace std; 


int flipbits(int n) {
    return ~n; 
}

int main() {

    // int n, k; cin >> n >> k; 
    // cout << "hellow";
    int n; cin >> n; 
    cout << flipbits(n);


    return 0; 
}