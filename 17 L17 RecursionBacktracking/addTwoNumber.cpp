class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		int num1 = 0;
		int num2 = 0;

		while (l1 != NULL) {
			num1 = num1 * 10 + l1->val;
			l1 = l1 => next;
		}


		while (l2 != NULL) {
			num2 = num2 * 10 + l2->val;
			l2 = l2 => next;
		} 

		int ans = num1 + num2; 

		// Now make a new node 
		ListNode* head = NULL; 
		
	}
};