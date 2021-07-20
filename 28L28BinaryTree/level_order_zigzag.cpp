// Level order zig - zag or spiral order traversal 
// inputs : 1 true 2 true 7 false false true 6 false false true 3 true 5 false false true 4 false false
https://ide.codingblocks.com/s/267951


#include<bits/stdc++.h>
using namespace std;

class node {

    public : 

        string data; 
        node *left; 
        node *right; 

        node(string data) {
            this->data = data; 
            left = NULL; 
            right = NULL; 
        }
}; 



node *buildTree() {

    string str; cin >> str; 

    // Base Case if false then return the NULL 
    if (str == "false") {
        return NULL; 
    }


    // node is exits and take the inputs and attach that subtree to left or right of the root node 
    if (str == "true") {
        
        string str; cin >> str; 
        node *root = new node(str); 
        root->left = buildTree(); 
        root->right = buildTree();

        return root; 
    }

    node *root = new node(str); 
    root->left = buildTree(); 
    root->right = buildTree();

    return root;
}


// Tree Pre-Order traversal 
void treePrint(node *root) {

    // Base Case 
    if (root == NULL) {
        return; 
    }

    cout << root->data << " "; 
    treePrint(root->left);
    treePrint(root->right); 
    return; 
}


void helper(node *root, map<int, vector<string>> &m, int level) {

    // Base Case 
    if (root == NULL) {
        return ; 
    }   

    // insert the value at the given the keys/level 
    m[level].push_back(root->data);
    
    // Call on the left part 
    helper(root->left, m, level + 1);
    helper(root->right, m, level + 1); 
    return; 
}

void zigZagPrint(node *root) {

    // create the hashmaps to insert the key and vectors of values 
    map<int, vector<string>> m; 
    helper(root, m, 0); // 0 denotes  level 

    // Print the hashmaps 
    for (auto p : m) {

        int n = p.second.size();

        if (p.first % 2 == 0) {
            // left to right traverse the vectors 
            for(int i = 0; i < n; i++) {
                cout << m[p.first][i] << " ";
            }
        }
        else {
            // right to left traverse the vectors 
            for (int i = n - 1; i >= 0; i--) {
                // first index -> key and the second one is the values 
                cout << m[p.first][i] << " "; 
            }
        }
        // cout << endl; 
    }
    return; 
}

int main() {
    
    node *root = buildTree();
    zigZagPrint(root);

    return 0;
}
