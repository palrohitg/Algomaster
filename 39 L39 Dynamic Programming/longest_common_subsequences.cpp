// Pro tips of  recursion + DP 
/*
    1. Base Conditions 
    2. Smallest valid inputs 
    3. choice digrams and then write the recursive code 
    // Generate all the possible subsequences 
*/





// Popular 2 D dp problems
// Application in of DNA matching 
#include<iostream>
#include<string>
using namespace std; 



// longest common subsequences return the value 
int lcs(string x, string y, int n, int m) {

    // base case 
    if(n == 0 || m == 0) { // if one is null then there is nothing commons 
        return 0;
    }

    if(x[n-1] == y[m-1]) {
        return 1 + lcs(x, y, n-1, m-1); 
    }

    return max(lcs(x, y, n-1, m), lcs(x, y, n, m-1)); // return the maxium in both the strings  
}



// bottom up solution of dp 
int lcsBU(string x, string y, int row, int col) {

    int dp[row + 1][col + 1];

    for(int i=0; i<=col; i++) dp[0][i] = 0;
    for(int i=0; i<=row; i++) dp[i][0] = 0;


    for(int i=1; i<=row; i++) {
        for(int j=1; j<=col; j++) {
            int q = 0; 

            if(x[i-1] == y[j-1]) {
                q = 1 + dp[i-1][j-1]; // diagnal values  // if equal checkout on the smaller subproblems checkouts 
            }
            else {
                q = max(dp[i-1][j], dp[i][j-1]);
            }

            // state of the dp 
            dp[i][j] = q; 
        }
    }

  return dp[row][col];
}

int main() {

    string s1, s2; 
    cin >> s1 >> s2;

    int n = s1.length();
    int m = s2.length();

    cout << lcsBU(s1, s2, n, m);

    return 0;
}