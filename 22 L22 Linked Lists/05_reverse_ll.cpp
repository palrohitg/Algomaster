#include<bits/stdc++.h>
using namespace std; 


class Node {
public:
    int data; 
    Node *next; 

    Node(int) {
        this->data = data; 
        this->next = NULL; 
    }
}; 


void insertAtTail(Node *&head, int data) {
    if (head == NULL) {
        cout << "Testing ehre" << endl;
        head = new Node(data); 
        return; 
    }
    return; 
}



int main() {

    Node *head = NULL; 
    int data; cin >> data;
    insertAtTail(head, data); 

    while(head != NULL) {
        cout << head->data << endl; 
        head = head->next;
    }

    return 0; 
}