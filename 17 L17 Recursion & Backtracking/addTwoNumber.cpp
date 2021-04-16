class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		int num1 = 0;
		int num2 = 0;

		while (l1 != NULL) {
			num1 = num1 * 10 + l1->val;
			l1 = l1 => next;
		}
	}
};