// Insertion and find operation in the tree data structure 
#include<bits/stdc++.h> 
using namespace std; 

class node {

    public : 

    char data; 
    unordered_map<char, node *> children; // key value pair key = char, and address next node contains arrays 
    bool terminal;  

        node(char d) {
            data = d; 
            terminal = false; 
        }

}; 


// trie 1. insert 2. find 
class trie { 

    node* root; 
    int cnt; 

    public : 

        trie() {
            root = new node('\0');
            cnt = 0; 
        }

        // insert one string in the lines 
        void insert(char *w) { 

            node *temp = root; 
            // iterate over each char 
            for (int i = 0; w[i] != '\0'; i++) {
                char ch = w[i]; 
                if (temp->children.count(ch)) {
                    temp = temp->children[ch];
                }
                else {
                    node *n = new node(ch); 
                    temp->children[ch] = n; 
                    temp = n; 
                }
            }
            temp->terminal = true; 
        }

        // find the numbers 
        bool find(char *w) {

            node *temp = root; 
            for (int i = 0; w[i] != '\0'; i++) {
                char ch = w[i]; 
                if (temp->children.count(ch) == 0) {
                    return false; 
                }
                else {
                    // increment the temp pointer 
                    temp = temp->children[ch];
                }
            }
            return temp->terminal; 
        }
}; 


int main() {
    
    char words[][10] = {"No", "Not", "Car", "Duck", "Dog"}; 

    // insert in the tries
    trie t;  
    for (int i = 0; i < 5; i++) {
        t.insert(words[i]); 
    }
    char w[10]; 
    cin >> w; 

    if(t.find(w)) {
        cout << "Present" << endl; 
    }
    else {
        cout << "Absent" << endl; 
    }
    
    return 0; 
}