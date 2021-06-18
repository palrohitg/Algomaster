#include<iostream>
using namespace std;

class node {

public :

	int data;
	node *left;
	node *right;

public :

	node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

// Build-Tree
node * buildTree() {

	int data;
	cin >> data;

	if (data == -1) {
		return NULL;
	}

	node *root = new node(data);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}

void printTree(node *root) {

	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	printTree(root->left);
	printTree(root->right);
	return;
}

int height(node *root) {

	if (root == NULL) {
		return 0;
	}

	int h1 = height(root->left);
	int h2 = height(root->right);

	return max(h1, h2) + 1;
}

// Calculate the diameter means the longest path exist in the tree

int diameter(node *root) {

	if (root == NULL) {
		return 0;
	}

	/*
	   1. Root main exits h1, h2, max return
	   2. left subtree exits
	   3. right subtree exits
	*/

	int h1 = height(root->left);
	int h2 = height(root->right);
	int opt1 = h1 + h2;

	int opt2 = diameter(root->left);
	int opt3 = diameter(root->right);

	return max(opt3, max(opt1, opt2));
}
int main() {

	node *root = buildTree();
	printTree(root);
	cout << endl;
	cout << "Height of tree :" << height(root) << endl;
	cout << "Diameter of the tree : " << diameter(root);

	return 0;
}