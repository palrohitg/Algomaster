// leetcode permutation problems 
// https://leetcode.com/problems/next-permutation/

/*
    brute-force approach--> 
    1. 

*/


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
            next_permutation(nums.begin(), nums.end()); 

            for(auto x : nums) {
                cout << x; 
            }
    }
};