/*
	Deletion of node must have two case 
	1. Leaf node 
	2. Internal node with one child 
	3. Internal node with two child
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


// Insert one node 
node *insertAtBST(node*root, int data) {

	// Base Case 
	if(root == NULL) {
		return new node(data);
	}

	// Recursive Case check for the data and update the Pointers 
	if(root->data >= data) { // insert at left subtree 
		root->left = insertAtBST(root->left, data);
	}
	else {
		root->right = insertAtBST(root->right, data);
	}
	return root;
}


// Inorder traversal for BST always going to be sorted  
void inOrder(node *root) {

	if(root == NULL) {
		return;
	}

	// Print the left subtree , root and right subtree 
	inOrder(root->left);
	cout << root->data << ",";
	inOrder(root->right);
}


// Build BST
node * buildBST() {
	int data;
	cin >> data; 
	
	node *root = NULL;
	while(data != -1) {
		root = insertAtBST(root, data);
		cin >> data;
	}

	return root;
}



// Search for a particulature node efficient searching logN
// Not neccessary in last return statment 
bool searchBST(node *root, int data) {

	if(root == NULL) {
		return false;
	}
	// If root is key elements 
	if(root->data == data){
		return true;
	}
	// check on the left subtree
	if(root->data > data) {
		return searchBST(root->left, data);
	}
	return searchBST(root->right, data);
}



// Return the address after deletion of required node 
node *deleteInBSTLeafNode(node *root, int key) {
	if(root == NULL || root->data == key) {
		return NULL;
	}

	if(root->data > key) {
		root->left = deleteInBSTLeafNode(root->left, key);
		return root;
	}
	else {
		root->right = deleteInBSTLeafNode(root->right, key);
		return root;
	}
}



// find the maximums elements in that tree 
node *maxNodeAddress(node*root) {

	node *maxNode = root; // Assume that 
	if(maxNode->right != NULL) { // always the max will in the right in the BST or if that is not the case means root is maximum
		maxNode =  maxNodeAddress(maxNode->right);
	}
	return maxNode;
}


// take the memory leak problems 
node *deleteInBST(node *root, int key) {
	if(root == NULL ) {
		return NULL;
	}

	if(key == root->data) {
		// We have 3 Case. leaf node , 1 children and 2 children
		/*
			1. if leaf then return NULL simply 
			2. if 1 children then store the left and may be right children in the temp varible 
		*/
		// 1. leaf condition if left and right child both NULL right ?
		if(root->left == NULL && root->right == NULL) {
			root = NULL; // not the correct ways bcoz the node is not actually delete also called the memory leak problems 
			return root;
		}

		// 2. 2 Case 
		if(root->left != NULL) { // left child hain 
			node *temp = root->left;
			root = temp;
			return root;
		}
		else if(root->right != NULL){ // right child hain 
			node *temp = root->right;
			root = temp;
			return root;
		}
		// Final case two children then apne pass two choice find the max in left subtree | min in right subtree and make it as root
		// Apne case main find the max in left 
		// First check if two child means both are not NULL
		if(root->left != NULL && root->right != NULL) { // apka two children right
			node *max_address = maxNodeAddress(root->left);
			root = max_address;
			return root;
		}

	}

	if(root->data > key) {
		root->left = deleteInBST(root->left, key);
		return root;
	}
	else {
		root->right = deleteInBST(root->right, key);
		return root;
	}
}


// Check if A tree is BST or Not
bool checkBST(node *root) {

	 

}


int main() {
	
	node *root = buildBST();
	// cout << root->data;
	inOrder(root);
	cout << endl;
	// if(searchBST(root, 31)) {
	// 	cout << "The element is present" << endl;
	// }
	// else {
	// 	cout << "The elment is not present" << endl;
	// }
	// node *newNode = deleteInBST(root, 0);
	// inOrder(newNode);
	// cout << maxNodeAddress(root)->data;
	node * new_address = deleteInBST(root, 5);
	inOrder(new_address);

	return 0;
}