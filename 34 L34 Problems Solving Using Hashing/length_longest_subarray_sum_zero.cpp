/*
    1. Store the value of maxLen as the value in the hashmaps 
    2. if similar element is found means the repetition is going to happend and forsure the sum of the arrays will be zeros at the same points 
    3. insert value in hasmaps and update maxlen if already presents  store pre and key index in the hasmhmaps 
    4. just dry run on the hashtable you will get the answers 
*/
#include<iostream>
#include<unordered_map>
using namespace std;


int lengthLongestSubArrays(int arr[], int n) {

    unordered_map<int, int> m; 
    
    // Iterate over the arrays
    int preSum = 0;
    int max_len = 0;
    for(int i=0; i<n; i++) {

        preSum += arr[i];
        
        // if current position preSum == 0
        if(preSum == 0) {
            max_len = max(max_len, i+1);
        }
        // if the sum is present in the hashmaps then calculate the max_len by i - presum value 
        if(m.find(preSum) != m.end()) {
            max_len = max(max_len, i - m[preSum]);
        }
        else {
            // if the element is inserted for the first times 
            m[preSum] = i;
        }
    }
   return max_len;
}


int main() {

    int n; cin >> n; 
    int arr[100];

    for(int start=0; start<n; start++) {
        cin >> arr[start];
    } 

    cout << lengthLongestSubArrays(arr, n); 


    return 0;
}