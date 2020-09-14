/*
 Approches :
 1. Generate all the subsets and push all in the set and return the size of the set
 Dp Problems minus the count of the repetition Problems 
*/

#include<iostream>
#include<cstring>
#include<string.h> 
#include<map>
#include<set> 
using namespace std; 

set<string> s; 

void generateSubsequences(char *input, char *output, int i, int j, int n) {
    
    // Base Case Print the string in the base case and insert into the set 
    if(i == n) {
        output[j] = '\0';
        // cout << output << endl;
        s.insert(output);
        return; 
    } 

    output[j] = input[i];
    generateSubsequences(input, output, i + 1, j + 1, n);
    generateSubsequences(input, output, i + 1, j, n);
    return; 
}


// DP bottom up Solutions : Hashmaps + DP 
map<char, int> m; 

int solve(int arr[], int n) {
    
}





int main() {

    int t; cin >> t; 
    
    while(t--) {

        char input[100000]; cin >> input;
        char output[100000];
        int n = strlen(input);
        generateSubsequences(input, output, 0, 0, n);
        cout << s.size() %1000000007  << endl;
        s.clear();

    }

    return 0;
}