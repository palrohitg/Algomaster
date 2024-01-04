#include<bits/stdc++.h>
using namespace std;


/*
	if else if else if ladder main only one condition will be execute be carefully about that
*/

class Node {
public:
	int data;
	Node *left;
	Node * right;

	Node(int d) {
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};


// Right View of Binary Tree 
// right view kaise chal raha hai when we are looking h
void rightView(Node *root) {

	if (root == NULL) return;

	queue<Node*> q;
	q.push(root);

	while (!q.empty()) {
		int sz = q.size();
		int i = 0;

		while (i++ < sz) {
			Node *cur = q.front();
			q.pop();

			if (i == sz) {
				cout << cur->data << " ";
			}
			if (cur->left != NULL) {
				q.push(cur->left);
			}
			if (cur->right != NULL) {
				q.push(cur->right);
			}
		}
	}

}




// Inorder Traversal
void inOrderTraveral(Node *root) {
	if (root == NULL) return;

	inOrderTraveral(root->left);
	cout << root->data << endl;
	inOrderTraveral(root->right);
	return;
}


int main(int argc, char const *argv[]) {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	/*
			1
		2      3
			4

	Inorder -> left root right
	2 1 4 3
	*/

	// cout << "1" << endl;

	Node *root = NULL;
	root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->right->left = new Node(4);

	rightView(root);

	return 0;
}






