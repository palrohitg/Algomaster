#include<bits/stdc++.h>

using namespace std; 

void newData() {
    vector<int> postOrder; 
    if (root == NULL) return; 

    stack<TreeNode*> st1, st2; 
    st1.push(root); 


    while(!st.empty()) {
        root = st1.top(); 
        st1.pop(); 
        st2.push(root); 
        if (root->left != NULL) {
            st1.push(root->left); 
        }  
        if (root->right != NULL) {
            st2.push(root->right); 
        }
    }

    while(!st2.empty()) {
        st2.pop(); 
    }

    return; 
}


int main() {


    return 0; 
}