#include<bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<int, int> mp; 

    mp[1] = 10;

    for (const auto&[c, p]: mp) {
        cout << c << p << endl; 
    }

    return 0; 
}