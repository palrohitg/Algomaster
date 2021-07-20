/*

	TC : O(n / 2)
	SC : Constant



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
	ListNode* middleNode(ListNode* head) {

		// fast null  then it means even number of nodes
		// fast not null and it points to last element of the nodes then total odd number
		// odd nodes are there


		// When head is null return null
		if (head == NULL) return NULL;

		// When only one node
		if (head->next == NULL) return head;

		ListNode* slow = head;
		ListNode* fast = head;

		// n/2 iteration while slow reaches to n/2
		while (fast != NULL and fast->next == NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}
};