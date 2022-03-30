/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *
 *
 *
 *
 * LCA Approach :
    1. left subtree
    2. right subtree
    3. will pass from root node

    TC : O(N)
    SC : O(N)
 *
 *
 *
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root == NULL) return root;

        if (root->val == p->val || root->val == q->val) {
            return root;
        }

        TreeNode* left_lca = lowestCommonAncestor(root->left, p, q);
        TreeNode* right_lca = lowestCommonAncestor(root->right, p, q);

        if (left_lca != NULL and right_lca != NULL) return root;
        else if (left_lca == NULL and right_lca == NULL) return NULL;
        else if (left_lca != NULL) return left_lca;
        else return right_lca;
    }
};