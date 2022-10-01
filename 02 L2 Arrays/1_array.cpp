// Maximum subarray sum 
/*

Kadane Algorithm 
    max_so_far 
    max_ending_here

    1. max_ending_here + a[i] 
    max_so_far < max_ending_here
    then will update max_so_far 
    2. At any given point of time if maximum_so_far
    is less thann zero then it should be zero 
*/
#include<bits/stdc++.h> 
#include<algorithm> 
using namespace std;

int main() {

    int arr[] = {-123,-1, -10, 0}; 
    int max_num = *max_element(arr, arr + 4);
    // if this is less than zero then simply return max_num
    cout << max_num << endl; 
    return 0;
}