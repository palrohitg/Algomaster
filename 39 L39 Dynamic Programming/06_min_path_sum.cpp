#include<bits/stdc++.h> 
using namespace std;

int helper(vector<vector<int>> &grid, int start, int end, int m, int n) {
    // Base Case 
    if (start == m && end == n) return grid[start][end]; 
    // Base Case 
    if (start > m || end > n - 1) return INT_MAX; 
    int op1 = helper(grid, start, end+1, m, n); 
    int op2 = helper(grid, start+1, end, m, n);

    return grid[start][end] + min(op1, op2);
}


int minPathSum(vector<vector<int>> &grid) {
    int m = grid.size()-1;
    int n = grid[0].size()-1;
    return helper(grid, 0, 0, m, n); 
}

int main() {

    vector<vector<int>> v; 
    v.push_back({1,3,1});
    v.push_back({1,5,1});
    v.push_back({4,2,1});
    string test = "vikas";
    cout << test << endl; 
    int ans = minPathSum(v);  
    cout << ans;

    return 0;

}