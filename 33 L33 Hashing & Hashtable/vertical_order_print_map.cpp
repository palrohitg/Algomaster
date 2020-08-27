// Given a binary Tree print the elements in the vertical order  implement using the maps stl 
// maps already are sorted by the key no sorting is needed 

#include<iostream>
#include<vector>
#include<map>
using namespace  std;


class Node {

    public : 
        int data; 
        Node *left; 
        Node *right; 

    public: 

        Node(int data) {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
        

};



void verticalOrderPrint(Node *root, int d, map<int, vector<int>> &m) {

    // Base case 
    if(root == NULL) {
        return;
    }

    // push the element in the maps 
    m[d].push_back(root->data);
    verticalOrderPrint(root->left, d - 1, m);
    verticalOrderPrint(root->right, d + 1, m);
    return;

}

int main() {

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(8);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);

    // one functions to traverse the tree
    int d = 0;
    map<int, vector<int>> m;
    verticalOrderPrint(root, d, m);




    // Iterater over the maps 
    for(auto p : m) {
        cout << p.first << " = "; 
        for(int x: p.second) {
            cout << x << "-->";
        }
        cout << endl;
    }
    return 0;
}