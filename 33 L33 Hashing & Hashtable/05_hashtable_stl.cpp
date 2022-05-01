/*
    C++ STL Course: 
    1. Maps 
    2. Unordered_Maps


    Operation:
    1. Insert --> insert()
    2. Delete --> find()
    3. Search --> erase()

    Complexity: 
    - Maps: Ordered hooti hai maps main.
*/

#include<bits/stdc++.h>
#include<map>
using namespace std;

int main() {

    unordered_map<int, int> mp; 

    mp[1] = 10;

    for (const auto&[c, p]: mp) {
        cout << c << p << endl; 
    }

    return 0; 
}