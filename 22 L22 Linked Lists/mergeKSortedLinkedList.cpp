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

//I believe it's O(n*log(k)) based on that definition of n (same definition I used as well). Each pass is O(n), and there are O(log(k)) passes because you are halving the number of lists each time, just as in mergesort.
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		// check one linked list null
		if (l1 == NULL) {
			return l2;
		}
		if (l2 == NULL) {
			return l1;
		}

		ListNode* dummy = new ListNode(0);
		ListNode* tail = dummy;

		while (l1 and l2) {
			if (l1->val <= l2->val) {
				tail->next = l1;
				l1 = l1->next;
			}
			else {
				tail->next = l2;
				l2 = l2->next;
			}
			tail = tail->next;
		}

		// Check of NULL case
		if (l1 != NULL) {
			tail->next = l1;
		}
		if (l2 != NULL) {
			tail->next = l2;
		}

		return dummy->next;
	}

	// Merge K sorted Linked List
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		// Base Case when the nodes is null
		// the nodes and improve the elements
		if (lists.empty()) {
			return NULL;
		}
		int len = lists.size();

		while (lists.size() > 1) {
			for (int i = 0; i < len / 2; i++) {
				lists[i] = mergeTwoLists(lists[0], lists[len - 1 - i]);
			}
			len = (len + 1) / 2;
		}
		return lists.front();
	}

};