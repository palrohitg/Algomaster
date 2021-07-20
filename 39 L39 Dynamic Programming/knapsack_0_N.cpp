// 0-N and unbounded knapsack problems
/*
You've heard of 0-1 knapsack. Below is the problem statement for the same.

Given weights and values of n items, put these items in a knapsack of capacity cap to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer cap which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to cap. You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).
There is a little twist for 0-N knapsack. You can pick an element more than once. Now you have to find maximum value multi subset of val[] such that sum of the weights of this subset is smaller than or equal to cap.

Note: Maximum value subset means the sunset with maximum sum of all the values in subset.

Input Format
The first line contains two integers, representing n(size of val[]) and cap respectively. The subsequent line contains n integers representing the wt[] array. The next line, again, contains n integers representing the val[] array.


*/
#include<iostream>
#include<climits>
using namespace std; 

// max profit knapsack problems 
int knapsack(int val[], int weight[], int n, int w) {

    // base case 
    if (n == 0 || w == 0) {
        return 0;
    }

    // recursive case 
    int mn = 0;
    if (weight[n - 1] <= w) {

        // include , exclude the elments and then give the maxiums profits 
        int mn = max(val[n - 1] + knapsack(val, weight, n - 1, w - weight[n - 1]), knapsack(val, weight, n - 1, w));
        return max(val[n - 1] + knapsack(val, weight, n, weight[n - 1]), mn);
    }

    return knapsack(val, weight, n -1, w);
}



int main() {


    int n, w;
    cin >> n >> w; 

    int val[100], weight[100]; 

    // value arrays 
    for(int i = 0; i < n; i++) {
        cin >> val[i];
    }   

    // value arrays 
    for(int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    cout << knapsack(val, weight, n, w); 
    



    return 0;
}