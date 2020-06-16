// // Linked list skeleton 

// /*
// 	Albert Einstein : “If you can’t explain it simply, you don’t understand it well enough.”

// */



// /*

//  Reverse the linked list in the groups order

// */
// #include<iostream>
// using namespace std;

// class node {
// public :
// 	int data;
// 	node *next;


// 	node(int d) {
// 		data = d;
// 		next = NULL;
// 	}
// };


// void insertAtTails(node *&head, int data) {
// 	if (head == NULL) {
// 		// insert at head
// 		head = new node(data);
// 		return;
// 	}

// 	node *temp = head;
// 	while (temp->next != NULL) {
// 		temp = temp->next;
// 	}

// 	// insert at head
// 	temp->next = new node(data);

// }

// void builtInInput(node *&head, int n) {

// 	for (int i = 0; i < n; ++i)
// 	{
// 		int data;
// 		cin >> data;
// 		insertAtTails(head, data);
// 	}
// }


// void printLL(node *head) {
// 	while (head != NULL) {
// 		cout << head->data << "-->";
// 		head = head->next;
// 	}
// }

// int main() {

// 	node *head = NULL;
// 	int n;
// 	cin >> n;

// 	return 0;
// }


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

node * reverseLL(node *&head, int K) {
	node *cur = head;
	node *prev = NULL; 
	node *next = NULL;
	int count = 0;

	while( cur != NULL && count < K) {
		 next = cur->next;
		 cur->next = prev;
		 prev = cur;
		 cur = next;
		 count++;
	}

	if(cur != NULL) {
		head->next =  reverseLL(cur, K);
	}

	return prev; 
}

void printLL(node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}


int main() {
	int N, K;
	cin >> N >> K;
	node *head = NULL;
	cout << "Enter the list elements :" << endl;

	builtInInput(head, N);
	cout << endl;
	node * result_head = reverseLL(head, K);
	cout << result_head->data;
	
	return 0;
}