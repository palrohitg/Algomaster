#include<bits/stdc++.h> 
using namespace std;
/* 
    MaximumPath Sum 
    ans : check the left, right and answer values  , currentAns = {and, left+right+root->value}
    return the max from the current here 
*/



class Solution {

    public:
        int ans = INT_MIN; //


        int helper(TreeNode * root) {
            if (!root) return 0; 
            int left = helper(root->left);
            int right = helper(root->right);
            
            ans = max(ans, left+right+root->value); 
            return max({left+root->value, right+root->value, 0}); 
        }

        int maximumSumPath(TreeNode * root) {
            helper(root);
            return ans; 
        }
}; 

int main() {
    return 0;
}