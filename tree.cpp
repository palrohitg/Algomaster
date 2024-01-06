#include<bits/stdc++.h> 
using namespace std; 

class Node {
    public:
    int data; //
    Node *left; 
    Node *right; 

    Node(int data, Node); 
} 

vector<int> ans; 

void InorderTraversalIterator(Node *root) { 
    if (root == NULL) {
        return ans; 
    }  
    stack<Node*> s; 
    curr = root;  
    while(curr != NULL || !s.empty()) { 
        while(curr != NULL ) { 
            s.push(curr); 
            curr = curr->left;
        }
        Node *curren = s.top(); 
        cout << current->data << endl; 
        s.pop(); 
        curr = curr->right;  
    }
    return ans; 
} 



 
int main() {
    

    (user_id --> pointing )-->  = ranks, cash  
    (pointing, user_id) 
    /*
        1 --> 100 , cash 1, 1, 1 
        2 --> 100 , 
        3 --> 100 




        4 ---> 85 ,  cash   2 
        5 ---> 85 , 
    
    */

    previous = 100 
    next = 85 --> ranking = 2  
    ranks = 1 
    /*
        1000 (1, 1) 1500 / 2 --> 750 = true 
        500 
        200 --> j 


        100 100 100 
        50 11 to  50 
    */

    return 0; 
}