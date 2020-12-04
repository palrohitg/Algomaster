#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str = "34 21 23 23";

	// creating vector of strings from input
	// after spiliting the strings on the inputs
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str;)
		ip.push_back(str);

	for (auto str : ip)
		cout << str;

	return 0;
}

vector<int> ans;

void printLeftBoudary(Node *root) {

	if (root == NULL) return;

	// If left main node hai
	if (root->left) {
		ans.push_back(root->data);
		printLeftBoudary(root->left);
	}
	if (root->right) {
		ans.push_back(root->data);
		printLeftBoudary(root->right);
	}
	return;
}


void printLeavesNode(Node *root) {

	if (root == NULL) return;

	printLeftBoudary(root->left);

	// if the last node is leaves left and right child of that nodes is null
	if (!(root->left) and !(root->right)) {
		ans.push_back(root->data);
	}
	printLeftBoudary(root->right);
	return;
}

void printRightBoundary(Node *root) {

	if (root == NULL) return;

	if (root->right) {

		// to correct bottom up order of traversal
		printRightBoundary(root->right);
		ans.push_back(root->data);

	}
	if (root->left) {
		printRightBoundary(root->left);
		ans.push_back(root->data);
	}
	return;
}

vector<int> printBoundary(Node *root) {

	if (root == NULL) ans;

	ans.push_back(root->data);

	// Print left boundary
	printLeftBoudary(root->left);

	// print leave node
	printLeavesNode(root->left);
	printLeavesNode(root->right);

	// print right nodes
	printRightBoundary(root->right);
	return ans;
}