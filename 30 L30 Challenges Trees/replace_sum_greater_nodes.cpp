#include<bits/stdc++.h>
using namespace std; 


class node {

    public : 

        int data; 
        node *left; 
        node *right; 

        node (int data) {
            this->data = data; 
            left = NULL; 
            right = NULL; 
        }

}; 


node *insertInBST(node *root, int data) {

    // Base Case 
    if (root == NULL) {
        return new node(data); 
    }

    // if nodes is smaller insert into the left subtrees 
    if (data <= root->data) {
        root->left = insertInBST(root->left, data);
    }
    else {
        root->right = insertInBST(root->right, data);
    }
    return root;
}

node *buildBST(int n) {
    
    node *root = NULL; 
    int i = 1; 

    while(i <= n) {
        int data; cin >> data;
        root = insertInBST(root, data); 
        i++;
    }
    return root; 
}


// balances trees 
node *buildBSTRec(int *a, int s, int e) {

    if (s > e) {
        return NULL;
    }   

    int mid = (s + e) / 2; 
    node *root = new node(a[mid]);
    root->left = buildBSTRec(a, s, mid - 1);
    root->right = buildBSTRec(a, mid + 1, e);      
    return root; 
}



// Inorder Print of the BST always sorted 
void inOrderPrint(node *root) {
    
    if (root == NULL) {
        return; 
    }

    inOrderPrint(root->left);
    cout << root->data << " ";
    inOrderPrint(root->right);

    return; 
}



// sum replacement functions Inorder reverse traversal 
node *sumReplacementBST(node *root, int &sum) {

    // base case 
    if (root == NULL) {
        return NULL;  
    }

    // call on the right sub tree, root, and left subtrees 
    sumReplacementBST(root->right, sum); 
    // update the root nodes sum stores the largest sum we have achieved so far
    sum = sum + root->data; 
    root->data = sum; 
    
    sumReplacementBST(root->left, sum);
    
    return root;
}

node *sumReplacementBSTutiltiy(node *root) {
   
    int sum = 0;
    node *new_root = sumReplacementBST(root, sum); 
    return new_root;    
}


void printInorder(node *root) {
    // Base case 
    if (root == NULL) {
        return; 
    }

    cout << root->data << " ";
    printInorder(root->left);
    printInorder(root->right);

    return; 
}


int main() {

    int n; cin >> n;
    int arr[1005]; 

    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    node *root = buildBSTRec(arr, 0, n - 1); 
    node *new_head = sumReplacementBSTutiltiy(root);
    printInorder(new_head); 

    return 0;
}