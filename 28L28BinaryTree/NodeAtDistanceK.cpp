	#include<iostream>
	#include<queue>
	using namespace std;
	// find out the node at a distance k in the binary tree 
	/*
		- Find all the nodes in the subtress of the target nodes 
		- We are going to findout the nodes at distances. 
		- Then find out the nodes which in the ancestors and their subtress using the d-k formula in the target nodes in LST then check in the 
		RST and vice -versa m
		input : 1 2 4 6 -1 -1 7 10 -1 -1 11 -1 -1 5 8 -1 -1 7 -1 -1 3 -1 -1 

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
	// This is our helper functions if I am below at any k level 
	void printKLevelSubtreeNode(node*root, int k) {
		if(root == NULL) {
			return;
		}

		if(k == 0) {
			cout << root->data << " ";
		}

		// Recursive call on the left and right subtree 
		printKLevelSubtreeNode(root->left, k-1);
		printKLevelSubtreeNode(root->right, k-1);
		return;

	}

	void bfsWithNewLine(node *root) {

		// base case 
		if(root == NULL) {
			return;
		}

		queue <node *> q;
		q.push(root);
		q.push(NULL);

		while(!q.empty()) {
			node *cur = q.front();

			// For new line character push NULL if the queue is not empty
			if(cur == NULL) {
				cout << endl;
				q.pop();
				// check queue is not empty then push the null 
				if(!q.empty()) {
					q.push(NULL);
				}
			}

			else {
			
				cout << cur->data << " ";
				q.pop();
				

				if(cur->left) {
					q.push(cur->left);
				}

				if(cur->right) {
					q.push(cur->right);
				}

			}	
		}
		
		return;	
	}

	/*node *targetNodeAddressNew(node *root, int target) {

		if(root == NULL) {
			return NULL;
		}

		if(root->data != target) {
			targetNodeAddress(root->left, target);
			targetNodeAddress(root->right, target);
		}
		
		node * targetAdddress = NULL;
		if(root->data == target) {
			targetNodeAddress = root;  //add return targetnodeaddress here   
	     	return targetNodeAddress;   
		}
		
		return NULL;
	}*/


	// It will print the ancestors and also the subtree from a given node at distance K 
	void printAtDistanceK(node*root, node*target, int k) {

		// base case 
		if 
	}

	int main() {
		node *root = buildTree();
	    bfsWithNewLine(root);
	    cout << endl;
		node *target = root->left->left;
		printKLevelSubtreeNode(target, 3);
		cout << endl;
		return 0;
	}



	#include<bits/stdc++.h>
using namespace std;

// A binary Tree node
struct Node{
	int data;
	Node* left;
	Node* right;
};

// Recursive function to print all the nodes at distance k in the
// tree (or subtree) rooted with given root. See */
void printkdistanceNodeDown(Node* root, int k){
	// Base Case
	if (root == NULL || k < 0) return;

	// If we reach a k distant node, print it
	if (k==0){
		cout<< root->data<<endl;
		return;
	}

	// Recur for left and right subtrees
	printkdistanceNodeDown(root->left, k-1);
	printkdistanceNodeDown(root->right, k-1);
}

// Prints all nodes at distance k from a given target node.
// The k distant nodes may be upward or downward. This function
// Returns distance of root from target node, it returns 
// -1 if target node is not present in tree rooted with root.
int printkdistanceNode(Node* root, Node* target , int k){
	// Base Case 1: If tree is empty, return -1
	if (root == NULL) return -1;

	// If target is same as root. Use the downward function
	// to print all nodes at distance k in subtree rooted with
	// target or root
	if (root == target){
		printkdistanceNodeDown(root, k);
		return 0;
	}

	// Recur for left subtree
	int dl = printkdistanceNode(root->left, target, k);

	// Check if target node was found in left subtree
	if (dl != -1){
		// If root is at distance k from target, print root
		// Note that dl is Distance of root's 
		// left child from target
		if (dl + 1 == k)
			cout<<root->data<<endl;

		// Else go to right subtree and print all k-dl-2 
		// distant nodes Note that the right child is 2 
		// edges away from left child
		else
			printkdistanceNodeDown(root->right, k-dl-2);

		// Add 1 to the distance and return value for parent calls
		return 1 + dl;
	}

	// MIRROR OF ABOVE CODE FOR RIGHT SUBTREE
	// Note that we reach here only when node was 
	// not found in left subtree
	int dr = printkdistanceNode(root->right, target, k);
	if (dr != -1){
		if (dr + 1 == k)
			cout<<root->data<<endl;
		else
			printkdistanceNodeDown(root->left, k-dr-2);
		return 1 + dr;
	}

	// If target was neither present in left
	// nor in right subtree
	return -1;
}

// A utility function to create a new binary tree node
Node* newNode(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Driver program to test above functions
int main(){
	// Let us construct the tree shown in above diagram
	Node* root = newNode(20);
	root->left = newNode(8);
	root->right = newNode(22);
	root->left->left = newNode(4);
	root->left->right = newNode(12);
	root->left->right->left = newNode(10);
	root->left->right->right = newNode(14);
	Node* target = root->left->right;
	printkdistanceNode(root, target, 2);
	return 0;
}
