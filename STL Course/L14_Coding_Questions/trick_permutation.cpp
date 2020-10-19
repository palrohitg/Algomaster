// Recursion based question + SET STL 

// backtracking is used to restore the originals states 

#include<bits/stdc++.h> 
using namespace std; 


void permute(string input, int i, int n, set<string> &s) {

    // Base Case 
    if (i == n) {
        s.insert(input); 
        return; 
    }

    // Recursive Case 
    for (int j = i; j < n; j++) {

        // swap the current elements 
        swap(input[i], input[j]); 

        // recursive calls 
        permute(input, i + 1, n, s); 

        // backtracks to restore the originals states 
        swap(input[i], input[j]);
    }
    return; 
}


int main() {

    string input; cin >> input; 
    int n = input.length(); 
    set<string> s; 
    permute(input, 0, n, s);  

    // iterate over the set 
    for (string res : s) {
        cout << res << endl; 
    }

    return 0; 
}