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
	/*
		Simple slow and fast pointer appraoch and fast pointer appraoch se slow kardena hai esse hai. 
	*/
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


## 7. Tree Questions
```cpp
void top_view(TreeNode *node, map<int, pair<char,int>>& m, int dist, int level)
{
    if (node == NULL)
       return;
    if (m.count(dist) == 0 || m[dist].second > level)
        m[dist] = make_pair(node->val, level);

    top_view(node->left, m, dist-1, level + 1);
    top_view(node->right, m, dist+1, level + 1);
}

void bottom_view(TreeNode *node, map<int, pair<char,int>>& m, int dist, int level)
{
    if (node == NULL)
       return;
    if (m.count(dist) == 0 || m[dist].second < level)
        m[dist] = make_pair(node->val, level);

    bottom_view(node->left, m, dist-1, level + 1);
    bottom_view(node->right, m, dist+1, level + 1);
}
```


## Merge k sorted arrays (Priority Queues) Questions: 

```cpp
#include <iostream>
#include <vector>
#include <queue>

using namespace std;



/*
	struct Element {
		int data; 
		int arrayIndex;
		int elementIndex; 

		Element(int v, int ai, int ei) : value(v), 
		arrayIndex(ai), elementIndex(ei) {}


		bool operator > (const Element &other) const {
			return value > other.value; 
		}

	}; 

*/ 



// value, arrayIndex, ElementIndex 

struct Element {
    int value;
    int arrayIndex;
    int elementIndex;

    // Constructor to initialize the struct
    Element(int v, int ai, int ei) : value(v), arrayIndex(ai), elementIndex(ei) {}

    // Overload operator < for min-heap comparison
    bool operator>(const Element& other) 45 {
        return value > other.value;
    }
};

// Find the smallest elements that why we are using the minheap data structures 
vector<int> mergeKSortedArrays(vector<vector<int>>& arrays) {
    int k = arrays.size();
    vector<int> mergedResult;
    
    // Create a min-heap of size K
    priority_queue<Element,vector<Element>greater<Element>>minHeap;
    
    // Push the first element from each array into the min-heap
    for (int i = 0; i < k; ++i) {
        if (!arrays[i].empty()) {
            minHeap.push(Element(arrays[i][0], i, 0)); // first elements s
        }
    }
    
    while (!minHeap.empty()) {
        // Pop the element with the smallest value
        Element smallest = minHeap.top();
        minHeap.pop();
        
        // Add it to the merged result
        mergedResult.push_back(smallest.value); // merge inserts 
        
        // Push the next element from the same array into the min-heap 
		// elements ka indexes is samller then the current values here find the new changes for the new elements find the arrays to discussing the same  
		// checking if the elements exists in the arrays or not ? if someone says yes the elements exists in the arrays then push that elements  into the min-heap
		// next elements, next element index + 1 
        if (smallest.elementIndex + 1 < arrays[smallest.arrayIndex].size()) {
			// Just Increase the length of the arrays we have now in the index 
			// elements + 1, 
			// smallest.elementIndex + 1, 
            minHeap.push(Element(arrays[smallest.arrayIndex][smallest.elementIndex + 1], smallest.arrayIndex, smallest.elementIndex + 1));
        }
    }
    
    return mergedResult;
}

int main() {
    vector<vector<int>> arrays = {
        {1, 3, 5},
        {2, 4, 6},
        {0, 7, 8, 9}
    };
    
    vector<int> merged = mergeKSortedArrays(arrays);
    
    cout << "Merged K sorted arrays: ";
    for (int num : merged) {
        cout << num << " ";
    }
    
    return 0;
}

``` 



## Design Pattern 
https://write.agrevolution.in/software-designs-principles-16bf4d025bab 


## Striver Questions Need to think Implementation Appraoch  
## Binary Search Questions 
## Both in C++ + Python Code 
 


## Priority Queue  

#### 1. Kth Largest Elements 
```cpp
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minh; 

        for (int i = 0; i < k; i++) {
            minh.push(nums[i]); 
        }

        for (int i = k; i < nums.size(); i++) {
            int topElement = minh.top(); 
            if (topElement < nums[i]) {
                minh.pop();
                minh.push(nums[i]); 
            }
        }

        return minh.top(); 
    }
};
``` 

### Maximum Meeting In One Room 

```cpp
// C++ program to find maximum number of meetings
#include <bits/stdc++.h>
using namespace std;

// Function for finding maximum meeting in one room
void maxMeetings(int s[], int f[], int N)
{
	pair<int, int> a[N + 1];
	int i;
	for (i = 0; i < N; i++) {
		a[i].first = f[i];
		a[i].second = i;
	}

	// Sorting of meeting according to their finish time.
	sort(a, a + N);

	// Time_limit to check whether new
	// meeting can be conducted or not.
	int time_limit = a[0].first;

	// Vector for storing selected meeting.
	vector<int> m;

	// Initially select first meeting.
	m.push_back(a[0].second + 1);

	// Check for all meeting whether it
	// can be selected or not.
	for (i = 1; i < N; i++) {
		if (s[a[i].second] > time_limit) {
			// Push selected meeting to vector
			m.push_back(a[i].second + 1);

			// update time limit
			time_limit = a[i].first;
		}
	}

	// Print final selected meetings.
	for (int i = 0; i < m.size(); i++) {
		cout << m[i] << " ";
	}
}

// Driver's code
int main()
{
	// Starting time
	int s[] = { 1, 3, 0, 5, 8, 5 };

	// Finish time
	int f[] = { 2, 4, 6, 7, 9, 9 };

	// Number of meetings.
	int N = sizeof(s) / sizeof(s[0]);

	// Function call
	maxMeetings(s, f, N);

	return 0;
}

```