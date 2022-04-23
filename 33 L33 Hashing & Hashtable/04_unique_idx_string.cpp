#include<bits/stdc++.h> 
using namespace std;

int main() {

    string str; cin >> str; 
    map<char, pair<int, int> > m; 

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i]; 
        if (m.find(ch) == m.end()) {
            m[ch] = {1, i}; 
        } else {
            m[ch] = {m[ch].first + 1, i}; 
        }
    }

    for(auto p : m) {
        cout << p.first << " " << p.second.first << " " << p.second.second << endl;
    }

    return 0; 
}