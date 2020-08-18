// leet code problems 
#include<iostream>
using namespace std;

class node {

	public : 

	int data;
	node* next;

		node(int data) {
			this->data = data;
			this->next = NULL;
		}
};


void insertAtEnd(node *&head, int data) {

	if(head == NULL) {
		head = new node(data);
		return;
	}

	node *temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = new node(data);
	return;
}

 
node * buildLinkedList() {
	
	node *head = NULL;
	int data;
	cin >> data;

	while(data != -1) {
		insertAtEnd(head, data);
		cin >> data;
	}
	return head;
} 

void printLinkedList(node *head) {

	while(head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
}

node * sortedListInsert(node * sorted_head, node * cur) {

	 if(sorted_head == NULL) {
		 cur->next = sorted_head;
		 return cur;
	 }
	 if(sorted_head->data >=  cur->data) {
		cur->next = sorted_head;
		return cur;
	 }
	 else {
		 node * temp = sorted_head; // temp ne saare change kar diye and main after return that values
		 while(temp->next != NULL and temp->next->data < cur->data) {
			 temp = temp->next;
		 }
		 cur->next = temp->next;
		 temp->next = cur;
	 }
	return sorted_head;
 }



// return the head after the insertion sort inplace algo
node * insertionSortLinkedList(node *head) {
	
	node * cur = head;
	node * sorted_head = NULL;
	node * curNext = NULL;

	while(cur != NULL) {
		curNext = cur->next;
		sorted_head = sortedListInsert(sorted_head, cur);
		cur = curNext;
	}

	return sorted_head;
}
 
 
int main() {

	node * head = buildLinkedList();
	printLinkedList(head);
	cout << endl;
	node * sorted_head = insertionSortLinkedList(head);
	printLinkedList(sorted_head);
	return 0;
}