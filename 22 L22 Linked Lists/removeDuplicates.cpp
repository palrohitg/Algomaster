void removeDuplicate(Node *head) {
    Node* current = head; 
    Node* next_next ; 

    while (current->next != NULL) {
        if (current->data == current->next->data) {
            next_next = current->next->next; 
            del (current->next);
            current->next = next_next;
        } else {
            current = current->next;
        }
    }
    return head; 
} 


// Binary Representation of the Any Natural Numbers In C++ 
