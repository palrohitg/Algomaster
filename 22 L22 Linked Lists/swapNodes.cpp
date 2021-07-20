//  24. Swap Nodes in Pairs
/*
	tag : linked list + recursion
	approaches :
	case 1: when no nodes and single nodes then just return the nodes
	case 2: More than one nodes then just do the swapping
			and call recusively in the third part


	Follow up Questions :
	a. Can you do without modification the value present
	in the nodes ?
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
	ListNode* swapPairs(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;

		// two pointers prev and current to swap the two elements
		// in the linked list
		ListNode* prev = head;
		ListNode* cur = head->next;

		// Swapping logic
		int temp = prev->val;
		prev->val = cur->val;
		cur->val = temp;

		// call the recursion for the rest of the part
		swapPairs(cur->next);
		return head;
	}
};

// Java version of the codes
/*
	1. Call the recursion on the rest of the part
	2. Change the current pointers


*/
public ListNode swapPairs(ListNode head) {
	if ((head == null) || (head.next == null))
		return head;
	ListNode n = head.next;
	head.next = swapPairs(head.next.next);
	n.next = head;
	return n;
}
