// Variation of sum of zeroes


#include<iostream>
#include<unordered_map>
using namespace std; 


int maxLen(int arr[], int n, int k) {

    unordered_map<int, int> m; 
    int len = 0;
    int sum = 0;

    // Iterate over the array
    for(int i=0; i<n; i++) {
        
        sum += arr[i];

        if(sum == k) {
            len = max(len, i+1);
        }

        // check the same cs in the hashmap and calcuate the index 
        if(m.find(sum - k) != m.end()) {
            len = max(len, i - m[sum]); // current idx - previous present sum 
        }
        else {
            m[sum] = i; // insert the key and associcate the value in the hashtable
        }
    }
    return len;
}

int main() {

    int n; cin >> n;
    int arr[100];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int k; cin >> k;
    cout << maxLen(arr, n, k);


    return 0;
}