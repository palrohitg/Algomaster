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
            this->left = NULL; 
            this->right = NULL; 
        }    

};


// level order inputs of the trees 
node *buildTree() {

    int data; cin >> data;
    queue<node *> q;
    node *root = new node(data);  
    q.push(root); 

    // while queue is not empty take the left and right child as the inputs and insert in the left || right of the root 
    while(!q.empty()) {
        
        node *f = q.front(); 
        q.pop();

        int c1,c2; cin >> c1 >> c2; 
        
        if(c1 != -1) {
            f->left = new node(c1);
            q.push(f->left); 
        }
        
        if(c2 != -1) {
            f->right = new node(c2);
            q.push(f->right);  
        }
    }
    
    return root; 
}


// Print the tree using the bfs approaches level wise print in O(N) times 

void bfs(node *root) {

    queue<node *> q; 
    q.push(root);
    q.push(NULL); 

    while(!q.empty()) {

        node *f = q.front();

        
        // insert endl is each NULL adress pop that NULL value insert the another null if the queue is not empty
        if(f == NULL) {
            cout << endl; 
            q.pop();

            if(!q.empty()) {
                q.push(NULL);
            }
        }   
        else {
        // print the current root values 
            cout << f->data << " "; 
            q.pop(); // first print the value then pop out the elements 

            if(f->left != NULL) {
                q.push(f->left);
            }
        
            if(f->right != NULL) {
                q.push(f->right); 
            }
        }
    }
    return; 
}

void printTree(node *root) {

    // Base Case
    if(root == NULL) {
        return; 
    }

    // root, left, right 
    cout << root->data << " "; 
    printTree(root->left);
    printTree(root->right);

    return; 
}



int main() {

    node *root = buildTree(); 
    bfs(root); 


    return 0;
}