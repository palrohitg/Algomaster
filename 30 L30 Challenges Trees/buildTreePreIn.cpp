/*
	Remeber in all case one Unique tree is gernerated

*/

#include<iostream>
using namespace std;

class node {
public:
	int data;
	node *left;
	node *right;

	node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

// Return the key index value binary search functions
int search(int arr[], int key, int s, int e) {
	int index = -1;
	for (int i = s; i <= e; i++) {
		if (arr[i] ==  key) {
			index = i;
			break;
		}
	}
	return index;
}


// Build the tree using PreOrder and InOrder traversal
node *buildTree(node *root, int pre[], int in[], int s, int e) {
	if (s > e) {
		return NULL;
	}
	static int count = 0;
	root = new node(pre[count]);
	int index = search(in, pre[count], s, e);
	count++;
	root->left = buildTree(root->left, pre, in, s, index - 1);
	root->right = buildTree(root->right, pre, in, index + 1, e);
	return root;
}


// print the tree using some variation of the preOrder traversal
void printTree(node *root) {
	// Base case
	if (root == NULL) {
		return;
	}
	if (root->left != NULL && root->right != NULL) {
		cout << root->left->data << " => " << root->data << " <= " << root->right->data << endl;
	}
	if (root->left != NULL && root->right == NULL) {
		cout << root->left->data << " => " << root->data << " <= " << "END" << endl;
	}
	if (root->right != NULL && root->left == NULL) {
		cout << "END" << " => " << root->data << " <= " << root->right->data << endl;
	}
	if (root->left == NULL && root->right == NULL) {
		cout << "END" << " => " << root->data << " <= " << "END" << endl;
	}
	printTree(root->left);
	printTree(root->right);
}


int main() {
	int N; cin >> N;
	int pre[N];
	for (int i = 0; i < N; i++) {
		cin >> pre[i];
	}
	int M; cin >> M;
	int in[M];
	for (int i = 0; i < M; ++i)
	{
		cin >> in[i];
	}
	node *root = NULL;
	root = buildTree(root, pre, in, 0, 2);
	printTree(root);
	return 0;
}