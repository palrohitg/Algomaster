/*

    Approach:
        1. 1->2->3->4->2
        Algorithm:
            a. Create an hashtable and key as address and value as stored 
            b. if same address is present then return true 

*/
#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next; 

        Node(int data) {
            this->data = data;
            this->next = NULL; 
        }
    
}; 


void printLL(Node *head) {

    while(head != NULL) {
        cout << head->data << " "; 
        head = head->next;
    }
    cout << endl; 
}

// if linked list contain cycle return true else false
bool detectLoop(Node *head) {
    unordered_map<Node*, bool> mp;

    while(head != NULL) {
        // not present and if both == then iterator is pointing to last elements
        if (mp.find(head) == mp.end()) {
            mp[head] = true; 
        } else {
            return true; 
        }
        head = head->next; 
    }
    return false; 
}

int main() {

    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    Node* head = first;
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = third;

    // printLL(head); 
    bool ans = detectLoop(head); 
    cout << ans << endl; 

    return 0; 
}