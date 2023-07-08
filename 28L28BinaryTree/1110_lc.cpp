#include<bits/stdc++.h> 
using namespace std;

// Simple return the root elements for the trees here. 
// Follow the DFS first approach here.  

// Independent Node Present in the root of the tree are call forest elements here 


class node {
    public:
        vector<node*> results;
        set<int> to_delete_set; 
        int data; 
        node *left;
        node *right; 

        node(int data) {
            this->data = data; 
            left = NULL; 
            right = NULL; 
        }

}; 

class Solution {
        public:
            vector<node*> result;
            set<int> to_delete_set; 

            Solution() {

            }

            vector<node*> delNodes(node *root, vector<int> &to_delete) {
                for (int i : to_delete) {
                    to_delete_set.insert(i); 
                }
                helper(root, result, to_delete_set, true);
                return result;
            }

            node* helper(node *root, vector<node*> &result, set<int> to_delete_set, bool is_root) {
                if (root == NULL) return NULL;
                bool deleted = to_delete_set.find(root->data) != to_delete_set.end(); 
                // If this is the Root of the tree elements ban gaya hoogya 
                if (is_root && !deleted) {
                    result.push_back(root);
                }
                root->left = helper(root->left, result, to_delete_set, deleted); 
                root->right = helper(root->right, result, to_delete_set, deleted); 
                return deleted ? NULL: root; 
            }
}; 


int main() {

    node *root = new node(1); 
    root->left = new node(2); 
    root->right = new node(3); 
    root->left->left = new node(4); 
    root->left->right = new node(5); 
    root->right->left = new node(6); 
    root->right->right = new node(7); 

    vector<int> to_delete = {3, 5}; 
    vector<node*> results; 

    Solution sol = Solution(); 
    results = sol.delNodes(root,  to_delete); 

    for (auto n : results) {
        cout << n->data << endl; 
    }


    return 0;  
}