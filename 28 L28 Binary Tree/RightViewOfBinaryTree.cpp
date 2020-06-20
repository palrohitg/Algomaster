#include<iostream>
#include<vector>
using namespace std;

class TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

	TreeNode * buildTree() {
		int d;
		cin >> d;

		// Base Case 
		if(d == -1) {
			return NULL;
		}

		// make the node and call on subtrees 
		node *root = new TreeNode(d);
		root->left = buildTree();
		root->right = buildTree();

		return root;
	}
};


class Solution {
	vector<int> v;
	max_level = -1;

	void helper(TreeNode *root, int level) {
		if(root == NULL) return;
		
		if(level > max_level) {
			max_level = level;
			v.push_back(root->val);
		}
		helper(root->right, level+1);
		helper(root->left, level+1);

	}

	vector<int> rightSideView(TreeNode *root) {
		helper(root, 0);
		return v;
	}
};


int main() {
	
	
	return 0;
}