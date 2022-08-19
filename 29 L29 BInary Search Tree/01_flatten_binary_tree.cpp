#include<bits/stdc++.h>
using namespace std; 
// TC : O(N) , SC: O(N)

// struct of node declare 
struct node {
    int data; 
    node* left; 
    node* right; 
    
    node(int data) {
        this->data = data; 
        left = NULL; 
        right = NULL; 
    }
}; 

// function to flatten binary tree
void flatten(node *parent) {

    // Queue function 
    queue<node*> q; 
    q.push(parent->left);
    q.push(parent->right);
    node *prev = parent; 

    while(q.size()) {
        int s = q.size();
        while(s--) {
            node *curr = q.front(); 
            
            if (curr == NULL) {
                continue;
            }
            prev->right = curr; 
            prev->left = NULL; 
            prev = curr; // Now current becomes our prev element
            q.push(curr->left);
            q.push(curr->right); 
        }
    }

    prev->left = NULL;
    prev->right = NULL; 

    return; 

}

void print(node* parent)
{
    node* curr = parent;
    while (curr != NULL)
        cout << curr->data << " ", curr = curr->right;
}

int main()
{
    node* root = new node(1);
    root->left = new node(5);
    root->right = new node(2);
    root->left->left = new node(6);
    root->left->right = new node(4);
    root->right->left = new node(9);
    root->right->right = new node(3);
 
    // Calling required functions
    flatten(root);
    print(root);
     
    return 0;
}