#include<bits/stdc++.h>
using namespace std;
/**
 * TC : O(N'2)
 * SC : O(N'2)
 */



int dp[100][100]; 

int maxProfit(int prices[], int start, int end, int year) {

    if (start > end) return 0; 
    if (start == end) return prices[start]*year; 

    if (dp[start][end] != -1) return dp[start][end];
    
    int left = prices[start] * year + maxProfit(prices, start+1, end, year+1);
    int right = prices[end] * year + maxProfit(prices, start, end-1, year+1);

    dp[start][end] = max(left, right);
    return dp[start][end];
}

int main() {
    memset(dp, -1, sizeof(dp));
    int prices[] = {2, 4, 6, 2, 5}; 
    cout << maxProfit(prices, 0, 4, 1) << endl; 
    return 0;
}