/* 
height balanced binary tree 
h1-h2 <=1 for each node in the tree 
*/
// check if the binary tree is balanced or not postorder traversal 
// O(n) bottom up stragery follow to make pair for the height and bool value 
// Always have the height logn 

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


node * buildTree() {
	
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


class HBPair {
	
	public :
			
		int height;
		bool balance;

};


// We are returning the value P object of class HBPair
HBPair isHeightBalance(node *root) {

	HBPair p;

	if(root == NULL) {
		p.height = 0;
		p.balance = true;
		return p;
	}

	HBPair left = isHeightBalance(root->left);
	HBPair right = isHeightBalance(root->right);

	p.height = max(left.height, right.height) + 1;
	
	if((left.height - right.height <= 1 ) && left.balance && right.balance)  {
		p.balance = true;
	}
	else {
		p.balance = false;
	}

	return p;
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

int main() {
	
	node *root = buildTree();
	
	HBPair p = isHeightBalance(root); // directly we can call this isHeightBalance(root).balance
	if(p.balance) {
		cout << "tree is height balanced";
	}
	else {
		cout << "tree is not balanced";
	}	
	cout << endl;
	
	return 0;
}