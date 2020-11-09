// Binary tree implementations
/*
	1. Construct a BT using Recursions
	2. Traversal Pre-Order, In-Order, Post-Order, level-order
	3. Height of the Tree
	4. Level Order Traversal
	5. BFS breadth first search
	input = 10 20 -1 40 -1 -1 30 -1 -1
*/


// Construct one BT

#include<iostream>
#include<queue>
using namespace std;

// construct the datatype of Tree
class node {

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
	if (root == NULL) {
		root = new node(data);
		return;
	}

	// check the left node
	if (root->left == NULL) {
		root->left = new node(data);
		return;
	}
	// check the right parts
	if (root->right == NULL) {
		root->right = new node(data);
		return;
	}

	if (root->left != NULL) {
		node * temp = root->left;
		if (temp->left == NULL) {
			temp->left = new node(data);
		}
		return;
	}

	if (root->left != NULL) {
		node * temp = root->right;
		if (temp->right == NULL) {
			temp->left = new node(data);
		}
		return;
	}

}

// Insert using recursions
/*
void insertNodeUsingRecursion(node *&root, int data) {
	if (root == NULL) {
		root = new node(data);
		return;
	}

	// insert into the left subtree
	insertRec(root->left, data);
	// insert into the right subtree
	insertRec(root->right, data);
}
*/

// Traverse the tree pre-order traversal
void printTree(node*root) {
	// no node then return
	if (root == NULL) {
		return;
	}

	cout << root->data << "-->";
	// print the left subtree
	printTree(root->left);
	// print the right subtree
	printTree(root->right);
}


// Inorder traversal
void inOrder(node *root) {
	if (root == NULL) {
		return;
	}

	// print the left subtree
	inOrder(root->left);

	cout << root->data << "-->";

	// print the right subtree
	inOrder(root->right);
}


// Post order traversal
void postOrder(node *root) {
	if (root == NULL) {
		return;
	}

	// left subtree
	postOrder(root->left);

	// Right subtree
	postOrder(root->right);

	// root node
	cout << root->data << "-->";
}

// Build tree
node *buildTree() {
	int d;
	cin >> d;

	// Base Case
	if (d == -1) {
		return NULL;
	}

	// make the node and call on subtrees
	node *root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}


// Height of the tree
int heightTree(node *root) {

	// base case
	if (root == NULL) {
		return 0;
	}

	// left subtree and right subtree height
	int ls = heightTree (root->left);
	int rs = heightTree(root->right);
	return max(ls, rs) + 1;
}

// Print all the node of kth level
void KthLevelPrint(node*root, int k) {

	if (root == NULL) {
		return;
	}

	if (k == 1) {
		cout << root->data << " ";
	}
	KthLevelPrint(root->left, k - 1);
	KthLevelPrint(root->right, k - 1);
	return;
}

// Print all the levels
void printAllLevel(node*root, int height) {
	for (int k = 1; k <= height; k++) {
		KthLevelPrint(root, k);
	}
}


// Breadth first search using the queue
void bfs(node *root) {
	/*
		Create the empty queue
		pop the elements and print the printout the and push the childrens
	*/
	if (root == NULL) {
		return;
	}

	// Actually it contain the address of the root->data bcoz we need to put the elements children
	queue<node *> q;
	q.push(root);

	while (!q.empty()) {
		node *f = q.front();
		cout << f->data;
		q.pop();

		if (f->left) {
			q.push(f->left);
		}
		if (f->right) {
			q.push(f->right);
		}
	}
	return;
}


int main() {


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* root;
	root->data = 10;
	root->left->data = 20;
	root->right->data = 30;
	root->left->left->data = 40;
	root->right->left->data = 50;

	inOrder(root);

	cout << root->data << endl;












	/*
	insertRec(root, 10);
	insertRec(root, 20);
	insertRec(root, 30);
	insertRec(root, 40);
	printTree(root);

	node * root = buildTree();
	cout << endl;
	printTree(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	int height = heightTree(root);

	// KthLevelPrint(root, 3);
	// printAllLevel(root, height);
	bfs(root);
	*/
	return 0;
}
