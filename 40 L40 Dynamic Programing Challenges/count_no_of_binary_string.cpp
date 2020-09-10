// count the no of binary string so that there is no consective one 
#include<iostream>
#include<cstring>
using namespace std; 

static int dp[102];


int count(int  n) {

    // base case 
    if ( n == 0) {
        return dp[n] = 0;
    }
    if ( n == 1) {
        return dp[n] = 2; 
    }
    if(n == 2) {
        return dp[n] = 3;
    }
    if(dp[n] != -1) {
        return dp[n];
    }

    return dp[n] = count(n - 1) + count(n - 2);
}


int main() {

    int t; cin >> t; 
    memset(dp, -1, sizeof(dp));


    while(t --) {
        int n; cin >> n; 
        cout << count(n); 
        cout << endl;
    }

    return 0; 
}