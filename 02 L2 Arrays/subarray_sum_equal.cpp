#include<bits/stdc++.h> 
using namespace std;

int subArraySum(vector<int> &arr, int target) {
    int n = arr.size(); 
    unordered_map<int, int> prevSum; 
    prevSum[0] = 1; 
    int currSum = 0, res = 0; 
    
    for (int i = 0; i < n; i++) {
        currSum += arr[i]; 

        if (prevSum.find(currSum -  target) != prevSum.end()) {
            res += prevSum[currSum -  target];
        }
        prevSum[currSum]++;
    }
    return res; 
}

int main() {

    vector<int> arr{10, 2, -2, -20, 10}; 
    cout << subArraySum(arr, -10); 

    return 0; 
}