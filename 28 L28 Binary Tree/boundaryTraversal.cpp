// What if the tree is skewed
/*
	Approach-->
	1. print the left boundary
	2. print the leaves nodes
		-> left and then right subtree
	3. print the right boundary
*/

#include<bits/stdc++.h>
using namespace std;


// You need to add
class TreeNode {
	int data;
	TreeNode* left;
	TreeNode* right;

public :

	TreeNode(int data) {
		data = data;
		left = NULL;
		right = NULL;
	}

	// build Tree
	TreeNode* buildTree() {

		int data; cin >> data;
		if (data == -1) return NULL;

		TreeNode*root = new TreeNode(data);
		root->left = buildTree();
		root->right = buildTree();
		return root;
	}

	// Inorder traversal
	void printTree(TreeNode* root) {
		if (root == NULL) return;

		cout << root->data << " ";
		printTree(root->left);
		printTree(root->right);
	}

};


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	TreeNode* root = buildTree();
	printTree(root);


	return 0;
}