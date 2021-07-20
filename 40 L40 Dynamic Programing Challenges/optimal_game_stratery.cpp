// Choose the optima l moves in each steps
// time complexity and overlapping subproblems
// Maximum profits we can gets

#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

int dp[5000][5000];

int optimal(int arr[], int i, int j) {

    // Base Case
    if (j == i + 1) {
        return max(arr[i], arr[j]);
    }

    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    // Choose diagrams if i choose the left and right we going to have to two results for sure we need to choose the best
    int ans = INT_MIN;
    int opt1 = arr[i] + min(optimal(arr, i + 2, j), optimal(arr, i + 1, j - 1));
    int opt2 = arr[j] + min(optimal(arr, i + 1, j - 1), optimal(arr, i, j - 2));
    ans = max(opt1, opt2);

    return dp[i][j] = ans;
}



int main() {

    int n; cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));

    cout << optimal(arr, 0, n - 1);

    return 0;
}