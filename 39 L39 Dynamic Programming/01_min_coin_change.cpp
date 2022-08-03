// Greedy approach fails here recursion + memoisation  
#include<iostream> 
#include<climits>
using namespace std; 


// top down dp 
int minCoins(int n, int coin[], int T, int dp[]) {

    // Base Case 
    if(n == 0) {
        return 0;
    }

    // Look up table 
    if(dp[n] != 0) {
        return dp[n];
    }

    int ans = INT_MAX;
    // Recursive Case 
    for(int i=0; i<T; i++) {    

        if(n - coin[i] >= 0) {
            int subproblem = minCoins(n - coin[i], coin, T, dp);
            ans = min(ans, subproblem+1);
        }
    }   
    
    // Store the ans 
    dp[n] = ans;
    return dp[n];
}


// Bottom up dp solutions
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int Max = amount + 1;
        vector<int> dp(amount + 1, Max);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (coins[j] <= i) {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        // case -1 : when not possible to make the changes
        return dp[amount] > amount ? -1 : dp[amount];
    }
};

// Bottom up dp 
int main() {

    int n = 3; 
    int coin[] = {1, 7, 10};
    int T = 3; 
    int dp[1000] = {0};
    cout << minCoins(n, coin, T, dp);
    // cout << minStepToOneRec(n);

    return 0;
}