/*

https://leetcode.com/problems/find-the-duplicate-number/

1. Brute force O(N^2)
2. Using set O(N) and space = O(N)
3. Using sorting NLogN 
4. Cycle detection O(N), space = O(1)

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // sort the array
        sort(nums.begin(), nums.end()); 
        int ans; 
        // itearte over the arrays 
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                ans = nums[i];
                break; 
            }
        }
        return ans; 
    }
};