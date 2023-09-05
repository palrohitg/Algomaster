/*
1. Even odd linked list
2. find the shortes path between the algorithms
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

// Even-After-Odd problem
node * evenAfterOdd(node *&head) {

	//Base case if one or zero node
	if (head == NULL || head->next == NULL) {
		return head;
	}

	// Recursive Case
	node *small_head = evenAfterOdd(head->next);

	// First node is even and second is odd then replace it
	if (head->data % 2 == 0 && small_head->data % 2 != 0) {
		int head_data = head->data;
		int small_data = small_head->data;
		head->data = small_data;
		small_head->data = head_data;

	}
	// head will point to next node
	head->next = small_head;

	return head;
}

// Find the elements are going to have to even and odd

void printLL(node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL || head->next->next == NULL) return head; 
        ListNode* odd = head;
        ListNode* even = head->next; 
        ListNode* evenHead = head->next;
        
        while(even != NULL and even->next != NULL) {
            odd->next = even->next; 
            odd = odd->next;
            even->next = odd->next;
            even = even->next; 
        }
        
        odd->next = evenHead; 
        
        return head; 
    }
};


int main() {
	node * head = NULL;
	builtInInput(head , 5);
	node* result_head = evenAfterOdd(head);
	printLL(result_head);
	return 0;
}
