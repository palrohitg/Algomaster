// find out if the tree is height balanced or not difference between the subtree height is not going to more that one
// use the postOrder and bottom up approaches to solve this kind of problems
//using O(N)
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
#include<iostream>
#include<string>
using namespace std;

class node {
public:
	string data;
	node *left;
	node *right;
	node(string data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};


node *buildTree() {
	string 	str; cin >> str;

	// Base case hit on the NULL values 
	if (str == "false") {
		return NULL;
	}
	if (str == "true") {
		string data; cin >> data;
		node *root = new node(data);
		root->left = buildTree();
		root->right = buildTree();
		return root;
	}
	node *root = new node(str);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}


class HBPair {
public:
	int height;
	bool balance;
};



HBPair isBalanced(node *root) {
	HBPair p;

	if (root == NULL) {
		p.height = 0;
		p.balance = true;
		return p;
	}
	HBPair left = isBalanced(root->left);
	HBPair right = isBalanced(root->right);

	// Compute the height of the cur node
	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 && left.balance && right.balance) {
		p.balance = true;
	}
	else {
		p.balance = false;
	}
	return p;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// cout << "working";
	node *root = buildTree();
	if (isBalanced(root).balance) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}