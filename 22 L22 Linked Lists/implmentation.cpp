/*

	LL Basics Opeartions :
	1. Insertions
	2. Deletions
	3. Reverse the linked list but iteratively and recursively

*/
/*

	1. Taking Input from  user
	2. Operator overloading
	3. Run techniques Very useful
	4. kth node from the end
	5. Merge two sorted linked list
	6. Merge Sort
	7. Linkedlist floyd's Cycle
	8. Dobly linked list
	9. Cirucular linked list insertions
	10. Deletion Functions
	11. Foward list STL
	12. STL 1 list
	13. Adjaceny list for weighted graphs

*/

#include<iostream>
using namespace std;


class Node {


public :

	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};


Node * reverseListRec(Node *&head) {


	// Base Case
	if (head == NULL || head->next == NULL) {
		return head;
	}


	Node *smallHead = reverseListRec(head->next);


	// make the current next null and then copy the address of the current node to the next;
	Node *cur = head;
	cur->next->next = cur;
	cur->next = NULL;

	return smallHead;

}

// Insert At End

void insertAtEnd(Node *&head, int data) {

	// base case
	if (head == NULL) {
		head = new Node(data);
		return;
	}

	Node *temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = new Node(data);
	return;
}


// Insert at head
void insertAtHead(Node *&head, int data) {

	// Base case
	if (head == NULL) {
		head = new Node(data);
		return;
	}

	// another case
	Node *ptr = new Node(data);
	ptr->next = head;
	head = ptr;
	return;
}


// Insert at the middle
void insertAtMiddle(Node *&head, int data, int pos) {

	// Base case
	if (head == NULL) {
		head = new Node(data);
		return;
	}

	Node *temp = head;
	Node *prev = NULL;

	int count = 1;

	while (temp->next != NULL and count < pos) {
		prev = temp;
		temp = temp->next;
	}

	// exchange the poitner here
	prev->next = temp->next;
	return;
}


// Varoius pointers and need to store the address
void reverseList(Node *&head) {

	Node *cur = head;
	Node *nextNode = NULL;
	Node *prev = NULL;

	while (cur != NULL) {
		nextNode = cur->next; insert at middle in linked list  in cpp
		cur->next = prev;
		prev = cur;
		cur = nextNode;
	}

	head = prev;
	return;
}




Node * buildLinkedList() {

	int data; cin >> data;
	Node *head = NULL;

	while (data != -1) {
		insertAtEnd(head, data);
		cin >> data;
	}

	return head;
}


// Print the linkedlist
void print(Node *head) {

	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << endl;
}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	Node *head = buildLinkedList();
	cout << "Before Reverse list" << endl;
	print(head);
	cout << "After reverseList " << endl;
	reverseList(head);
	print(head);
	Node *newhead = reverseListRec(head);
	print(newhead);

	return 0;
}