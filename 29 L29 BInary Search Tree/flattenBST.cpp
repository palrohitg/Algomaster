// Given a BST make a linked list with sorted fashion 
#include<iostream>
using namespace std;


class node {

public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		left = NULL;	
		right = NULL;
	}
};

node *insertInBST(node*root, int data) {
	if(root == NULL) {
		return new node(data); 
	}	

	if(root->data >= data) { // insert in the left subtree
		root->left = insertInBST(root->left, data);
		return root;
	}
	else {
		root->right = insertInBST(root->right, data);
		return root;
	}
}


node *buildBST() {
	int data;
	cin >> data;
	node *root = NULL;
	while(data != -1) {
		root = insertInBST(root, data);
		cin >> data;
	}
	return root;
}


void inOrder(node*root) {
	
	if(root == NULL) {
		return;
	}
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
	return;
}


/*
	1. leaf node 
	2. root only with left child 
	3. root only with right child 
	4. root with both right and left child
*/
node *flattenBST(node *root) {
	
	if(root == NULL) {
		return NULL;
	}
	if(root->left == NULL && root->right == NULL) {
		return root;
	}
	if(root->left != NULL && root->right == NULL) {
		node * head = flattenBST(root->left);
		head->right = root;
		return head;
	}
	if(root->right != NULL && root->left == NULL) {
		node * head = flattenBST(root->right);
		root->right = head;
		return root;
	}
	if(root->left != NULL && root->right == NULL) {
		node *left_head = flattenBST(root->left);
		node *right_head = flattenBST(root->right);
		left_head->right = root;
		root->right = right_head;
		return left_head;
	}
}


int main() {
	node *root = buildBST();
	cout << "Inorder traversal of BST : ";
	inOrder(root);
	cout << endl;
	node * new_root = flattenBST(root);
	cout << "Inorder traversal of skew tree : ";
	inOrder(new_root); // tree will be skew to one end
	cout << endl;
	return 0;
}