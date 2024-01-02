#include<bits/stdc++.h> 
using namespace std; 

int main() {
    // int arr[] = {5, 3,2,1}; 
    // sort(arr, arr+ 3); 
    // for (int i = 0; i <= 3; i++) {
    //     cout << arr[i] << " " << endl; 
    // }

    // cout << "first you will find the sections" << endl; 
    // vector<int> arr1 = {5, 3, 2, 1}; 
    // sort(arr1.begin(), arr1.end()); 

    // for (auto num : arr1) {
    //     cout << num << endl; 
    // } 

    // Find the changes to sort the arrays 
    vector<int> ans{1, 2, 4, 1, -1}; 
    sort(ans.begin(), ans.end());  

    for (auto num : ans) {
        cout << "Answer to take the data :" << num << endl; 
    }

    return 0; 
}