// 160. Intersection of two linked list
/*
	Approaches :
	1. Make two pointers A and B
	2. If any nodes reaches to the ends then redirect changes the pointers
	example : A will be pointing to B list
			  B will be pointing to A list

*/


class Solution {
public :
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

		if (headA == NULL || headB == NULL) return NULL;

		ListNode* cur1 = headA;
		ListNode* cur2 = headB;
		// Iterate over the list in nodes
		while (cur1 != cur2) {
			if (cur1 != NULL) {
				cur1 = cur1->next;
			}
			else {
				cur1 = headB;
			}
			if (cur2 != NULL) {
				cur2 = cur2->next;
			}
			else {
				cur2 = headA;
			}
		}

		return cur1;
	}
};


class Solution {
public :
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
		ListNode *cur1 = headA, *cur2 = headB;
		while (cur1 != cur2) {
			cur1 = cur1 ? cur1->next : headB;
			cur2 = cur2 ? cur2->next : headA;
		}
		return cur1;
	}
};