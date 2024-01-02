// 328. Odd Even Linked Lists
/*
	* Easy to think but hard to code problems 
	* Even nodes after that odd nodes 
*/


class Solution {
public :
	ListNode* oddEvenList(ListNode* head)
	{
		if (!head) return head;
		ListNode *odd = head, *evenhead = head->next, *even = evenhead;
		while (even && even->next)
		{
			odd->next = odd->next->next;
			even->next = even->next->next;
			odd = odd->next;
			even = even->next;
		}
		odd->next = evenhead;
		return head;
	}
};