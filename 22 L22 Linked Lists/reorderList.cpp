// 143. Reorder list
/*
	Approach :
	1. Find the middle element of LL using Runner techniques
	2. Reverse the second half
	3. Make a new list by arranges the two linked list
	4. finally return the resultant ll


	TC : O(N)
	SC : O(1)




*/
class Solution {
public:

	ListNode* reverseLL(ListNode* head) {


		ListNode* prev = NULL;
		ListNode* cur = head;
		ListNode* next = NULL;

		while (cur != NULL) {
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}

		return prev;
	}

	void printLL(ListNode* head) {

		ListNode* temp = head;

		while (temp != NULL) {
			cout << temp->val << " ";
			temp = temp->next;
		}
		cout << endl;
		return;
	}

	void reorderList(ListNode* head) {

		if (head == NULL or head->next == NULL or head->next->next == NULL) return;

		// Middle elements of the linked list
		ListNode* slow = head;
		ListNode* fast = head;
		ListNode* prev = NULL;
		while (fast != NULL and fast->next != NULL) {
			prev = slow;
			slow = slow->next;
			fast = fast->next->next;
		}
		prev->next = NULL;

		// Reverse the second half of the list
		ListNode* p2 = reverseLL(slow);

		ListNode* p1 = head;
		printLL(p1);
		printLL(p2);
		// Arranges the first and second hal?fs
		while (p2 != NULL) {
			ListNode* next = p1->next;
			p1->next = p2;
			p1 = p2;
			p2 = next;
		}

	}
};