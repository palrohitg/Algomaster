// Binary tree implementations

// Construct one BT 

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


void insertNode(node*&root, int data) {
	// first node 
	if(root == NULL) {
		root = new node(data);
		return;
	}

	// check the left node 
	if(root->left == NULL) {
		root->left = new node(data);
		return;
	}
	// check the right parts
	if(root->right == NULL) {
		root->right = new node(data);
		return;
	}

	if(root->left != NULL) {
		node * temp = root->left;
		if(temp->left == NULL) {
			temp->left = new node(data)
		}
		return;
	}

	if(root->left != NULL) {

	}

}

// Traverse the tree 
void printTree(node*root) {
	// no node then return 
	if(root == NULL) {
		return;
	}
	// some node is presents
	node *temp = root;

	cout << temp->data << "->";
	if(temp->left != NULL) {
		cout << temp->left->data << "->";
	}
	if(temp->right != NULL) {
		cout << temp->right->data << "->";
	}
}


int main() {
	node * root = NULL;
	insertNode(root, 10);
	insertNode(root, 20);
	insertNode(root, 30);
	printTree(root);
	return 0;
}