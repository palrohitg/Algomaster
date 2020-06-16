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
		return head1;
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

// function take will take the inputs the end while the -1 is encountered

void builtLL(Node *&head, int n) {
	int data;
	//cin >> data;
	int i=0;
	while(i < n) {
		cin >> data;
		insertAtTail(head,data);
		i++;
	}
}

Node* mergeSortLL(Node*&head) {
	// base case  single node
	if(head == NULL || head->next == NULL) {
		return head;
	}
	Node * mid = middlePoint(head); 
	Node * b_head = mid->next;
	mid->next = NULL;
	// Recursive case
	Node * head1 = mergeSortLL(head);
	Node * head2 = mergeSortLL(b_head);
	return mergeList(head1, head2);
}

// print the list


int main() {
	// Node * head1 = NULL;
	// insertAtHead(head1, 1);	
	// insertAtTail(head1, 4);
	// insertAtTail(head1, 7);
	// insertAtTail(head1, 9);
	// printList(head1);
	// cout << endl;
	// Node * head2 = NULL; 
	// insertAtHead(head2, 0);
	// insertAtTail(head2, 3);
	// insertAtTail(head2, 30);
	// printList(head2);
	// cout << endl;
    // merge two sorted list
	// Node*new_head = mergeList(head1, head2);
	// printList(new_head);
	// cout << endl;


	// mergeSortLL(head1);
	// Node* result_head = mergeSortLL(head1);
	// printList(result_heaexid);

    // Node * head = NULL; 
    // insertAtHead(head, 2);
    // insertAtTail(head, 0);
    // insertAtTail(head, 12);
    // insertAtTail(head, 10);
    // insertAtTail(head, 9 );
    // insertAtTail(head, 5);
    // cout << "originals list : " << endl;
    // printList(head);
    // cout << endl;
    // Node * new_head = mergeSortLL(head);
    // cout << "Result list :" << endl;  
    // printList(new_head);
    // cout << endl;

     Node *head = NULL; 
     builtLL(head,9);
     printList(head);
	return 0;
}