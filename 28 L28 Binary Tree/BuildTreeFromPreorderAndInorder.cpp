// Given two traversal job is build the Binary tree 
// Remember you can generate only 1 unique tree if two traversal are given two you pre + in , post + in 

// Time Complexity ? 
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


node *buildTreeFromTraversal(int pre[], int in[], int s, int e) {
	cout << "testing" << endl;
	int static i = 0;

	if(s > e) {
		return NULL;
	}	

	node *root = new node(pre[i]);

	// Search the index for the inorder arrays 
	int index = -1;
	for(int j=s; j<=e; j++) {
		if(in[j] == pre[i]) {
			index = j;
			break;
		}
	}

	i++;
	
	root->left = buildTreeFromTraversal(pre, in, s, index-1);
	root->right = buildTreeFromTraversal(pre, in, index+1, e);
	
	return root;
}	



// NOTE to print the newline character i need to used the bfs and newline character code
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
	
	int pre[] = {1, 2, 3};
	int in[] = {2, 1, 3};
	int size = sizeof(pre)/sizeof(int);
	node *root = buildTreeFromTraversal(pre, in, 0, size - 1);
	printTree(root);

	return 0;
}