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
		if (target == NULL or subRoot == NULL) {
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


class Solution {
public:
	bool isSubtree(TreeNode* s, TreeNode* t) {
		if (!s) return false;
		return isSameTree(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
	}

	//Leetcode 100
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p == NULL && q == NULL)
			return true;
		if (p == NULL || q == NULL)
			return false;
		if (p->val == q->val)
			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
		else
			return false;
	}

};
// identical take the challenge same here 

int identicalTrees(node* a, node* b)
{
    /*1. both empty */
    if (a == NULL && b == NULL)
        return 1;
 
    /* 2. both non-empty -> compare them */
    if (a != NULL && b != NULL) {
        return (a->data == b->data
                && identicalTrees(a->left, b->left)
                && identicalTrees(a->right, b->right));
    }
 
    /* 3. one empty, one not -> false */
    return 0;
}