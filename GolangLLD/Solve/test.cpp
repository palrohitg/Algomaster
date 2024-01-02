#include<bits/stdc++.h>
using namespace std;


int aggresiveCows(int arr[], int noOfCows, int n) {
    sort(arr, arr+n);
    int low = arr[0];
    int high = arr[n-1] - arr[0];

    while(low <= high) {
        int mid = (low + high) / 2;
        if (canWePlace(arr, mid, noOfCows)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return high
}


int main() {

    return 0;
}