#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int arr[] = {5, 3,2,1}; 
    sort(arr, arr+ 3); 
    for (int i = 0; i <= 3; i++) {
        cout << arr[i] << " " << endl; 
    }

    cout << "first you will find the sections" << endl; 
    vector<int> arr1 = {5, 3, 2, 1}; 
    sort(arr1.begin(), arr1.end()); 

    for (auto num : arr1) {
        cout << num << endl; 
    }

    return 0; 
}