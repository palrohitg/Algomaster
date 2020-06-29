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