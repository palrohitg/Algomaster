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


/*

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

*/