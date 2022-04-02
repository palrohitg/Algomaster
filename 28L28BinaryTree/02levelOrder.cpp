#include<bits/stdc++.h>
using namespace std;

/*
	TC: O(N) no of nodes which traversing , push() and pop(), front()
	operations follows O(1) Time takes
	SC : O(N) Storing the Queue
*/

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


void levelOrderPrint(node *root) {

	if (root == NULL) {
		return;
	}
	// creating queue in cpp
	queue<node*> q;

	q.push(root);

	while (!q.empty()) {

		node *ele = q.front();
		q.pop();

		cout << ele->data << endl;

		if (ele->left) {
			q.push(ele->left);
		}

		if (ele->right) {
			q.push(ele->right);
		}
	}

	return;
}

int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	node *root = NULL;
	root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);

	levelOrderPrint(root);
	return 0;
}



