// Static variable has property to preserve their value onces it outofscope during the functions calls 
// Ashish Gupta Repo
/*
4
60 65 50 70
50 65 60 70
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

node *buildTree(int* pre, int *in, int s, int e) {

    // Base Case 
    if (s > e) {
        return NULL; 
    }

    static int j = 0; 
    // Recursive Case 
    // Create one node and insert into the nodes 
    node* root = new node(pre[j]); 

    int index = -1;
    for (int i = s; i <= e; i++) {
        if (in[i] == pre[j]) {
            index = i; 
        }
    }
    j++;
    
    root->left = buildTree(pre, in, s, index - 1); 
    root->right = buildTree(pre, in, index + 1, e); 

    return root;
}   


void preOrderPrint(node *root) {

    // Base case 
    if (root == NULL) {
        return ;
    }
    
    cout << root->data << " "; 
    preOrderPrint(root->left); 
    preOrderPrint(root->right);

    return; 
}

int main() {

    int n; 
    int pre[1000];
    int in[1000]; 

    cin >> n; 

    for (int i = 0; i < n; i++) {
        cin >> pre[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> in[i]; 
    }

    // build the tree using the preorder and inorder traversal 
    node *root = buildTree(pre, in, 0, n-1);
    preOrderPrint(root);

    return 0; 
}