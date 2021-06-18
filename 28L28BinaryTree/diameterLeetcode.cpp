/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

	int height(TreeNode* root) {
		if (root == NULL) return 0;
		int h1 = height(root->left);
		int h2 = height(root->right);
		return max(h1, h2) + 1;
	}


	int diameterOfBinaryTree(TreeNode* root) {

		// base case
		if (root == NULL) return 0;

		// 3 option, pass throught, root, leftsubtree and rightsubtree
		int h1 = height(root->left);
		int h2 = height(root->right);
		int opt1 = h1 + h2;
		int opt2 = diameter(root->left);
		int opt3 = diameter(root->right);

		return max((opt1, opt2), opt3);

	}
};