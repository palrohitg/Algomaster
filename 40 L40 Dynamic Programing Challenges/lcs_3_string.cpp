#include<iostream>
#include<cstring>
#include<string.h>
using namespace std; 

int dp[202][202][201];

// recursive solution 
/*
int lcs(string a, string b, string c, int n, int m, int k) {

    // base case 
    if(n == 0 || m == 0 || k == 0) {
        return 0;
    }

    // recursive case 
    if(a[n - 1] == b[m - 1] == c[k - 1]) {
        return 1 + lcs(a, b, c, n - 1, m - 1, k - 1);
    }

    return max(lcs(a, b, c, n - 1, m, k), max(lcs(a, b, c, n, m - 1, k), lcs(a, b, c, n, m, k -1))); 
}
*/
// Bottom Up DP  3-DP maxtrix 

int lcsBU(string a, string b, string c, int n, int m, int k) {


    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            for(int z = 1; z <= k; z++) {

                if(a[i - 1] == b[j - 1] and a[i - 1] == c[z - 1]) {
                    dp[i][j][z] = 1 + dp[i - 1][j - 1][z -1];
                }
                else {
                    dp[i][j][z] = max(dp[i -1][j][z], max(dp[i][j - 1][z], dp[i][j][z -1])); 
                }

            }
        }
    }
    return dp[n][m][k];
}




int main () {

    string a, b, c; 
    cin >> a >> b >> c; 
    int n = a.length();
    int m = b.length();
    int k = c.length();

    memset(dp, 0, sizeof(dp));

    cout << lcsBU(a, b, c, n, m, k);

    return 0;
}