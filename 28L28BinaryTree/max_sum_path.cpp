#include<bits/stdc++.h> 
using namespace std;

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