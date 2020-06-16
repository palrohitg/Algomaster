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

class HBPair {

	public : 	
		int height;
		bool balance;
};

// Given an arrays build tree using that arrays such that tree is balanced 

node * buildTreeUsingArray(int arr[], int start, int end) {
	// Base case 
	if(start > end) {
		return NULL;
	}
	
	int mid = (start + end) / 2;
	node *root = new node(arr[mid]);

		// call on the subchildren 
	root->left = buildTreeUsingArray(arr, start, mid - 1);
	root->right = buildTreeUsingArray(arr, mid + 1, end);
	
	return root;
}


// Finally check if the above build tree is height balancd or not 
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


int main() {
	
	int arr[] = {10, 20, 30 ,40 ,50 ,60, 70};
	int size = sizeof(arr)/sizeof(int);
	
	node *root = buildTreeUsingArray(arr, 0, size-1);
	
	if(isHeightBalance(root).balance) {
		cout << "the above made tree is balanced " << endl;
	}
	else {
		cout << "the above made tree is not balanced " << endl; 
	}
	return 0;
}