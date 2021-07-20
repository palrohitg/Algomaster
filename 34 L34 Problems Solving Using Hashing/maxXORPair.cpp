/*

	Find a pair that will leads to max XOR value in arrays
	https://ide.codingblocks.com/s/354830 simple
	https://ide.codingblocks.com/s/326812 optimal approach

*/
#include<bits/stdc++.h>
using namespace std;

// Trie node
class node {
public:
	node* left;
	node* right;
};


// Trie class and root elements
class Trie {

	node* root;

public :
	Trie() {
		root = new node();
	}


	// insertion in the trie
	void insert(int value) {

		node* temp = root;

		for (int i = 31; i >= 0; i--) {

			// find the MSB right shift by ith postions and & the bit
			int bit = (value >> i) & 1;

			if (bit == 0) {
				if (temp->left == NULL) {
					temp->left = new node();
				}
				temp = temp->left;
			}
			else {
				if (temp->right == NULL) {
					temp->right = new node();
				}
				temp = temp->right;
			}
		}
	}

	// XOR helper to find the xor with best values
	// Maximum XOR i can get in constant time
	int XOR_helper(int value) {

		node* temp = root;
		int curNum = 0;

		for (int i = 31; i >= 0; i--) {

			int bit = (value >> i) & 1;

			if (bit == 0) {
				// find the complementary bits here if found then make your answers
				if (temp->right != NULL) {
					curNum += (1 << i);
					temp = temp->right;
				}
				else {
					temp = temp->left;
				}

			}
			else {
				if (temp->left != NULL) {
					curNum += (1 << i); // including the magnitude values here
					temp = temp->left;
				}
				else {
					temp = temp->right;
				}

			}
		}
		// cout << curNum << endl;

		return curNum;
	}

	void maxXOR(int arr[], int n) {

		int res = 0;
		// Just Iterate over the arrays and return the maxXOR in linear times
		for (int i = 0; i < n; i++) {

			// insert the trie;
			insert(arr[i]);

			int current = XOR_helper(arr[i]);
			if (current > res) {
				res = current;
			}
		}

		cout << res;
		return;
	}


};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Trie t;
	int n; cin >> n;
	int arr[100000];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	t.maxXOR(arr, n);

	return 0;
}



