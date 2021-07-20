#include<bits/stdc++.h>

#define ll long long int
#define vi vector<int>
#define pb push_back


using namespace std;

int solve(int arr[], int n, int k) {
    ll buffer = 0;
//    int days = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] + buffer < k) return i + 1;
        else if (arr[i] >= k) buffer += arr[i] - k; // remaining jobs
        else if (arr[i] < k) buffer -= k - arr[i];
//        days++;
    }
    //days += buffer/k + 1;
    return n + buffer / k + 1;

}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(arr, n, k) << "\n";
    }
    return 0;
}

