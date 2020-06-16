// find the intersection node of the two linked list 
/*
	 - Single Intersection points of the node
	 - If not intersecting the return -1
	 - Find the optimial solution of the node

	5
	10 20 30 40 50
	4
	15 25 40 50 
	
	40

	Solution :
	1. Take the difference of the counts of both the node 
	2. Traverse the biggest node from the difference 
	3. now traverse both one by one and finally you will meet at one intersection points 
	Brute-Force Approaches the O(mn) 

	// Firstly make the Y-Shape linked list
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

// Find the length of the Linked list
int countLength(node*head) {
	count=0;
	while(head!=NULL) {
		count++;
		head = head->next;
	}
	return count;
}
// first intersection points return the data parts else return -1
// int intersectionPoints(node*&head1, node*& head2) {
// 	int c1 = countLength(head1);
// 	int c2 = countLength(head2);
// 	int d = abs(c1 - c2);

// 	if(c1 > c2) {
// 		// node * temp1 = head1;
// 		int head1_count = 0;
// 		while(head1_count < d) {
// 			head1 = head1->next;
// 			head1_count++;
// 		}
// 	}
// 	else {
// 		int head2_count = 0;
// 		while(head2_count < d) {
// 			head2 = head2->next;
// 			head2_count;
// 		}
// 	}

// 	while
// }

void y_shape_linked_list(node*&head1, node*& head2) {
		int l1 = countLength(head1);
		int l2 = countLength(head2);
		for(int i=0; i<l1; i++) {
			for(int j=0; j<l2; j++) {
				if(head1->data)
			}
		}
	
}
void printLL(node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

int main() {
    node* head1 = NULL;
    node* head2 = NULL;
    builtInInput(head1, 5);
    builtInInput(head2 , 4);
	cout << intersectionPoints(head1, head2);
	return 0;
}