// Linked list Merge sort  using the mid-point.
// Merge short complete implemention using the operator overloading

// Merge Sort will  1. Divide the LL 2. Sort Recursively 3. Merge the sorted ll 
#include<iostream>
using namespace std;

class Node {
	public :
		int data; 
		Node *next; 

		Node(int d) {
			data = d;
			next = NULL;
		}

};

// insert at heads
void insertAtHead(Node*&head, int data) {
	// first if head = null make the new node pointing to head 
	if(head == NULL) {
		head = new Node(data);
	}
	else {
		 Node *n = new Node(data);
		 n->next = head; 
		 head = n;
	}
}

// insert at tails 
void insertAtTail(Node*&head, int data) {
	if(head == NULL) {
		head = new Node(data); // insert at the head
	}
	else {
		Node *temp = head; 
		while(temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = new Node(data); // actually going to insert the elements at the end
	}
}

// print the list
void printList(Node *head)  {
	if(head == NULL) {
		return;
	}
	while(head != NULL) {
		cout << head->data << "-->"; 
		head = head->next; 
	}
}

// Divides the LL from the mid-points
Node * middlePoint(Node*&head) {
	if(head == NULL || head->next == NULL) {
		return head; 
	}
	Node* fast = head->next; 
	Node* slow = head; 
	while(fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

Node * mergeList(Node*&head1, Node*&head2) {
	if(head1 == NULL) {
		return head2;
	}
	if(head2 == NULL) {
		return head2;
	}
    Node *c = NULL;
	if(head1->data < head2->data) {
		c = head1;
		c->next =  mergeList(head1->next , head2);
	}

	if(head2->data < head1->data) {
		c = head2;
		c->next =  mergeList(head1 , head2->next);
	}
	return c;
}
Node* mergeSortLL(Node*&head) {
	// divide from the middle points 
	Node* mid = middlePoint(head);
	// printList(mid);
	Node*b = mid->next;
	mid->next= NULL;
	Node*a = head;
	// recursively sort the linkedlist
	Node*head1 = mergeSortLL(a);
	Node*head2 = mergeSortLL(b);

	Node*new_head = mergeList(head1,head2);
	return new_head; // head after the sorting of the LL
}

// print the list


int main() {
	Node * head1 = NULL;
	insertAtHead(head1, 5);	
	insertAtTail(head1, 10);
	insertAtTail(head1,15);
	insertAtTail(head1,1);
	insertAtTail(head1,0);
	insertAtTail(head1,12);
	printList(head1);
	cout << endl;
	// mergeSortLL(head1);
	Node* result_head = mergeSortLL(head1);
	printList(result_head);
	return 0;
}