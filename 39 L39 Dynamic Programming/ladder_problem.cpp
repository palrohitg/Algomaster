#include<iostream>
using namespace std; 


// we are just summing up the result of previous k state we are doing to n times so it will O(NK)
// no of ways to reach to the tops of the ladders 
int ways(int n, int k, int dp[]) {

    // Base Case 
    if(n < 0) {
        return 0;
    }

    if(n == 0) {
        return 1;
    }

    // look up 
    if(dp[n] != 0) {
        return  dp[n];
    }

    // for all the kth steps
    int ans = 0; 
    for(int i=1; i<=k; i++) {
        ans = ans + ways(n-i, k, dp );
    }

    return  dp[n] = ans;
}


// bottom up approaches 


int main() {

    int n; cin >> n; 
    int k; cin >> k;

    int dp[100] = {0};
    cout << ways(n, k, dp) << endl;

    return 0;
}