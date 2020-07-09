#include<iostream>
using namespace std; 
class node {

	public :
		int data; 
		node * next;

		node(int d) {
			data = d;
			next = NULL;
		}
};

void inserAtTail(node*&head, int data) {
	// single node or head = null 
	if(head == NULL) {
		head = new node(data);
		return;
	}
	// already have at the insert at the last
	node * temp = head;
	while(temp->next != NULL) { // points to the last node
		temp = temp->next;
	}
	temp->next = new node(data);
}


void builtInInput(node*&head, int n ) {
	for(int i=0; i<n; i++) {
		int data;
		cin >> data;
		inserAtTail(head, data);
	}
}

node * mergeTwoList(node*&a, node*&b) {
	// base case 
	if(a == NULL) {
		return b;
	}
	if(b == NULL) {
		return a;
	}
	// make a current pointer
	// edges case might be two have the same node
	node * cur = NULL;
	if(a->data <= b->data) { // handle this case also 
		cur = a;
		cur->next = mergeTwoList(a->next , b);
	}
	if(b->data < a->data) {
		cur = b;
		cur->next = mergeTwoList(a , b->next);
	}
	return cur;
}

void print(node*head) {
	while(head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}	
}
int main() {

	int t;
	cin >> t;
	while(t--) {
		int N1, N2;
		cin >> N1;
		node* head1 = NULL;
		builtInInput(head1, N1);
		print(head1); 
		cout << endl;
		cin >> N2;
		node* head2 = NULL;
		builtInInput(head2, N2);
		print(head2); 
		cout << endl;
		
		// merge the two list 
		node* new_head = mergeTwoList(head1, head2);
		print(new_head);
	}
	return 0;
}













