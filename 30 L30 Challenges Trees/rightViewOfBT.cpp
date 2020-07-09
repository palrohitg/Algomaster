// Print the right view of the binary tree
// Element only visible when we see from the right sides
// Approach create a max_level and then print the node from root->right->left
// input level order

#include<iostream>
#include<queue>
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


// root left right
void preOrder(node *root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}



void rightViewTraversal(node *root, int cur_level) {
	static int max_level = -1;
	// Base case
	if (root == NULL) {
		return;
	}

	// Always return always in the base case
	if (cur_level > max_level) {
		max_level = cur_level;
		cout << root->data << " ";
	}

	// Go right first
	rightViewTraversal(root->right, cur_level + 1);
	rightViewTraversal(root->left, cur_level + 1);

}


void leftViewTraversal(node *root, int cur_level) {
	static int max_level = -1;
	// Base case
	if (root == NULL) {
		return;
	}

	// Always return always in the base case
	if (cur_level > max_level) {
		max_level = cur_level;
		cout << root->data << " ";
	}

	// Go right first
	leftViewTraversal(root->left, cur_level + 1);
	leftViewTraversal(root->right, cur_level + 1);

}



// Queue contains the address of nodes only
node *buildTreeUsingLevelOrder(node*root) {
	int data; cin >> data;
	queue <node *> q;
	root = new node(data);
	q.push(root);
	while (!q.empty()) {
		node *f = q.front();
		q.pop();
		int l, r;
		cin >> l >> r;
		if (l != -1) {
			f->left = new node(l); // new node create
			q.push(f->left); // because queue has only pointers
		}
		if ( r != -1) {
			f->right = new node(r); // new node create
			q.push(f->right);
		}
	}
	return root;
}



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node *root = NULL;
	root = buildTreeUsingLevelOrder(root);
	// preOrder(root);
	leftViewTraversal(root, 0);
	return 0;
}