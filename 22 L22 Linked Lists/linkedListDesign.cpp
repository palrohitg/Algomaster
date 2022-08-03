#include<bits/stdc++.h>
using namespace std;

class Node {
public :
	int val;
	Node* next;

	Node(int val) {
		this->val = val;
		next = NULL;
	}
};


class MyLinkedList {
public :

	Node* head;
	int size;

	MyLinkedList() {
		head = NULL;
		size = 0;
	}


	// Insert at head
	void addAtHead(int val) {
		if (head == NULL) {
			head = new Node(val);
			size++;
			return;
		}

		Node* temp = new Node(val);
		temp->next = head;
		head = temp;
		size++;
		return;
	}

	int get(int index) {
		// Elemnents does't exists 
		if (index >= size) {
			return -1;
		}

		Node* temp = head;
		for (int i = 0; i < index; i++) temp = temp->next;

		return temp->val;
	}

	// Insert at particular index
	void addAtIndex(int index, int val) {
		// if the index are negative then insert the elements in start
		if (index <= 0) {
			addAtHead(val);
			size++;
			return;
		}

		int count = 1;
		Node* temp = head;

		while (count < index and temp->next != NULL) {
			temp = temp->next;
			count++;
		}

		// When both of them are equal then create a new nodes 
		if (count == index) {
			Node* ptr = new Node(val);
			ptr->next = temp->next;
			temp->next = ptr;
			size++;
		}

		return;
	}

	// insert at tails
	// traverse the node till the ends
	void addAtTail(int val) {

		if (head == NULL) {
			addAtHead(val);
			size++;
			return; 
		}

		Node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}

		temp->next = new Node(val);
		size++;
		return;
	}

	// Print the Node
	void printLinkedList() {
		Node* temp = head;
		while (temp->next != NULL) {
			cout << temp->val << "->";
			temp = temp->next;
		}
		cout << endl;
	}

	// Print Delete any Node at Particular Index
	void deleteAtIndex(int index) {
		if (index >= size) {
			return;
		}
		// Negative index just ignore thems
		Node* temp = head;
		for (int i = 0; i < index; i++) {
			temp = temp->next;
		}

		// for deleting the nodes in the memory
		Node* temp1 = temp->next;
		temp->next = temp1->next;
		temp1->next = NULL;
		size--;

		delete temp1;
	}

};




int main() {

	MyLinkedList l;
	l.addAtHead(30);
	l.addAtHead(20);
	l.addAtHead(10);
	l.addAtHead(05);

	l.printLinkedList();

	l.addAtIndex(2, 40);

	l.printLinkedList();



	return 0;
}