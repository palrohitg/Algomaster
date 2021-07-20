#include<iostream>
using namespace std;


bool check_sorted(int *arr, int n, int i) {
    // Base case 
    if( i == n-1) {
        return true;
    }

    if(arr[i] > arr[i+1]) {
        return false;
    }

    return check_sorted(arr, n, i+1);
}

int main() {

    int n; cin >> n; 
    int *arr = new int[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    bool ans = check_sorted(arr, n, 0);
    if(ans) {
        cout << "Sorted";
    } 
    else {
        cout << "Unsorted";
    }

    return 0;
}