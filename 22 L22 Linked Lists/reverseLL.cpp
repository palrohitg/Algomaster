/*
	Approach : 1
	a. Iteratively implement the algorithms
	b. recursively implement the algorithms

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
	ListNode* reverseList(ListNode* head) {

		// we will make three pointer
		ListNode* cur = head;
		ListNode* prev = nullptr;
		ListNode* next = nullptr;

		while (cur ! nullptr) {
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}

		return prev;
	}
};


// Reverse Linked list - II part

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
	ListNode* reverseBetween(ListNode* head, int m, int n) {

		ListNode* con = nullptr;
		ListNode* temp = head;

		while (m > 1) {
			if (temp != nullptr) {
				con = temp;
				temp = temp->next;
			}
			n--;
			m--;
		}

		ListNode* prev = nullptr;
		ListNode* next = nullptr;
		ListNode* cur = temp;

		while (n > 0) {
			if (cur != nullptr) {
				next = cur->next;
				cur->next = prev;
				prev = cur;
				cur = next;
				n--;
			}
		}

		// connect the con and prev
		con->next = prev;
		if (cur != nullptr) {
			temp->next = cur;
		}
	}

	return head;
};