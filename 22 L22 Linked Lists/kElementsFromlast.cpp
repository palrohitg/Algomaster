/*
	- Runner technique application find out the elements from the last of the linked-list
	- Move fast for the node and then simply one by one
	- Categories easy one
	- No code for you u have to do it your own ways 
*/


#include<iostream>
using namespace std;

class node {
public :
	int data;
	node *next;


	node(int d) {
		data = d;
		next = NULL;
	}
};

void insertAtTails(node *&head, int data) {
	if (head == NULL) {
		// insert at head
		head = new node(data);
		return;
	}

	node *temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	// insert at head
	temp->next = new node(data);

}

// Inputs while the -1 is not given
void builtInInput(node *&head) {
	int data;
	cin >> data;
	while(data != -1) {
		insertAtTails(head, data);
		cin >> data;
	}
}

// Kth elements from the last of the node 


void printLL(node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

node * kElementFromLast(node*&head, int K) {
	node* fast = head;
	node* slow = head;
	int count = 1;
	while(count <= K) {
		fast = fast->next;
		count++;
	}
	// return the slow pointer without using the another length approaches
	while(fast != NULL) {
		fast = fast->next;
		slow = slow->next;
	}

	return slow;
}

int main() {
	node * head = NULL;
	builtInInput(head);
	//printLL(head);
	int K;
	cin >> K;
	node* new_head = kElementFromLast(head, K);
	cout << new_head->data;

	return 0;
}