// Cycle detection and removal parts






/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
a. Distance travelled by fast
b. Distance travelled by slow
c. Distance travelled by know


 x1 + x2 + x3 + x2 = 2(x1 + x2) // slow the equations
 x1 = x3

*/



class Solution {
public:
	ListNode *detectCycle(ListNode *head) {

		if (head == NULL || head->next == NULL) return NULL;

		ListNode* firstp = head;
		ListNode* secondp = head;
		bool isCycle = false;

		while (firstp != NULL && secondp != NULL) {
			firstp = firstp->next;
			if (secondp->next == NULL) return NULL;
			secondp = secondp->next->next;
			if (firstp == secondp) { isCycle = true; break; }
		}

		if (!isCycle) return NULL;
		firstp = head;
		while ( firstp != secondp) {
			firstp = firstp->next;
			secondp = secondp->next;
		}

		return firstp;
	}
};











#include<iostream>
using namespace std;


class Node {


public :

	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};



void insertAtEnd(Node *&head, int data) {

	// base case
	if (head == NULL) {
		head = new Node(data);
		return;
	}

	Node *temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = new Node(data);
	return;
}



Node * buildLinkedList() {

	int data; cin >> data;
	Node *head = NULL;

	while (data != -1) {
		insertAtEnd(head, data);
		cin >> data;
	}

	return head;
}


bool cycleDetection(Node *head) {

	Node *slow = head;
	Node *fast = head;

	while (fast != NULL and fast->next != NULL) {

		fast = fast->next->next;
		slow = slow->next;

		if (fast->data == slow->data) {
			return true;
		}
	}
	return false;
}



void reverseList(Node *&head) {

	Node *cur = head;
	Node *nextNode = NULL;
	Node *prev = NULL;

	while (cur != NULL) {
		nextNode = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nextNode;
	}

	head = prev;
	return;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node *head = buildLinkedList();
	if (cycleDetection(head)) {
		cout << "yes";
	}
	else {
		cout << "No";
	}

	return 0;
}

