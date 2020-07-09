

/*

 Reverse the linked list in the groups order

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

void builtInInput(node *&head, int n) {

	for (int i = 0; i < n; ++i)
	{
		int data;
		cin >> data;
		insertAtTails(head, data);
	}
}


void printLL(node *head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
}

node * reverseLL(node*&head, int k) {
	// reverse the elements 
	node * cur = head;
	node * prev = NULL;
	node * next = NULL;
	int count = 0;
	while(cur != NULL && count < k) {
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
		count++;
	}

	// head->next it will points to next reverse sublist
	if(cur != NULL) {
		head->next = reverseLL(cur,k);
	}

	return prev;

}
int main() {

	node *head = NULL;
	int n;
	cin >> n;
	builtInInput(head, n);
	cout << "Original list" << endl;
	printLL(head);
	cout << endl;
	int k=2;
	node *new_head = reverseLL(head,k);
	cout << "After reversing" << endl;
	printLL(new_head);
	return 0;
}