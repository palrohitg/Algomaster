/*
	Print level Order then we are using the BFS to implement it and queue is additional DS to reduce to O(N)
*/

// height of the tree and make two function to print the nodes from left to right and right to left
#include<iostream>
#include<string>
#include<queue>
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
	string str; cin >> str;
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


void inOrder(node *root) {
	if (root == NULL) {
		return;
	}
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
	return;
}


// // modication to acoomdate the new characters
// void zigZagPrint(node *root) {
// 	queue <node *> q;
// 	q.push(root);
// 	while (!q.empty()) {
// 		node *cur = q.front();
// 		cout << cur->data << " ";
// 		// 	cout << data << " ";
// 		q.pop();
// 		if (cur->left) {
// 			q.push(cur->left);
// 		}
// 		if (cur->right) {
// 			q.push(cur->right);
// 		}
// 	}

// }

int height(node *root) {
	if (root == NULL) {
		return 0;
	}
	int h1 = height(root->right);
	int h2 = height(root->left);
	return max(h1, h2) + 1;
}

void printAtlevel(node *root, int k , int result) {
	if (k == 0 && root == NULL) {
		return;
	}
	if (k == 1 && root != NULL) {
		cout << root->data <<  " ";
		return;
	}
	// odd level
	if (result % 2 != 0) {
		printAtlevel(root->left, k - 1, result);
		printAtlevel(root->right, k - 1, result);
	}
	// even level
	else {
		printAtlevel(root->right, k - 1, result);
		printAtlevel(root->left, k - 1, result);
	}
	return;
}


void zigZagPrint(node *root, int height) {
	for (int i = 1; i <= height; i++) {
		printAtlevel(root, i, i);
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node *root = buildTree();
	// inOrder(root);
	int h = height(root);
	cout << h;
	zigZagPrint(root, h);

	// cout << height(root);
	// cout << root->data;
	return 0;
}