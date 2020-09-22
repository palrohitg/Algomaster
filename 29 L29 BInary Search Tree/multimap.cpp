#include<iostream>
#include<map>
#include<cstring>
using namespace std; 

int main() {

    multimap<char, string> m; 
    int n; cin >> n; 

    for(int i = 0; i < n; i++) {
        char ch; 
        string s;
        cin >> ch >> s; 
        m.insert(make_pair(ch, s));
    }


    // Print the value of the maps 
    for(auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " and " << it->second << endl;
    } 


    return 0;   
}