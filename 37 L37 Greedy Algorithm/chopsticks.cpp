// Maximum no of stable chopsticks that can be formed 


#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


// Pair is possible or not 
bool canPair(int a, int b, int d) {
    
    if(abs(a-b) <= d) {
        return true;
    }
    return false;  
}   


int maxChop(int arr[], int n, int d) {

    int maxChop = 0;
    sort(arr, arr+n); // in ascending order sort 
    
    int i=0;
    while(i < n) {

        if(canPair(arr[i], arr[i+1], d)) {
            maxChop++;
            i += 2;
        }    
        else {
            i++;
        }
    }

    return maxChop;
}


int main() {

    int n,d; cin >> n >> d; 
    int *arr = new int[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    cout << maxChop(arr, n, d);

    delete[] arr;

    return 0;
}