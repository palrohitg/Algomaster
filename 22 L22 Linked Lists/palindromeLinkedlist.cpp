/*

	Approach 1: Using Stack
	1. Traverse the list R to L insert each element one by one in the stacks
	2. Again traverse the list from start and pop out each elements and check whether the elements match or not.
	3. If stack is empty and every elements match then return true
	4. Else return false

	TC : O(N) for traversing and pushing the element from stack + O(N) second traversal = O(N)
	SC : O(N) stack space

	Follow up optimizations :
	1. Could I do in O(N) and O(1) space


	METHOD 2 (By reversing the list)
This method takes O(n) time and O(1) extra space.
1) Get the middle of the linked list.
2) Reverse the second half of the linked list.
3) Check if the first half and second half are identical.
4) Construct the original linked list by reversing the second half again and attaching it back to the first half
*/


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
	bool isPalindrome(ListNode* head) {
		if (head == NULL || head->next == NULL) return true;
		stack<int> st;
		// Traverse the linklist and push the elments in the stack
		ListNode* start = head;
		ListNode* temp = head;
		while (start != NULL) {
			int data = start->val;
			st.push(data);
			start = start->next;
		}

		while (temp != NULL) {
			int ll_data = temp->val;
			int st_data = st.top();
			if (ll_data != st_data) {
				return false;
			}
			st.pop(); // pop out the elements
			temp = temp->next; // increment the pointers
		}
		return true;

	}
};


// Approaches :
// # Make some utiliy functions
// a. Reverse the linked list
// b. compare if two linked list are identical or not // head and second half pointer


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node {
	char data;
	struct Node* next;
};

void reverse(struct Node**);
bool compareLists(struct Node*, struct Node*);

/* Function to check if given linked list is
palindrome or not */
bool isPalindrome(struct Node* head)
{
	struct Node *slow_ptr = head, *fast_ptr = head;
	struct Node *second_half, *prev_of_slow_ptr = head;
	struct Node* midnode = NULL; // To handle odd size list
	bool res = true; // initialize result

	if (head != NULL && head->next != NULL) {
		/* Get the middle of the list. Move slow_ptr by 1
		and fast_ptrr by 2, slow_ptr will have the middle
		node */
		while (fast_ptr != NULL && fast_ptr->next != NULL) {
			fast_ptr = fast_ptr->next->next;

			/*We need previous of the slow_ptr for
			linked lists with odd elements */
			prev_of_slow_ptr = slow_ptr;
			slow_ptr = slow_ptr->next;
		}

		/* fast_ptr would become NULL when there are even elements in list.
		And not NULL for odd elements. We need to skip the middle node
		for odd case and store it somewhere so that we can restore the
		original list*/
		if (fast_ptr != NULL) {
			midnode = slow_ptr;
			slow_ptr = slow_ptr->next;
		}

		// Now reverse the second half and compare it with first half
		second_half = slow_ptr;
		prev_of_slow_ptr->next = NULL; // NULL terminate first half
		reverse(&second_half); // Reverse the second half
		res = compareLists(head, second_half); // compare

		/* Construct the original list back */
		reverse(&second_half); // Reverse the second half again

		// If there was a mid node (odd size case) which
		// was not part of either first half or second half.
		if (midnode != NULL) {
			prev_of_slow_ptr->next = midnode;
			midnode->next = second_half;
		}
		else
			prev_of_slow_ptr->next = second_half;
	}
	return res;
}

/* Function to reverse the linked list Note that this
    function may change the head */
void reverse(struct Node** head_ref)
{
	struct Node* prev = NULL;
	struct Node* current = *head_ref;
	struct Node* next;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
}

/* Function to check if two input lists have same data*/
bool compareLists(struct Node* head1, struct Node* head2)
{
	struct Node* temp1 = head1;
	struct Node* temp2 = head2;

	while (temp1 && temp2) {
		if (temp1->data == temp2->data) {
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else
			return 0;
	}

	/* Both are empty reurn 1*/
	if (temp1 == NULL && temp2 == NULL)
		return 1;

	/* Will reach here when one is NULL
	and other is not */
	return 0;
}
