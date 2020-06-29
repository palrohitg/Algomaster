#include<iostream>
#include<string>
using namespace std;


class node {

public :
	string data;
	node *left;
	node *right;

	node(string data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

void printTree(node *root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	printTree(root->left);
	printTree(root->right);
}

node *buildTree() {
	string str; cin >> str;
	if (str == "false") {
		return NULL;
	}
	if (str == "true") {
		string str; cin >> str;
		node *root = new node(str);
		root->left = buildTree();
		root->right = buildTree();
		return root;
	}
	node *root = new node(str);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}


int noOfNodeAtLevel(node *root, int level) {
	if (root == NULL ||  level == 0) {
		return 0;
	}
	if (level == 1) {
		return 1;
	}
	int leftNode = noOfNodeAtLevel(root->left, level - 1);
	int rightNode = noOfNodeAtLevel(root->right, level - 1);
	return leftNode + rightNode;

}


int heightOfTree(node *root) {
	if (root == NULL) {
		return 0;
	}
	int leftHeight = heightOfTree(root->left);
	int rightHeight = heightOfTree(root->right);
	return max(leftHeight, rightHeight) + 1;
}


/*
	1. Edge case if both are NULL then alos the NULL
	2. build the tree and the user.
*/

// bool checkIdentical(node *root1, node *root2, int h1, int h2) {
// 	if (root1 == NULL and root2 == NULL) {
// 		return true;
// 	}
// 	// if single node in both tree
// 	if (root1->left == NULL && root1->right == NULL && root2->left == NULL && root2->right == NULL) {
// 		return true;
// 	}
// 	if (h1 != h2) {
// 		return false;
// 	}
// 	for (int i = 2; i <= max(h1, h2); i++) {
// 		int node1 = noOfNodeAtLevel(root1->left, i);
// 		int node2 = noOfNodeAtLevel(root1->right, i);
// 		if (node1 == node2) {
// 			return true;
// 		}
// 	}
// 	return false;
// }

// each node compare time complexity turn out to be O(n)
bool checkIdentical(node *root1, node *root2) {
	if (root1 == NULL and root2 == NULL) {
		return true;
	}
	if (root1 == NULL || root2 == NULL) {
		return false;
	}
	return checkIdentical(root1->left, root2->left) && checkIdentical(root1->right, root2->right);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node *root1 = buildTree();
	node *root2 = buildTree();
	if (checkIdentical(root1, root2)) {
		cout << "true";
	}
	else {
		cout << "false";
	}

	return 0;
}