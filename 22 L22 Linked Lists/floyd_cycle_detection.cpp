// Cycle detection and removal parts
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



Node * buildLinkedList() {

	int data; cin >> data;
	Node *head = NULL;

	while (data != -1) {
		insertAtEnd(head, data);
		cin >> data;
	}

	return head;
}


bool cycleDetection(Node *head) {

	Node *slow = head;
	Node *fast = head;

	while (fast != NULL and fast->next != NULL) {

		fast = fast->next->next;
		slow = slow->next;

		if (fast->data == slow->data) {
			return true;
		}
	}
	return false;
}



void reverseList(Node *&head) {

	Node *cur = head;
	Node *nextNode = NULL;
	Node *prev = NULL;

	while (cur != NULL) {
		nextNode = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nextNode;
	}

	head = prev;
	return;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node *head = buildLinkedList();
	if (cycleDetection(head)) {
		cout << "yes";
	}
	else {
		cout << "No";
	}

	return 0;
}