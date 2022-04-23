#include<bits/stdc++.h>
using namespace std;


// def compare(item1, item2):
//     if fitness(item1) < fitness(item2):
//         return -1
//     elif fitness(item1) > fitness(item2):
//         return 1
//     else:
//         return 0

// # Calling
// list.sort(key=compare)


// increasing order main sort kiya hai
bool comp(const string &a, const string &b) {
    
    if (a.length() != b.length()) return a.length() < b.length();
    int N = a.length();
    int M = b.length(); 
    int i = 0, j = 0;

    while(i < N && j < M) {
        if (a[i] == b[j]) {
            i++;
            j++; 
        } else {
            return a[i] < b[j]; 
        }
    }
    return true; 
}

int main() {
// Input: [“ABCDE”, “ABCD”, “Z”, “A”, “AB”, “AA”, “ABC”]
// Output: [“A”, “Z”, “AA”, “AB”, “ABC”, “ABCD”, “ABCDE”]
    vector<string> str; 
    str.push_back("ABCDE");
    str.push_back("ABCD");
    str.push_back("Z");
    str.push_back("A");
    str.push_back("AB");
    str.push_back("AA");
    str.push_back("ABC");

    for (auto s : str) {
        cout << s << " "; 
    }
    cout << endl; 
    sort(str.begin(), str.end(), comp);
    for (auto s : str) {
        cout << s << " "; 
    }
    
    return 0; 
}