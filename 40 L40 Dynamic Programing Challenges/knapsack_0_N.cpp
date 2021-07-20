/*
5 11
3 2 4 5 1
4 3 5 6 1


Algorithms : 
1. Iterate over the cap and then iterate over the frequency arrays and then checkout the maximum profits we can
    make by using the same items w.r.t to the current prices 



unbounded knapsack means we can add the value for multiple times right 

*/

#include<iostream>
#include<climits> 
#include<cstring> 
using namespace std; 

// print out the knapsack value 
// Return the max profit we can make by the unbounded knapsack 
int knapsack(int val[], int weight[], int n, int cap) {

    int dp[cap + 1]= {0}; 
    

    for(int i = 1; i <= cap; i++) {
        for (int j = 0; j < n; j++) { // iterate over the elements 

            if(weight[j] <= i) { // find out the best value for current ith elments 
                dp[i] = max(dp[i], val[j] + dp[i - weight[j]]); 
            }
        }
    }
    return dp[cap]; 
} 

int main() {

    int n;
    int cap; 
    cin >> n >> cap; 
    int val[1000];
    int weigth[1000];


    for(int i = 0; i < n; i++) {
        cin >> weigth[i]; 
    }  

    for(int i = 0; i < n; i++) {
        cin >> val[i];
    }

    

    cout << knapsack(val, weigth, n, cap); 

    return 0; 
}