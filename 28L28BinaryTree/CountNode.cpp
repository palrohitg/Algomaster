/*
	Count of the node and sum of the tree elements 
*/

#include<iostream>
using namespace std;


class node{

	public :
			int data;
			node *left;
			node *right;

			//Constructor 
			node(int d) {
				data = d;
				left = NULL;
				right = NULL;
			}

};

// CP build tree 
node *buildTree() {
	int d;
	cin >> d;

	// Base Case 
	if(d == -1) {
		return NULL;
	}

	// make the node and call on subtrees 
	node *root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}

// Count the number of nodes 
int countNodes(node*root) {
	// Base Case
	if(root == NULL) {
		return 0;
	}

	return 1 + countNodes(root->left) + countNodes(root->right);
}

// Works for the zeroes also
int sumNodes(node *root) {
	if(root == NULL) {
		return 0;
	}
	return root->data + sumNodes(root->left) + sumNodes(root->right);
}
int main() {
	node *root = buildTree();
	cout << " no. of nodes : " << countNodes(root);
	cout << endl;
	cout <<" sum of all the nodes : " <<  sumNodes(root);
	return 0;
}