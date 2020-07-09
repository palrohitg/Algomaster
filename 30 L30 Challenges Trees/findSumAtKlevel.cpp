/*

	1. Each level sum find out at k level
	2. Build the tree

*/


#include<iostream>
using namespace std;


class node {
public :
	int data;
	node *left;
	node *right;

	node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

// Using no of childlren methods prorder tree
node *buildTree() {
	int data, child;
	cin >> data >> child;
	node *root = new node(data);
	if (child == 2) {
		root->left = buildTree();
		root->right = buildTree();
	}
	else if (child == 1) {
		root->left = buildTree();
	}
	else {
		root->left = NULL;
		root->right = NULL;
	}
	return root;
}


void inOrder(node *root) {
	if (root == NULL) {
		return;
	}
	inOrder(root->left);
	cout << root->data;
	inOrder(root->right);
}

int sumAtKLevel(node *root, int k) {
	// no node
	if (root == NULL) {
		return 0;
	}
	if (k == 0 && root != NULL) {
		return root->data;
	}
	return sumAtKLevel(root->left, k - 1) + sumAtKLevel(root->right, k - 1);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node *root = buildTree();
	int level; cin >> level;
	cout << sumAtKLevel(root, level);
	return 0;
}