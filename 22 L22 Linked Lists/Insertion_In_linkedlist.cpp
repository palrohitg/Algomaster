/*
	Linked list :
		- LL is DS where you can store the elements like a arrays but the memory consumed is not contigous.
		- Each node have the different indexes or address but the things we have to connect this address


*/

/*
	Insertion in linked list :
		- at head (head insertion)
		- at middle (After which positions u need to insert the nodes)
		- at tails (tails inseration)

	// Two approaches here
	* Functional approaches
	* Class approaches like linkedlist class

	Operation That will will Coverd :
		- Insertion at head, middle, tails with edges cases
		- Deletion at all places
		- Searching of elements
		- Taking input using the operator overloding
		- Reverse the linked list Iteration/Recursions
		- Midpoint of LL Also called the Runner Techniques useful in many problems
		- Midpoint Runner Technique
		- Opertor Overloading taking two LL using << >>
		- Builtin functions to take the inputs
		- Iteratively solve the Merge the two sorted list

*/

// One is data , Ptr to the next node

#include<iostream>
using namespace std;

class Node {

public :
	int data;
	Node *next;

	// Node
	Node(int d) {
		data = d;
		next = NULL;
	}
};

// Insert at the head tricks is head is always NULL
// NOTE : Here  the head  points remains null bcoz we are passing by values not by the address
// Pass by reference if you want the changes to reflected to main functions then you must pass by references

void insertAtHead(Node*&head, int data) {

	Node *n = new Node(data);
	n->next = head;
	head = n;
}


int length(Node*head) {
	int count = 0;
	while (head != NULL) {
		head = head->next;
		count += 1;
	}
	return count;
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

// Merge the two sorted list and return the head of newly sorted LL
	// Node * MergeLL(Node*a , Node*b) {
	// 	// if a is NULL 
	// 	if(a == NULL) {
	// 		return b;
	// 	}

	// 	if(b == NULL) {
	// 		return a;
	// 	}

	// 	Node*c;
	// 	if(a->data > b->data) {
	// 		c = a;
	// 		c->next = MergeLL(a->next, b);
	// 	}
	// 	else {
	// 		c = b;
	// 		c->next = Merge(a, b->next);
	// 	}

	// 	return c;
	// }



// take the data , pos and head
void insertAtMiddle(Node*&head, int data , int pos) {

	// if its the first node or pos = 0
	if (head == NULL || pos == 0) {
		insertAtHead(head, data);
	}
	// pos is not exits then insert at last
	else if (pos > length(head)) {
		insertAtTail(head, data);
		//cout << "Insert at tails";
	}
	// Insert at the middle one
	else {
		// take p-1 jump
		Node *temp = head;
		int jump = 1;
		while (jump <= pos - 1) {
			temp = temp->next;
			jump++;
		}
		Node*n = new Node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

// Pass by reference actually change the address of the pointer

void deleteAtHead(Node*&head) {
	if(head == NULL) {
		return;
	}
	Node*temp = head;
	head = head->next;
	delete temp;
	return;
}


void deleteAtTails(Node*&head) {
	// if no nodes
	if(head == NULL) {
		return;
	}
	// if single node
	else if(head->next == NULL) {
		deleteAtHead(head);
	}
	else {
		Node*temp = head;
		Node*prev = NULL;

		while(temp->next != NULL) {
			prev = temp;
			temp = temp->next;
		}
		prev->next = NULL;
		delete tempvoid insertAtTail(Node*&head, int data) {

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
	
}	}
}

void deleteAtMiddle(Node*&head, int pos) {

	// No node
	if(head == NULL) {
		return;
	}
	// Single node
	else if(head->next == NULL) {
		deleteAtHead(head);
	}

	// pos not exits 
	else if(pos > length(head)) {
		deleteAtTails(head);
	}

	else {

		Node*temp = head;
		Node*prev = NULL;
		int jump=1;
		while(jump <= pos-1) {
			prev = temp;
			temp = temp->next;
			jump++;
		}

		prev->next = temp->next;
		delete temp;
	}

}

// Built in function to Taking the inputs of LL
void builtLL(Node *&head) {
	int data;
	cin >> data;

	while(data != -1) {
		insertAtTail(head,data);
		cin >> data;
	}
}
bool search(Node*head, int key) {
	while(head != NULL) {
		if(head->data == key) {
			return true;
		}
		else {
			head = head->next;
		}
	}
	return false;
}

bool recuriveSearch(Node*head, int key) {

	// Base case
	if(head == NULL) {
		return false;
	}

	// check on first 
	if(head->data == key) {
		return true;
	}
	else {
		return recuriveSearch(head->next,key);
	}
}


// Midpoint using Runner technique Used in many problems

void midPoint(Node*head) {
	Node*fast = head;
	Node*slow = head;

	while(fast->next != NULL && fast!=NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}

	Node*mid = slow;

	cout << "Mid-Point is " << mid->data;
}

Node* middlePoint(Node*head) {
	if(head == NULL || head->next == NULL) {
		return head;
	}

	Node*fast = head->next;
	Node*slow = head;

	while(fast->next != NULL && fast != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

void print(Node *head) {
	Node*temp = head;
	while (temp != NULL) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
}

// Pass by address because we want to change the head postions
void reverselList(Node*&head) {
	Node *Cur = head;
	Node *prev = NULL;
	Node *N = NULL;
	while (Cur != NULL) {
		N = Cur->next;
		Cur->next = prev;
		prev = Cur;
		Cur = N;
	}
	head = prev;
}

// Return the head of the Reverse Linked list
Node* reverselListRec(Node*&head) {
	//base case
	 if(head->next == NULL || head == NULL) {
	 	return head;
	 }

	//recursive case
	Node *smallHead = reverselListRec(head->next);
	Node *cur = head;
	cur->next->next = cur;
	cur->next = NULL;
	return smallHead;
}
int main() {
	Node *head = NULL;
	//node * = new Node;
	// insertAtHead(head, 5);
	// insertAtHead(head,6);
	// insertAtTail(head,7);				
	// insertAtMiddle(head,10,10); // pos is > then len it will add at the last 
	// // cout << endl;
	// // deleteAtTails(head);
	// // print(head);
	// // cout << endl;
	// // deleteAtHead(head);
	// // print(head);
	// insertAtHead(head,1);
	// insertAtHead(head,2);
	// print(head);
	// //deleteAtMiddle(head,3);
	// cout << endl;
	// print(head);
 //    cout << endl;
	// // if(recuriveSearch(head,11)) {
	// // 	cout << "data is present";
	// // }
	// // else {
	// // 	cout << "data is not present";
	// // }

	// // reverselList(head);
	// // print(head);
	// // cout << endl;
 // //    head = reverselListRec(head);
 // //    print(head);
 //    //midPoint(head);
 //    Node*m = middlePoint(head);
 //    cout << m->data;
 //    cout << endl;
 //    midPoint(head);

	builtLL(head);
	print(head); // actually changes the pointer of head

	return 0;
}