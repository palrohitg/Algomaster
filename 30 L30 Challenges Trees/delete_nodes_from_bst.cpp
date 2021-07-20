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


node* insertInBST(node *root, int data) {
    // Base Case 
    if (root == NULL) {
        return new node(data); 
    }

    // Data is less than root then insert in the left subtree and return the root 
    if (data <= root->data) {
        root->left = insertInBST(root->left, data); 
        return root;
    }
    else {
        root->right = insertInBST(root->right, data);
        return root; 
    }
}


node* buildBST(int bulid_bst[], int size_of_bst) {

    node* root = NULL; 
    
    for(int i = 0; i < size_of_bst; i++) {
        root = insertInBST(root, bulid_bst[i]); 
    }

    return root; 
}
 

// PreOrder print of the BST 
void preOrderPrint(node *root) {

    if (root == NULL) {
        return; 
    }

    cout << root->data << " "; 
    preOrderPrint(root->left); 
    preOrderPrint(root->right);
    return; 
}


int smallestElementInBST(node* root) {

    // traverse on the left side 
    while(root->left != NULL) {
        root = root->left;
    }
    return root->data; 
}

// delete the element one by one 
node* deleteElementInBST(node* root, int data) {

    if (root == NULL) {
        return NULL; 
    }

    // 1. when the node is leaf node 
    // then return NULL to parent 
    if (root->data == data and root->left == NULL and root->right == NULL) {
        return NULL; 
    }

    // 2. when the node 1 child node
    // Store the child in the temp var and return the add to mains  
    if (root->data == data and root->left != NULL and root->right == NULL) {
        node* temp = root->left; 
        return temp; 
    }

    if (root->data == data and root->left == NULL and root->right != NULL) {
        node* temp = root->right; 
        return temp; 
    }

    //3. When node has 2 child 
    // find the smallest on the right subtree and replace with current elements and delete the min elments 
    if(root->data == data and root->left != NULL and root->right != NULL) {
        
        // find the smallest element in the right subtree
        int minElement = smallestElementInBST(root->right); 

        // Replace the min element with the root->data 
        root->data = minElement; 

        // Delete the smallest elements 
        root->right = deleteElementInBST(root->right, minElement); 
    } 

    if(data <= root->data) {
        root->left = deleteElementInBST(root->left, data);
    } 
    else {
        root->right = deleteElementInBST(root->right, data);
    }

    return root; 
}



node* deleteInBST(node* root, int del_element[], int size_of_del_ele) {

    // Iterate over the del_element arrays and delete the elements one by one 
    for (int i = 0; i < size_of_del_ele; i++) {
        root = deleteElementInBST(root, del_element[i]);
    }

    return root;
}   



int main() {

    int t; cin >> t;

    int bulid_bst[1005]; 
    int del_element[1005]; 


    while(t--) {
        int size_of_bst, size_of_del_ele;
        cin >> size_of_bst ;
        
        for (int i = 0; i < size_of_bst; i++) {
            cin >> bulid_bst[i];
        }
        
        cin >> size_of_del_ele;

        for (int i = 0; i < size_of_del_ele; i++) {
            cin >> del_element[i];
        }

        node* root = buildBST(bulid_bst, size_of_bst);
        node* new_root = deleteInBST(root, del_element, size_of_del_ele);

        preOrderPrint(root);     
    }


    return 0;
}