## 1. Clone a Given Linked list

### Two Pointer Algorithm Blogs here: 
https://medium.com/javarevisited/13-two-pointer-problems-that-can-help-you-land-a-job-5eb2a502aa84


```cpp
LinkedList* clone()
{
	// Initialize two references,
	// one with original list's head.
	Node *origCurr = head;
	Node *cloneCurr = NULL;

	// Hash map which contains node
	// to node mapping of original
	// and clone linked list.
	unordered_map<Node*, Node*> mymap;

	// Traverse the original list and
	// make a copy of that in the
	// clone linked list.
	while (origCurr != NULL)
	{
		cloneCurr = new Node(origCurr->data);
		mymap[origCurr] = cloneCurr;
		origCurr = origCurr->next;
	}

	// Adjusting the original list
	// reference again.
	origCurr = head;

	// Traversal of original list again
	// to adjust the next and random
	// referordered_map<Node*, Node*> mymap;ences of clone list using
	// hash map.
	while (origCurr != NULL)
	{
		cloneCurr = mymap[origCurr];
		cloneCurr->next = mymap[origCurr->next];
		cloneCurr->random = mymap[origCurr->random];
		origCurr = origCurr->next;
	}

	// return the head reference of
	// the clone list.
	return new LinkedList(mymap[head]);
}
```


```cpp
Approach 2:
// Function to clone a linked list having random pointers
Node* cloneLinkedList(Node* head)
{
	/* 1. Create a duplicate of each node of the original linked list */

	// traverse the original linked list
	Node* curr = head;
	while (curr != nullptr)
	{
		// take a pointer to the next node in the original list
		Node* next = curr->next;

		// duplicate each node of the linked list
		Node* dup = new Node(curr->data);

		// associate each duplicate node with the next child of the original node
		curr->next = dup;
		dup->next = next;

		// advance to the next node in the original list
		curr = next;
	}

	/* 2. Update the random pointers of the duplicated nodes */

	// traverse the modified list
	curr = head;
	while (curr != nullptr)
	{
		// if a random pointer for the original node exists, set it for the clone
		if (curr->random != nullptr) {
			(curr->next)->random = (curr->random)->next;
		}

		// advance to the next node in the original list
		curr = (curr->next)->next;
	}

	/* 3. Extract the duplicate nodes from the modified list */

	// construct a dummy node whose next pointer points to the head
	// of the cloned linked list
	Node dummy;

	// maintain a tail node for the clone
	Node* tail = &dummy;

	// traverse the modified list
	curr = head;
	while (curr != nullptr)
	{
		// take a pointer to the next node in the original list
		Node* next = curr->next->next;

		// extract the duplicate
		Node* dup = curr->next;
		tail->next = dup;
		tail = dup;

		// restore the original linked list
		curr->next = next;

		// advance to the next node in the original list
		curr = next;
	}

	// return head node of the cloned list
	return dummy.next;
}

```

## 2. Detect Cycle in a LL 
```cpp
```

## 3. Merge two Sorted Linked List Using Recursions here 
```cpp
Node* mergeLinkedList(node *a, node *b) {
	if (a == NULL) {
		return b; 
	} 
	if (b == NULL) {
		return a; 
	} 

	Node* current = NULL; 
	if (a->data <= b->data) {
		current = a; 
		current->next = mergeLinkedList(a->next, b); 
	} 
	if (b->data <= b->data) {
		current = b; 
		current->next = mergeLinkedList(a, b->next);
	}
	return current; 
}
```

## 4. Even After Linked List
```cpp
- Create Odd Pointers 
- Create Event Node 
- Create EventHead 

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL || head->next->next == NULL) return head; 
        ListNode* odd = head;
        ListNode* even = head->next; 
        ListNode* evenHead = head->next;
        
        while(even != NULL and even->next != NULL) {
            odd->next = even->next; 
            odd = odd->next;
            even->next = odd->next;
            even = even->next; 
        }
        
        odd->next = evenHead; 
        
        return head; 
    }
};

```

## 5. Cycle Detection Using Floyd's Algorithms
```cpp 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // two pointer fast and slow and moves the slow pointers
        if (head == NULL) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) return true;
        }

        return false;
    }
};
```

## 6. Find the Nth Node from the linked List 
```cpp
// Use the Two Pointer Approach while using slow and fast pointers. 
Node* RemoveTNthNode(Node* head, int n) {
	Node* slow = head, *fast = head;
	while(n--) {
		fast = fast->next
	} 
	if (fast == NULL) {
		return slow->next; // if this is the Nth means the first node that we want to delete 
	} 
	while(fast->next != NULL) {
		slow = slow->next;
		fast = fast->next; 
	}
	slow->next = slow->next->next; // This is the safe check when you have to remove the elements just increase the counter you have in the systems  
	return head; 
}
```