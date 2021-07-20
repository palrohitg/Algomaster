My first solution is an iterative one. One thing deserves discussion is whether we should create a new ListNode as a convenient way to hold the list. Sometimes, in industrial projects, sometimes it's not trivial to create a ListNode which might require many resource allocations or inaccessible dependencies (we need to mock them).

So ideally, we should pick up either the head of l1 or l2 as the head other than creating a new one, which however makes the initialization step tedious.

But during an interview, I would rather create a new ListNode as list holder, but communicate with the interviewer that I'm aware of the potential issue, and would improve it if he / she thinks this is a big deal.




public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
            ListNode head = new ListNode(0);
            ListNode handler = head;
            while (l1 != null && l2 != null) {
                if (l1.val <= l2.val) {
                    handler.next = l1;
                    l1 = l1.next;
                } else {
                    handler.next = l2;
                    l2 = l2.next;
                }
                handler = handler.next;
            }

            if (l1 != null) {
                handler.next = l1;
            } else if (l2 != null) {
                handler.next = l2;
            }

            return head.next;
        }
    }



public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode head = new ListNode(0);
        ListNode handler = head;
        while (l1 != null && l2 != null) {
            if (l1.val <= l2.val) {
                handler.next = l1;
                l1 = l1.next;
            } else {
                handler.next = l2;
                l2 = l2.next;
            }
            handler = handler.next;
        }

        if (l1 != null) {
            handler.next = l1;
        } else if (l2 != null) {
            handler.next = l2;
        }

        return head.next;
    }
}