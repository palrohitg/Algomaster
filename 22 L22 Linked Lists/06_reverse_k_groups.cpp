// 1 2 3 4 5 6 7 
// 7 1 2 3 4 5 6 
// 6 7 1 2 3 4 5  


// Trapping Rain Water Most Important Questions 
/*
    Trapping Rain Water In the Arrays: 
    


    Reverse Node in K Groups: 
    1. 
    

*/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(!head)
            return NULL;
        ListNode *KSizeChecker = head;
        for(int i=0;i<k;i++)
        {
            if(KSizeChecker==NULL)
                return head;
            KSizeChecker = KSizeChecker->next;
        }
        int cnt=0;
        ListNode *cur=head,*prev=NULL,*next=NULL;
        while(cur and cnt<k)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            cnt++;
        }
        if(next)
            head->next=reverseKGroup(next,k);
        return prev;
    }
};


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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cursor = head;
        // Base case to handle when we don't want to reverse the nodes  
        // Condition when recursive functions calls happens to solve the problems
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* nxt = nullptr;
        for(int i = 0; i < k; i++){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};

/*
 Recursion function will be called again to solve this problems agains. 


 - Simply Performs the reverse operation on the linked lists 
 - Then do the recursive call where 
    
    while(count < k && current != NULL) {
        Do the reverse linked list stuff here 
        finally increase the counts the variables.
    }
    
    
    head->next = reverse(next, k) 

    return prev 

    TC : O(N) Traversal of elements of linked lits only once 
    SC : O(N/K) recursive call that we making in the each steps 



Find the Nth Node from End of the linked Lists: 
    1. 
    2. 

*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};