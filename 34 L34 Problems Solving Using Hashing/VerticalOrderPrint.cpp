// Given a binary tree print the vertical order
// Build the tree in the left,right manner and make a function call to print nodes vertical level.
/*
	Brute-force ->



	Approach->
	1. Create hashmap and store the horizontal distance and the hashmaps
	2. Print out the element of the hashmaps

	Time Complexity of hashing based solution can be considered as O(n) under the assumption that we have good hashing function
	that allows insertion and retrieval operations in O(1) time. In the above C++ implementation,
	map of STL is used. map in STL is typically implemented using a Self-Balancing Binary Search Tree where all
	operations take O(Logn) time. Therefore time complexity of the above implementation is O(nLogn).


*/
#include<bits/stdc++.h>
using namespace std;

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


// level wise bfs tree
node *buildTreeLevelWise() {

	int d; cin >> d;
	node *root = new node(d);
	queue<node *> q;
	q.push(root);

	while (!q.empty()) {
		node *f = q.front();
		q.pop();
		int c1, c2; cin >> c1 >> c2;

		if (c1 != -1) {
			f->left = new node(c1);
			q.push(f->left);
		}

		if (c2 != -1) {
			f->right = new node(c2);
			q.push(f->right);
		}
	}
	return root;
}


void getVerticalOrder(node *root, map<int, vector<int>> &m, int hd) {

	// Base Case
	if (root == NULL) return;

	m[hd].push_back(root->data);

	// call on the left and right subtree
	getVerticalOrder(root->left, m, hd - 1);
	getVerticalOrder(root->right, m, hd + 1);
	return;
}


// Calculate the horizontal distance and insert the element in the same time
void printVerticalOrder(node *root) {

	map<int, vector<int>> m;
	int hd = 0;
	getVerticalOrder(root, m, hd);

	// Print the hashtable
	for (auto p : m) {

		for (auto num : p.second) {
			cout << num << " ";
		}
		cout << endl;

	}
}

void printTree(node *root) {

	if (root == NULL) return;

	cout << root->data << " ";
	printTree(root->left);
	printTree(root->right);
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int level; cin >> level;

	node *root = buildTreeLevelWise();
	// printTree(root);

	printVerticalOrder(root);



	return 0;
}