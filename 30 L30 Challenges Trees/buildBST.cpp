/*
	Build Balanced BST balance BST are those difference of the subtree height node <= 1 
	Input : 
	1
	7
	1 2 3 4 5 6 7
	Output : 
	PreOrder traversal 
	4 2 1 3 6 5 7

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


node *buildBalanceBST(int arr[], int s, int e) {
	// Base case 
	if(s>e) {
		return NULL;
	}
	int mid = (s+e)/2;
	node *root = new node(arr[mid]);
	root->left = buildBalanceBST(arr, s, mid-1);
	root->right = buildBalanceBST(arr, mid+1, e);
	return root;
}


// Preorder Traversal root left right 
void preOrder(node *root) {
	if(root == NULL) {
		return;
	}
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		int arr[1000];
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		node *root = buildBalanceBST(arr, 0, n-1);
		preOrder(root);
		cout << endl;
	}

	return 0;
}