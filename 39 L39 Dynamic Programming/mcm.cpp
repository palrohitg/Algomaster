// Given an arrays make the matrxi and multile so the cost of the multiplication should be maximums 
// Constraints multiplication should be done when the col of A maxtrix should be the same of the matrix be 




#include<iostream>
#include<climits> 
#include<cstring>
using namespace std; 

int static dp[100][100];

int minCost(int arr[], int i, int j) {

    // Base Case 
    if (i >= j) {
        return 0; 
    }

    // look up in the dp table 
    if(dp[i][j] != -1) {
        return dp[i][j];
    }


    int ans = INT_MAX;

    for(int k = i; k < j; k++) {
        int tempAns = minCost(arr, i, k) + minCost(arr, k+1, j) + (arr[i-1] * arr[k] * arr[j]);
        ans = min(tempAns, ans);
    }

    dp[i][j] = ans;  // store the answers   

    return ans;
}




int main() {

    int n; cin >> n; 
    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }   

    memset(dp, -1,sizeof(dp));

    // mincost
    cout << minCost(arr, 1, n-1);

    return 0;
}