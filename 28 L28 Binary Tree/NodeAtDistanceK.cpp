#include<iostream>
using namespace std;
// find out the node at a distance k in the binary tree 
/*
	- Find all the nodes in the subtress of the target nodes 
	- We are going to findout the nodes at distances. 
	- Then find out the nodes which in the ancestors and their subtress using the d-k formula in the target nodes in LST then check in the 
	RST and vice -versa m

*/

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


node *buildTree() {
	
	int data;
	cin >> data;

	if(data == -1) {
		return NULL;
	}

	node *root = new node(data);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}


void printTree(node *root) {

	if(root == NULL) {
		return;
	}

	cout << root->data << " ";
	printTree(root->left);
	printTree(root->right);

	return;
}

// Find the address of a particular
node *targetNodeAddress(node *root, int target) {

	if(root != NULL) {
		if(root->data == target) {
			return root;
		}
		else {
			// check in the left subtree and right subtree 
			node *foundNode = targetNodeAddress(root->left, target);
			if(foundNode == NULL) {
				foundNode = targetNodeAddress(root->right, target);
			}
			return foundNode;
		}
	}
	else {
		return NULL;
	}
}

// print all the nodes mentions in the subtree at the below distances 
void printKLevelSubtreeNode(node*root, int k) {
	if(k == 0) {
		return;
	}

	if(k == 1) {
		cout << root->data << " ";
	}

	// Recursive call on the left and right subtree 
	printKLevelSubtreeNode(root->left, k-1);
	printKLevelSubtreeNode(root->right, k-1);
	return;

}

int main() {
	node *root = buildTree();
	printTree(root);
	int target;
	cin >> target;
	node *targetNodeAddress = targetNodeAddress(root, target);
	int k;
	printKLevelSubtreeNode(targetNodeAddress, )
	return 0;
}