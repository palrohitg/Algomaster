/*
    - Minimum coin change problems 
    - No of different coins and type 
    - Find out the min no of coins needed to make changes / zero to find the arrays 
*/
#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    

    // min no of required coins which is required
    int minCoinChange(vector<int> &coins, int amount, int type, vector<int> &dp) {
        // Base Case 
        if (amount == 0) return 0; 
        
        // When we need to calculate min then put the maximum values here
        int res = INT_MAX; 
        
        if (dp[amount] != 0) {
            return dp[amount]; 
        }
        
        for (int i : coins) {
            // check whether
            if (i <= amount) {
                int sub_res = minCoinChange(coins, amount-i, type, dp);
                // min coins changes 
                if (sub_res != INT_MAX && sub_res + 1 < res) {
                    res = sub_res + 1; 
                }
            }
        }
        dp[amount] = res; 
        return res; 
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int type = coins.size(); 
        vector<int> dp(amount+1, 0);
        int ans = minCoinChange(coins, amount, type, dp); 
        return ans == INT_MAX ? -1: ans; 
    }
};

int func1(int ind, int amount, vector<int> &coins) {
    if (amount == 0) return 1; 
    if (ind < 0) return 0; 

    if (dp[ind][amount] != -1) return dp[ind][amount];
    int ways = 0; 

    for (int coin_amount = 0; coin_amount <= amount; coin_amount += coins[ind]) {
        ways += func1(ind-1, amount - coin_amount, coins); 
    }

    return dp[ind][amount] = ways;
}

