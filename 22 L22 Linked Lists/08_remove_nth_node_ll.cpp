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
    
    int lengthOfLinkedList(ListNode *head) {
        int size = 0; 
        while(head != NULL) {
            size++; 
            head = head->next; 
        }
        return size; 
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = lengthOfLinkedList(head); 
        int count = 1;
        ListNode* temp = NULL; 
        
        // Corner Case: Where n is greater 
        if (n > length) {
            return temp; 
        }
     
        while(count < length-n && head != NULL) {
            count++ 
            head = head->next; 
            temp = head; 
        }
        
        // Now swap values 
        if (temp->next != NULL and temp->next->next != NULL) {
            temp->next = temp->next->next; 
        }
    
        if (head == NULL) {
            return temp; 
        }
        
        return head; 
    }
};