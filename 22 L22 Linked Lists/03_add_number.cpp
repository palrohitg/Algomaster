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

int main()
{

    return 0;
}