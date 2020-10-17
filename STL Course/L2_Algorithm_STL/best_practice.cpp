// highest frequency we can use the lower_bound and upper_bound functions 
// comparator in STL and how to pass the another functions in the functions calls 

pair : container that helps to bind two entity as one like <string,int> pair<<string,int>> p like this 

#include<bits/stdc++.h> 
using namespace std; 


int main() {

    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(int);
    int key; cin >> key; 

    auto it = find(arr, arr+n, key);
    int index = it - arr; 

    cout << *it; 
    // cout << arr[index]; 
   


    return 0;    
}