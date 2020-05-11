/*  
    Circular Linked list the last node pointing to the first one
	Applications : 
		- Many CPU Algorithms when we have to queues the process many times
		- Queue
		- Fibonaaci heaps
	Operations : 
		1. Traversal and Insertion functions
		2. Deletions Functions

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

// inseration at the circular linked list : 

void insertAtHead(Node*&head, int data) {

	Node *n = new Node(data);
	n->next = head;
	head = n;
}


void insertAtTail(Node*&head, int data) {

	//No Node
	if(head == NULL) {
		// Or directly insert at tails 
		insertAtHead(head, data);
		return;
	}
	else {
		// insert at end
		Node * temp = head;
		while(temp->next != NULL) {
			temp = temp->next;
		}
		// code optimization 
		temp->next = new Node(data);
	}	
	
}


void builtLL(Node *&head) {
	int data;
	cin >> data;

	while(data != -1) {
		insertAtTail(head,data);
		cin >> data;
	}

	Node*tails = head;
	while(tails->next != NULL) {
		tails = tails->next;
	}
	tails->next = head;
}

void print(Node *head) {
	Node*temp = head->next;
	cout << head->next << "-->";
	while (temp != head) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
}

void push(Node*&head, int data) {
	Node*pre1 = new Node(data);
	Node*temp = head;

	if(head!= NULL) {
		while()
	}
}
int main() {
	Node *head = NULL;
	builtLL(head);
	print(head);
	return 0;
}