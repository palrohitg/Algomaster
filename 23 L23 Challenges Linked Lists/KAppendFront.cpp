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
		cout << head->data << " ";
		head = head->next;
	}
}

node * kAppendLL(node*&head, int N, int K) {
	if (K > N) {
		K = K % N;
	}

	if ( K < N) {
		node * cur = head;
		node * k_head = NULL;
		node *temp = NULL;
		int before_k = N - K;
		int count = 1;
		while (count <= before_k - 1) {
			// make the cur to point to the kth-1 elements
			cur = cur->next;
			count++;
		}

		k_head = cur->next;
		cur->next = NULL;
		temp = k_head;

		while (temp->next != NULL) {
			// point to the last elements
			temp = temp->next;
		}
		temp->next = head;
		head = k_head;
	}
	return head;
}

// Return the head of the newly linked list
// node * kAppendLL(node*&head, int n, int k) {

// 	k = n - k + 1;
// 	int count = 1;
// 	node *k_head = head;
// 	node *prev = NULL;
// 	while(count <= k - 1) {
// 		// move to the k-head
// 		prev = k_head;
// 		k_head = k_head->next;
// 		count = count + 1;
// 	}
// 	prev->next = NULL;
// 	node * temp = NULL;
// 	temp = k_head;
// 	while(temp->next != NULL) {
// 		temp = temp->next;
// 	}

//  	temp->next = head;

//  	return k_head;
// }
int main() {
	int N, K;
	cin >> N;
	node *head = NULL;
	// take the inputs
	builtInInput(head, N);
	// cout << endl
	cin >> K;
	node * result_head = kAppendLL(head, N, K);
	printLL(result_head);
	return 0;
}