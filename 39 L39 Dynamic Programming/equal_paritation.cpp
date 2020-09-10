// checkout in the all the subset in the arrays if their are equal sum or not 
// base condition trick i have to score zero run and no one is playing every one can do this 
// bottom solution can be 2-d dp or 1-d dp matrix 

#include<bits/stdc++.h> 
using namespace std; 


// bottom up dp code 
int subsetSum(vector<int> nums, int n, int sum) {

    // dp matrix 
    int dp[n+1][sum+1]; 

    for(int i = 0; i <= sum; i++) {
        dp[0][i] = 0;
    }

    for(int i = 0; i <= n; i++) {
        dp[i][0] = 1; 
    }

    // fill the dp arrays 
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {

            //check for the current sets and sum 
            if(nums[i - 1] > j) {
                dp[i][j] = dp[i - 1][j]; // check if the previous subset can make the sum or not 
            }
            else {
                dp[i][j] = dp[i - 1][j] || dp[i -1 ][j - nums[i - 1]]; // exclude or include the current elements 
            }
        }
    }   
    return dp[n][sum];
}


bool canParitation(vector<int>&nums) {

    int sum = 0; 
    for(auto it = nums.begin(); it != nums.end(); it++) {
        sum += *it; 
    }

    if(sum % 2 != 0) { // odd not possible to divide the subarrays in the equal parts 
        return false; 
    }
    
    // make the call ot the subset function knapsack varitions 
    int n = nums.size();
    return subsetSum(nums, n, sum/2);
}

int main() {

    int n; cin >> n; 
    vector<int> nums; 

    for(int i = 0; i < n; i++) {
        int num; 
        cin >> num; 
        nums.push_back(num);
    }

    bool ans = canParitation(nums);
    if(ans) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0; 
} 