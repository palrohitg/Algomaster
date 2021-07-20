// Return the length of the longest common subsequences 
// Brute forces using the DP
// Check all the element that are less on the left side from the current index  

#include<iostream>
using namespace std; 


void longestIncreaseSubsequences(int arr[], int n) {

    int temp[n]; 

    // fill the element with one 
    for(int i=0; i<n; i++) {
        temp[i] = 1;
    }

    for(int i=1; i<n; i++) {
        for(int j=0; j<i; j++) { // check the all the previous elements 
            
                if(arr[j] < arr[i]) {
                    temp[i]++; 
                }
        }
    }   

    for(int i=0; i<n; i++) {
        cout << temp[i] << " "; 
    }


    // // Find the max elements in the arrays 
    // int maxLen = 1; 
    // for(int i=0; i<n; i++) {
    //     maxLen = max(temp[i], maxLen);
    // }

}




int main() {

    int arr[100];
    int n; cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> arr[i]; 
    }

   longestIncreaseSubsequences(arr, n);

    return 0;
}