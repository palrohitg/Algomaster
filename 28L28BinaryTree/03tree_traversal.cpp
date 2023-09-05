#include<iostream>
using namespace std;

class node {

public :

	int data;
	node *left;
	node *right;

	// Constructor
	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
}; 

class Node {
	public:
		int data;
		Node *left;
		Node *right;

		Node(int data) {
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
}

/*
	Three Most Important Traversal of Tree :
	-PreOrder : Root, left, right 
	-PostOrder : left, right , root 
	-Inorders: left, root, right 

*/

void preOrder(node *root) {

	// root, left, right

	if (root == NULL) {
		return;
	}

	cout << root->data << endl;
	preOrder(root->left);
	preOrder(root->right);

	return;
}


void inOrder(node *root) {

	// left, root, right
	if (root == NULL) {
		return;
	}

	inOrder(root->left);
	cout << root->data << endl;
	inOrder(root->right);

	return;
}

void levelOrderPrint(node *root) {

	if (root == NULL) {
		return;
	}


}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	node *root = NULL;
	root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);

	preOrder(root);
	cout << endl;

	inOrder(root);
	// cout << root->data << endl;

	return 0;
}



