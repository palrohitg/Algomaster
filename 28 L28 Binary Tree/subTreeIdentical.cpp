class Solution {
public:

	TreeNode* helper(TreeNode* root, TreeNode* subRoot) {
		// root points to null
		if (root == NULL) {
			return root;
		}
		if (root->val == subRoot->val) {
			return root;
		}

		TreeNode* leftAns = helper(root->left, subRoot);
		if (leftAns) return leftAns;
		TreeNode* rightAns = helper(root->right, subRoot);
		if (rightAns) return rightAns;
		return NULL;
	}


	bool checkSubtree(TreeNode* target, TreeNode* subRoot) {

		if (target == NULL and subRoot == NULL) {
			return true;
		}
		if (target == NULL) {
			return false;
		}
		if (subRoot == NULL) {
			return false;
		}

		if (target->val == subRoot->val) {
			bool left = checkSubtree(target->left, subRoot->left);
			bool right = checkSubtree(target->right, subRoot->right);
			if (left and right) {
				return true;
			}
		}

		return false;
	}

	bool isSubtree(TreeNode* root, TreeNode* subRoot) {
		TreeNode* target = helper(root, subRoot);
		return checkSubtree(target, subRoot);
	}
};