// sort the strings based on the lexicographical orders 
// Notes: if first strings is the substring of second strings then return the string which has greater lengths 
#include<bits/stdc++.h> 
using namespace std; 


bool compare(string a, string b) {
    for (int i = 0; i < min(a.size(), b.size()); i++) {
        if (a[i] != b[i]) return a[i] < b[i];  // lexigraphically 
    }
    return a.size() > b.size(); // greater elements 
}

int main() {

    int n; cin >> n; 

    // vectors of strings 
    vector<string> v; 
    string str; 

    for (int i = 0; i < n; i++) {
        cin >> str; 
        v.push_back(str); 
    }

    // Sort the strings based on the lengths 
    sort(v.begin(), v.end(), compare); 

    // Iterate over the vectors 
    for (auto it : v) {
        cout << it << endl;
    }

    return 0; 
}

// 3
// bat
// apple
// batman