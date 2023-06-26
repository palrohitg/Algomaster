#include<bits/stdc++.h> 
using namespace std;

// LCS On the Strings : Longest Common Subsequence

int lcs(string input1, string input2, int index1, int index2) {
    if (index1 < 0 || index2 < 0) return 0; 
    if (input1[index1] == input2[index2]) return 1 + lcs(input1, input2, index1 - 1, index2 - 1); 
    return max(lcs(input1, input2, index1-1, index2), lcs(input1, input2, index1, index2-1));
}


int main() {

    string input1, input2; cin >> input1 >> input2; 

    cout << lcs(input1, input2, 1, 1);

    return 0; 
}