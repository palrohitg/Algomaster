#include<iostream>
#include<queue>
using namespace std;

class node {
    
    public : 

        int data;
        node *left; 
        node *right; 

    public : 

        node(int data) {
            this->data = data; 
            this->left = NULL;
            this->right = NULL; 
        }

};



// Build the tree using -1 as the NULL pointers 
node *buildTree() {
    
    int data; cin >> data;
    
    if(data == -1) {
        return NULL;
    } 


    node *root = new node(data);

    root->left = buildTree();
    root->right = buildTree();
    return root;
}


void printTree(node *root) {

    if(root == NULL) {
        return; 
    }

    cout << root->data << " "; 
    printTree(root->left);
    printTree(root->right);

    return; 
}

void bfs(node *root) {

    // inserting the pointers to next levels 
    queue<node *> q; 
    if(root != NULL) {
        q.push(root);
    }

    // While the queue is not empty pop out the elements and insert the value of the childrens 
    while (!q.empty()) {
        node * front = q.front();
        cout << front->data << " "; 
        q.pop(); 

        if(front->left != NULL) {
            // insert into the queues 
            q.push(front->left);
        }

        if(front->right != NULL) {
            // insert into the queues 
            q.push(front->right);
        }

    }
}


int main() {

    node *root = buildTree(); 
    printTree(root);
    cout << endl; 
    bfs(root);

    return 0;
}