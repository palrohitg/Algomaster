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