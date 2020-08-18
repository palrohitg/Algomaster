#include<iostream>
using namespace std;

/*
	1. Make two list one is sorted list and unsorted list
	2. Insert the element in the sorted list parts 
	3. space complexity is constant because we are not using any extra space  
	
*/

class Solution {

	public : 
		
		ListNode * insertionSort(ListNode* head) {
			
			ListNode* cur = head;
			ListNode* sorted_head = NULL;
			
			while(cur != NULL) {
			
				sorted_head = sortedInsert(sorted_head, cur);
				cur = cur->next;
			
			}		
		}
		
		ListNode* sortedInsert(ListNode* sorted_head, ListNode* new_node) {
		
			// when there is no node and node data is very small then insert in the first place and return the node  
			if(sorted_head == NULL or sorted->data >= new_node->data) {
				new_node->next = sorted_head;
				return new_node;
			}
			else {
				// iterate over list and insert in the correct positions of the node
				ListNode* cur = sorted_head;// inplace changing the position of the arrays 
				while(cur->next != NULL and cur->next->data <= new_node->data) {
					cur = cur->next;
				}
				new_node->next = cur->next;
				cur->next = new_node;
			}
			return sorted_head;
		}



};


int main() {



	return 0;
}
