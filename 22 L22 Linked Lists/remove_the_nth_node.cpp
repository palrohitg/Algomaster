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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head, *prev = head; 
        ListNode* temp = head; 
        int i = 0; 
        
        while(cur != NULL and i < n) {
            cur = cur->next; 
            i++;
        }
        
        if (cur == NULL) {
            return head->next; 
        }
        
        while(cur != NULL) {
            prev = temp; 
            temp = temp->next;
            cur  = cur->next; 
            
        }
    
        // now head contains the nth node 
        prev->next = temp->next; 
        
        return head; 
    }
};
