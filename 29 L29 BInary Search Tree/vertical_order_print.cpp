/*

    1. Brute force = Calculate the min, max and generate all the nodes data with traversing to all the line O(w*n) w = width of the binary tree 
    2. Hashmap + tree: 
        a. Store the horizontial distances as the key and corresponding nodes as the values 
        b. print the hashmaps or assign the values to 2-D vectors 
    3. Two types of maps : map, unordered maps, map maintain the self balancing bst 
*/

#include<iostream>
#include<map>
#include<vector> 
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


// Utilities of the maps functions to store the key and values 
void horizontalDistance(node *root, map<int, int> &m, int hd) {

    // Base Case is node is null then return it 
    if (root == NULL) {
        return; 
    }

    // Insert the current nodes distances and its repsective value in the maps 
    m[hd] = root->data; 

    // Call on the left subtrees with hd minus 1 
    horizontalDistance(root->left, m, hd - 1);

    // Call on the right subtree with hd plus 1
    horizontalDistance(root->right, m, hd + 1);
   
    return; 
}



// Main functions to print the vertical orders of all nodes 
void verticalOrderPrint(node *root) {

    // Hashmaps to store the keys and values w.r.t to horizontal distances and node data order maps
    map<int, int > m;
    vector<vector<int>> v;  
    horizontalDistance(root, m, 0);
    
    for(auto p : m) {
        v[p.first].push_back(p.second);
    }

    // insert all the value in the vectors     
    return;
}


void printTree(node *root) {

    if (root == NULL) {
        return; 
    }

    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
    return;  
}


int main() {

    node *root = NULL; 
    root = new node(3); 
    root->left = new node(9);
    root->right = new node(20);
    root->right->left = new node(15);
    root->right->right= new node(7); 


    printTree(root);
    cout << endl;

    // Vertical Order print functions
    verticalOrderPrint(root);
    



    return 0;
}