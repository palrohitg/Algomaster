#include<bits/stdc++.h>
using namespace std;

/*  
    Binary Search Algorithms
    AP : Arithemetic Progression 
    3 Cases: 
    1. Mid+1 - Mid != diff 
    2. Mid - (mid-1) != diff 
    3. Mid == first + Mid * diff : first half is sorted then focus mid+1, high 
    4. else mid-1, first 
*/


int findMissingNumber(int arr[], int low, int high, int diff) {

    return 0; 
}


int main() {
    
    int arr[] = {2, 4, 8, 10, 12, 13}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    
    int diff =


    int missingNumber = findMissingNumber(arr, size); 
    cout << missingNumber << endl;

    return 0; 
}