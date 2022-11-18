```cpp 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // Base case 
        if (head == NULL or head->next == NULL) {
            return head; 
        }

        ListNode *slow = head; 
        ListNode *fast = head; 

        while(fast and fast->next) {
            fast = fast->next->next; 
            slow = slow->next; 
            if (slow == fast) {
                slow = head; 
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next; 
                }
                return slow; 
            }
        }

        return NULL; 
    }
};
```


```cpp 
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *cur = new ListNode(0); 
    ListNode *res = cur; 
    int sum = 0; 
    int carry = 0; 

    while(l1 != NULL || l2 != NULL) {
        int x = l1 != NULL ? l1->val : 0; 
        int y = l2 != NULL ? l2->val : 0;
        int sum = x + y; 
        int digit = sum % 10; 
        int carry = sum / 10; 
        cur->next = new ListNode(digit); 
        if (l1 != NULL) {
            l1 = l1->next; 
        }
        if (l2 != NULL) {
            l2 = l2->next; 
        }
    }

    if (carry > 0) {
        cur->next = new ListNode(carry); 
    }

    return res->next;
}
```

```cpp
// Reverse a linked list 
// Output : Return final value 

ListNode * cur = head
ListNOde *next, *prev; 
next = NULL, prev = NULL; 

while (cur != NULL) {
    next = cur->next;
    cur->next = prev; // To make it NULL pointers
    prev = cur; // To make it
    cur = next; 
}

return prev; 
```
```cpp
// Reverse alernates k nodes in linked list data structures 
Node *getResult(Node *node, int k, bool x) 
{
    if (node == NULL) 
    {
        return NULL;
    }
 
    int count = 1;
    Node *prev = NULL;
    Node *temp = node;
    Node *next = NULL;
 
    while (temp != NULL && count <= k) 
    {
        next = temp -> next;
 
        /* Reverse the nodes only if x is true*/
        if (x == true) 
        {
            temp -> next = prev;
        }
 
        prev = temp;
        temp = next;
        count++;
    }
 
    if (x == true) 
    {
        node -> next = getResult(temp, k, !x);
        return prev;
    } 
    prev -> next = getResult(temp, k, !x);
    return node;
}

```cpp    prev next 
      
1->4->4 <-2<-3<-4->5 5 7 454 33453 6 
m = 2, n = 4 
count = 1; 
while(temp != NULL)  {
    if (count < m) {
        temp = temp->next; 
        head_last = temp; 
        count++; 
        continue; 
    }
    if (count == m) {
        m_start = temp; 
    }
    if (count >= m and count <= n) {
        next = temp -> next; 
        temp->next = prev; 
        prev = temp;
        temp = next;
        count++; 
    } else {
        prev->next = next; 
        break; 
    }
}
head_last->next = m_start; 
return head;  

```cpp
      p  c    f   n
d->0->1->2->4 3- 4->5->6

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0); // created dummy node
        dummy->next = head;
        ListNode *prev = dummy; // intialising prev pointer on dummy node
        
        for(int i = 0; i < left - 1; i++)
            prev = prev->next; // adjusting the prev pointer on it's actual index
        
        ListNode *curr = prev->next; // curr pointer will be just after prev
        // reversing
        for(int i = 0; i < right - left; i++){
            ListNode *forw = curr->next; // forw pointer will be after curr
            curr->next = forw->next;
            forw->next = prev->next;
            prev->next = forw;
        }
        return dummy->next;
    }
};
```