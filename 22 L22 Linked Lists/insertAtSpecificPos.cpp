// Given a linked list
// We need to insert a new node at the specific poistion
// head, data, pos and 0 based indexing


#include<bits/stdc++.h>
using namespace std;

class Node {
public :
	int data;
	Node* next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

// insert at last node
Node * insertAtEnd(Node *&head, int data) {

	// No Node
	if (head == NULL) {
		head = new Node(data);
		return head;
	}

	Node* temp = head;

	while (temp->next != NULL) {
		temp = temp->next;
	}

	// insert the new node
	temp->next = new Node(data);

	return head;

}

// Insert at specific positions
Node* insertAtSpecificPos(Node* head, int data, int pos) {

	if (head == NULL) {
		head = new Node(data);
		return head;
	}

	Node* temp = head;
	int count = 1;

	while (temp->next != NULL and count < pos) {
		temp = temp->next;
		count++;
	}

	// correct poistions
	if (count == pos) {
		Node *new_node = new Node(data);
		new_node->next = temp->next;
		temp->next = new_node;
		return head;
	}

	return NULL;
}

Node * buildLinkedList() {

	int data; cin >> data;
	Node* head = NULL;


	while (data != -1) {
		head = insertAtEnd(head, data);
		cin >> data;
	}

	return head;
}


// Display all node
void printLinkedList(Node *head) {

	while (head != NULL) {
		cout << head->data << "->";
		head = head->next;
	}

	cout << endl;
	return;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	Node* head = buildLinkedList();

	printLinkedList(head);

	head = insertAtSpecificPos(head, 10, 2);

	printLinkedList(head);

	return 0;
}