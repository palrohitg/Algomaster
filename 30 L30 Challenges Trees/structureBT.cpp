// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

// String will resolved this issue bcoz it can take any value might be integer and string 
// height and no of nodes 
#include<iostream>
using namespace std;

class node {
	public :
		string data;
		node *left;
		node *right;

		node(string data) {
			this->data;
			left = NULL;
			right = NULL;
		}
};



int height(node *root) {
	if(root == NULL) {
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	return max(h1, h2)+1;
}


// Recursion check only the smallest problems then move furthers only 
node *buildTree() {
	string str;
	cin >> str;
	// Base case 
	if(str == "false") {
		return NULL;
	}

	if(str == "true") {
		string data;
		cin >> data;
		node *root = new node(data);
		root->left = buildTree();
		root->right = buildTree();
		return root;
	}
	
	// single node case 
	node *root = new node(str);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}


int noOfNode(node *root, int k) {
	if(root == NULL || k == 0) {
		return 0;
	}
	if(k == 1) {
		return 1;
	}
	int n1 = noOfNode(root->left, k-1);
	int n2 = noOfNode(root->right, k-1);
	return n1+n2;
}


bool checkStructure(node *root1, node *root2, int h1, int h2) {
	if(root1 == NULL || root2 == NULL) {
		return false;
	}
		
	return false;
}



int main() {
	node *root1 = buildTree();
	// node *root2 = buildTree();
	// int h1 = height(root1);
	// int h2 = height(root2);
	// cout << checkStructure(root1, root2);
	cout << noOfNode(root1, 2);
	return 0;
}