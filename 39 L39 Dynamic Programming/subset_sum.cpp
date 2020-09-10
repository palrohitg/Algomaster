// Little varition of knapsack problems we have two choice here 
#include<iostream>
#include<cstring>
using namespace std; 

bool static dp[1002][100005];

 // recursivel solutions 
bool targetSum(int arr[], int n, int target) {

    // Base Case 
    if(n == 0 || target == 0) {
        return true; 
    }
    
  
    // recursive case 
    if(arr[n-1] <= target) {
        return targetSum(arr, n-1, target - arr[n-1]) || targetSum(arr, n-1, target);
    }

    return targetSum(arr, n-1, target);
}



// check out if the subset is present or not 

/*
bool targetSum(int arr[], int n, int target) {

    // Base Case 
    if(n == 0) {
        return false; 
    }

    if(target == 0) {
        return true;
    }   
    
    // lookup 
    if(dp[n][target] != -1) {
        return dp[n][target];
    }
    // recursive case 
    if(arr[n-1] <= target) {
        return dp[n][target] = targetSum(arr, n-1, target - arr[n-1]) || targetSum(arr, n-1, target);
    }

    return dp[n][target] = targetSum(arr, n-1, target);
}
*/

/*
bool  targetSumBu(int arr[], int n, int sum) {

    // fill the table 

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= sum; j++) {

            if(i == 0 && j == 0) {
                dp[i][j] = true;
            }   
             else if (j ==  0) {
                dp[i][j] = false;
            } 
            else if (i == 0) {
                dp[i][j] = true;
            }
            else {  
                int val = arr[i-1];
                if(j >= val) {
                    if(dp[i - 1][j - val] == true) {
                        dp[i][j] == true;
                    }  
                }
            }

        }
    }

    return dp[n][sum];
}
*/

int main() {

    int n, target;
    cin >> n >> target;

    // memset(dp, -1, sizeof(dp));

    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }   

    bool ans = targetSum(arr, n, target);
    if(ans) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}