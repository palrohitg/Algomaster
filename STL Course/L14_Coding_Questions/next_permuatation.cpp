// Implement the next permutation using the algorithms STL 
#include<bits/stdc++.h>
using namespace std; 

int main() {

    int t; cin >> t; 
    int arr[1001]; 

    while(t--) {
        int n; cin >> n; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        
        next_permutation(arr, arr+n); 

        // Print out the elements 
        for (int i = 0; i< n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
 


    return 0; 
}