/*# Binary Tree Traversal 

 BFS : Breadth first search O(n) how ?
 input : 10 20 40 -1 -1 -1 30 50 -1 -1 -1 
 new line character each line
 
 BFS with line break : https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/565/week-2-november-8th-november-14th/3529/
 
*/

#include<iostream>
#include<queue>
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

int heightTree(node *root) {

	// base case  
	if(root == NULL) {
		return 0;
	}

	// left subtree and right subtree height
	int ls = heightTree (root->left);
	int rs = heightTree(root->right);
	return (max(ls, rs) + 1);
}


node * buildTree() {
	int d;
	cin >> d;

	// Base Case 
	if(d == -1) {
		return NULL;
	}

	// make the node and call on subtrees 
	node *root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}


void printTree(node*root) {
	if(root == NULL) {
		return;
	}

	cout  << root->data << endl;

	printTree(root->left);
	printTree(root->right);
}

// Breadth first search
void bfs(node *root) {

	queue <node *> q;
	q.push(root);

	while(!q.empty()) {
		node *cur = q.front();
		cout << cur->data << " ";
		q.pop();

		// if Not Null 
		if(cur->left) { 
			q.push(cur->left);
	    }

	    // if Not Null 
	    if(cur->right) {
			q.push(cur->right);
		} 
	}
	
	return;	
}

// BFS with next line character
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


// longest path between the two endpoints in the tree 
int diameter(node*root) {

	if(root == NULL) {
		return 0;
	}

	int h1 = heightTree(root->left);
	int h2 = heightTree(root->right);
	int op1 = h1 + h2;
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}


int main() {
	
	node *root = buildTree();
	bfsWithNewLine(root);
	cout << diameter(root);
	return 0;
}

