#include<bits/stdc++.h>
using namespace std;

/*
- Insert root node in queue
- Calculate the current size of the queue
- if i++ < size means, if i == 1, this is the first node of that left so
- print this node


TC : O(N)
SC : O(N)

*/
class node {

public:
	int data;
	node *left;
	node *right;

	node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};


// Iterative Ways to implement
// Left view of the binary tree code with complexity
void leftView(node *root) {

	if (root == NULL) {
		return;
	}

	queue<node*> q;
	// push the root node in the queue
	q.push(root);

	// while the queue is not empty
	while (!q.empty()) {
		int sz = q.size();
		int i = 0;

		while (i++ < sz) {
			// pick up the front elements from queue
			node *t = q.front();
			q.pop();

			if (i == 1) {
				cout << t->data << " ";
			}

			// some elements present in left and right
			if (t->left) {
				q.push(t->left);
			}
			if (t->right) {
				q.push(t->right);
			}
		}
	}

	return;

}



int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif



	node *root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->right->left = new node(4);

	cout << "Left View of binary Tree" << endl;
	leftView(root);

	return 0;
}