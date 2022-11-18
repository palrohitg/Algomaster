#include<bits/stdc++.h>
using namespace std; 


class Node {
public:
    int data; 
    Node *next; 

    // Default Constructor 
    Node(int element) {
        this->data = element; 
        this->next = NULL; 
    }
}; 


/*
- Insertion 
    - End (Insert at Tail)
    - First (Insert at head)
    - Middle (Insert at specific poistion)
- Deletion 
    - End (Insert at Tail)
    - First (Insert at head)
    - Middle (Insert at specific poistion)
- Search 
    - Traverse elements 

user input: 
10 
20 
10
-1 

30 
temp->10->20->10->30->X  
*/

void insertAtTail(Node *&head, int data) {
    
    if (head == NULL) {
        head = new Node(data); 
        return; 
    }

    Node* temp = head; 
    while(temp->next != NULL) {
        temp = temp->next; 
    }
    temp->next = new Node(data); 
    return;  
}

void printLinkedList(Node *head) {
    Node* cur = head; 
    while(cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;  
    }
    return; 
}

int main() {

    Node *head = NULL; 
    int data; cin >> data;

    while(data != -1) {
        insertAtTail(head, data);
        cin >> data; 
    }

    printLinkedList(head); 

    return 0; 
}