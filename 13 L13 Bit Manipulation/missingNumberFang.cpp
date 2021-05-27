#include<bits/stdc++.h> 
using namespace std; 

int missingNumber(vector<int> nums) {
    int res = 0; 

    // compute the xor of all numbers 
    for (auto num : nums) {
        res = res ^ num; 
    }

    for (int i = 0; i <= nums.size(); i++) {
        res = res ^ i; 
    }

    return res; 
}


int main() {
 
    int n; cin >> n; 
    vector<int> nums;
    nums.reserve(n); 

    for (int i = 0; i < n; i++) {
        int data; cin >> data; 
        nums.push_back(data); 
    }

    int ans = missingNumber(nums); 
    cout << ans << endl; 

    return 0; 
}