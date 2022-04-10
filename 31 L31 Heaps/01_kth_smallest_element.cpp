/*

1. Brute Force solution using sorting  --> Sort Array and then k-1 index from start
    O(Nlogn)
2. Min heap -> 
3. Max heap 
4. Quick Select


*/  
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v {10, 20, 5}; 

    // Descending order 
    sort(v.begin(), v.end(), greater<>());

    for (auto n : v) {
        cout << n << " " << endl;
    }


    return 0;
}