// Insertions using the Linked list 

#include<iostream>
using namespace std;

class node {

public :
	int data;
	node * next;

	// Constructor
public :
	
	node(int d){
		data = d;
		next = NULL;
	}
};

void ins(node*&head, int data) {
	// no node 
	if(head == NULL) {
		head = new node(data);
		return;
	}

	// if other node exits 
	node * temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = new node(data);

}

void printList(node*head) {
	
	while(head->next != NULL) {
		cout << head->data << "-->"	;
		head = head->next; 
	}
	// last element
	cout << head->data;
}


// Return true or false where the number is palindrome or not
bool palindrome(node*head) {
	int num = 0;
	int p = 10;
	node * cur = head;
	node * prev  = NULL;
	node * next = NULL;
	int reverse_num = 0;
	while(head != NULL) {
		num = num + head->data;
		num = num * p;
		head = head->next;
	}
	num = num/10;

	// Reverse the number 
	while(cur!= NULL) {
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}

	// finally the prev is points to reverse head;
	while(prev != NULL) {
		reverse_num = reverse_num + prev->data;
		reverse_num = reverse_num * p;
		prev = prev->next;
	}
	reverse_num = reverse_num/10;
	
	// now compare both original and reverse numbers
	if(num == reverse_num) {
		return true;
	}

	return false;
}

void insertionSort(node * &head) {	
	node *cur_head = cur_head->next;
	while(cur_head != NULL) {
		int data = cur_head->data;
		node *prev = head;
		while(     prev->data > data) {
			// swapping the element data
			prev->data = prev->next->data;
		    // move in backword directions 

			// Question prev should move in backword directions 
		}
	}
}

int main() {


	node * head = NULL;
	int n;
	cin >> n;
	while(n--) {
		int data;
		cin >> data;
		ins(head, data);
	}


	return 0;
}