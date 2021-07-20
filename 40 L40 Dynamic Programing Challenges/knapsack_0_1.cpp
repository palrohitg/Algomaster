// Easy Question 0-1 either pick or leaves its 


#include<iostream> 
#include<climits>
#include<cstring>
using namespace std; 

static int dp[1002][1002];


int knapsack(int weight[], int value[], int n, int W) {


    // Base Case 
    if( n == 0 || W <= 0) {
        return 0;
    }

    // checkout in the tb table 
    if(dp[n][W] != -1) {
        return dp[n][W];
    }

    // Recursive Case 
    if(weight[n-1] <= W) { 
        // include it and exclude the current elements and check the maxiumum profits
        return dp[n][W] = max(value[n-1] + knapsack(weight, value, n-1, W - weight[n-1]), knapsack(weight, value, n-1, W));

    }

    // not exclude the current elments and make the current poistion smallers
    return dp[n][W] = knapsack(weight, value, n-1, W);
}



int main() {

    


    int n, W; 
    cin >> n >> W; 

    memset(dp, -1, sizeof(dp));
    

    int weight[1000]; 
    int value[1000];

    for(int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    
    for(int i = 0; i < n; i++) {
        cin >> value[i];
    }

    cout << knapsack(weight, value, n, W);

    return 0;
}