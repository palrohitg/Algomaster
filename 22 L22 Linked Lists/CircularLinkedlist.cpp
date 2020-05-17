/*  
    Circular Linked list the last node pointing to the first one
	Applications : 
		- Many CPU Algorithms when we have to queues the process many times round robins algorithms
		- Queue
		- Fibonaaci heaps
	Operations : 
		1. Traversal and Insertion functions
		2. Deletions Functions
		3. Another minors things about the linked list
		4. Trying to master the basics concepts u are half ways aways from ur journey
		5. Fiboncci Series

*/

/*
	1. Insert at the head of the linked list 
	2. Traversal the linked list
	3. Functionality of the circular linked list

*/

#include<iostream>
using namespace std;

class Node{
	public :		
		int data;
		Node *next;

			Node(int d) {
				data = d;
				next = NULL;
			}

};

// Insert at the head of circular ll
void insertNode(Node *&head, int data) {
	// No node
	if(head == NULL) {
		head = new Node(data);
		head->next = head;
		return;
	}
	// 
	Node * ptr_new_node = new Node(data); // call the constructors 
	ptr_new_node->next = head;
	Node *temp = head;
	while(temp->next != head) {
		temp = temp->next;
	} 
	// last node points to the new node
	temp->next = ptr_new_node;
	head = ptr_new_node;
}

// traverse the circular LL
void printList(Node *head) {
	Node * temp = head;
	while(temp->next != head) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
	 cout << temp->data;
}

// Deletion LL 


int main() {
	Node *head = NULL;
	insertNode(head, 10);
	insertNode(head, 12);
	insertNode(head, 20);
	insertNode(head, 30);
	printList(head);
	return 0;
}