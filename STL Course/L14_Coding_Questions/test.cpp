#include<bits/stdc++.h> 
using namespace std; 


int main() {


    int n; cin >> n; 
    int *arr = new int[n]; 
    for (int i = 0; i < n; i++) {
        int data; cin >> data; 
        arr[i] = data; 
    }
    int query; cin >> query; 

    while(query--) {
        int key; cin >> key; 
        // Return true and false 
        if(binary_search(arr, arr+n, key)){
            auto it1 = lower_bound(arr, arr + n, key);
            auto it2 = upper_bound(arr, arr + n, key); 
            int lb = it1 - arr;
            int ub = it2 - arr; 
            cout << lb << " " << ub - 1<< endl;   
        } 
        else {
            cout << "-1" << " " << "-1" << endl; 
        }
    }

    return 0; 
}