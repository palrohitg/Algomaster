// Print the right view of the binary tree using the level order traversal 
// note two traversal are possible one is Depth wise and Breadth wise 

#include<iostream>
#include<queue>
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


// Use to build the tree recursively 
node *buildTree() {
	int data;
	cin >> data;

	if(data == -1) {
		return NULL;
	}

	node *root = new node(data);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

// Height of the tree 
int height(node*root) {

	if(root == NULL) {
		return 0;
	}

	int h1 = height(root->left);
	int h2 = height(root->right);
	return max(h1, h2) + 1;
}

// Right view print : elements that are seen from the right hand side u need to print those elements 
void printKthLevel(node *root, int k) {
	
	if(k == 0 || root == NULL) {
		return;
	}

	if(k == 1) {
		cout << root->data << " ";
		return;
	}

	printKthLevel(root->left, k-1);
	printKthLevel(root->right, k-1);
	return;
}

void printAllLevel(node *root, int height) {
	for(int k = 1; k<=height; k++) {
		printKthLevel(root, k);
		cout << endl;
	}
}

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

// Print the Tree level by level also called the Breadth first search/ Traversal  
void printRightViewNode(node *root) {
	

}

int main(int argc, char const *argv[])
{
	node *root = buildTree();
	int h = height(root);
	printAllLevel(root, h);

	return 0;
}