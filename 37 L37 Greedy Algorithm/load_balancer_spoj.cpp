// follow up Question print -1 is load balancing is not possibles 
// logic maximum transfer of the job from one part of the arrays to the another part of the arrays 
#include<iostream>
using namespace std;


int loadBalancer(int arr[], int n) {

    // Base Case 
    int sum = 0;
    int round = 0;

    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    if(sum%n != 0) {
        return -1;
    }
    
    int avg = sum/n;

    for(int i=0; i<n; i++) {

        if(arr[i] > avg) {
            if(arr[i-1] < avg) {
                arr[i-1]++;
                arr[i]--;
            }
            if(arr[i+1] < avg) {
                arr[i+1]++;
                arr[i]--;
            }
            round++;
        }

    } 
    return round;
}

int main() {

    int t; cin >> t; 

    while(t--) {
        int n; cin >> n;
        int *arr = new int[n];

        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        cout << loadBalancer(arr, n);
        cout << endl;
        delete [] arr;
    }


    return 0;
}