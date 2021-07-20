// Given a string find if the patterns is present or not 
// optimization we can use the rabin kap algo and KMP algo
#include<bits/stdc++.h> 
using namespace std; 
https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/

bool solve(string txt, string pattern) {

    int n = txt.length(); 
    int m = pattern.length(); 
    int i,j; 

    for (i = 0; i <= (n - m); i++) {

        for (j = 0; j < m; j++) {
            if (txt[i + j] != pattern[j]) {
                break; 
            }
        }

        if (j == m) {
            return true; 
        }
        // if j reach to end, we found the elements   
    }
    return false;
}




int main() {

    string txt = "iampavikaspal"; 
    string pattern  = "pl"; 
     
    bool ans = solve(txt, pattern);
    if (ans) {
        cout << "present"; 
    } 
    else {
        cout << "absent"; 
    }


    return 0; 
}