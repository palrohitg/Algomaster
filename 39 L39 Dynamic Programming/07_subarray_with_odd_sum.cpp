/*
    Things of the edges 
    why odd + even = even
    odd sum 
*/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int ans = 0; 
        int sum = 0; 
        int odd = 0; 
        int even = 0; 
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i]; 
            if (sum % 2 == 0) {
                ans += odd;  
                even++; 
            } else {
                ans += 1 + even;
                odd++; 
            }
            ans = ans%1000000007; 
        }
        return ans; 
    }
};