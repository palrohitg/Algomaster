// Top-Down Dp = Recursion + Memoisation 

#include<iostream>
#include<climits>
using namespace std; 


// recursive solutions 

/*
int minStepToOne(int n) {

    // Base Case 
    if(n == 1 or n == 0) {
        return 0;
    }   

    int x, y, z = INT_MAX; 
    
    if(n % 3 == 0) {
        x = minStepToOne(n/3);
    }
    if(n % 2 == 0) {
        y = minStepToOne(n/2);
    }
    
    z = minStepToOne(n - 1);

    return min(min(x,y),z) + 1;
}
*/


// top down dp approachs  : recursion + memoisations 
int minStepToOne(int n, int dp[]) {

    // Base Case 
    if( n == 1 or n == 0) {
        return 0;
    }

    // look up in the dp table 
    if(dp[n] != 0) {
        return dp[n];
    }
    int x,y,z = INT_MAX;
     if(n % 3 == 0) {
        x = minStepToOne(n/3, dp);
    }
    if(n % 2 == 0) {
        y = minStepToOne(n/2, dp);
    }
    
    z = minStepToOne(n-1, dp);
    return dp[n] = min(min(x,y),z) + 1;
}


int main() {

    int n; cin >> n;
    int dp[1000] = {0};
    // cout << minStepToOne(n) << endl;
    cout << minStepToOne(n, dp);
    return 0;
}