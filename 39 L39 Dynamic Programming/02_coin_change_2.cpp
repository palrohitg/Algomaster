// to_string --> string to convert into string values here;
// here you are able to find out overlapping subproblems that need to solve first
// So using hashmaps to solve this kinds of problems.

#include<bits/stdc++.h>
using namespace std; 

int main() {
    unordered_map<string , int> mp; 
    string key; 
    key =  to_string(111) + "sdfksjd"; 
    mp[key] = 33; 

    cout << mp[key] << endl; 

    return 0; 
}   



// Google, Amazon Interview Questions put 
// Problem Questions: Asks 
// 1. what is constaints of N, M < 1000 
// Do we need to change the row and col that we have set to zeroes ? 
/**
 *  Create an aux arrays and update the data in that matrix Initialize all 1's
 *  Traverse the orignal arrays. 
 *  And make the change in aux arrays 
 *  O(N*M*(N+M)), O(N*M)
 * row[i] == true or col[j] == true 
 * a[i][j] = 0 
 * Can we reduce the space for same ? 
 */

#include<bits/stdc++.h> 
using namespace std;

int main() {

    return 0; 
}