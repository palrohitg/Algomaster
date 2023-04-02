#include<bits/stdc++.h>
using namespace std;

/*
	Node --> Arrow key is used accessed in the c++. 
*/

class Node { 
	public: 
		int data; 
		Node *next; 
		
		Node(int data) {
			this->data = data; 
			this->next = NULL; 
		}
}; 


void insertAtTail(Node *root, int data) {
	if (root == NULL) {
		root = new Node(data);
		return; 
	} 
	Node *newNode = new Node(data); 
	Node *temp = root; 
	while(temp->next != NULL) {
		temp = temp->next; 
	}
	temp->next = newNode; 
	return; 
} 

void printLL(Node *root) {
	Node *temp = root; 
	while(temp != NULL) {
		cout << temp->data <<  " "; 
		temp = temp->next; 
	}
	return; 
}

int main() {
	// Your code goes here; 
	cout << "Your program" << endl; 
	// Node *root = NULL; 
	// int i = 0; 
	// while (i < 5) { 
	// 	int data; cin >> data; 
	// 	insertAtTail(root, data); 
	// 	i++; 
	// } 
	// printLL(root); 
	return 0;
}