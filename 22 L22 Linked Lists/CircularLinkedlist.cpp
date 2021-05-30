/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
	Node* copyRandomList(Node* head) {
		Node * temp = head;
		while (temp != NULL) {
			// create new node
			Node * n = new Node(temp->val);
			n->next = temp->next;
			temp->next = n;
			temp = n->next;
		}

		temp = head;
		// arrange the random pointers
		while (temp != NULL) {
			if (temp->random != NULL) {
				temp->next->random = temp->random->next;
			}
			temp = temp->next->next;
		}

		// create the new head final clone lists
		temp = head;
		Node * new_head = NULL, * new_tail = NULL;
		while (temp != NULL) {
			Node* copy = temp->next;
			if (new_head == NULL) {
				new_head = copy;
				new_tail = copy;

				temp->Next  = copy->next;
			}
			else {
				temp->next = copy->next;
				copy->next = NULL;
				new_tail->next = copy;
				new_tail = copy;
			}
			temp = temp->next;
		}

		return head2;
	}
};


class Solution {
public:
	Node* copyRandomList(Node* head) {
		Node * head_cp = nullptr, * cur = head, * cur_cp = nullptr;
		if (head == nullptr)
			return nullptr;
		while (cur != nullptr)
		{
			cur_cp = new Node(cur->val, cur->next, nullptr);
			cur->next = cur_cp;
			cur = cur_cp->next;
		}
		cur = head;
		while (cur != nullptr)
		{
			cur_cp = cur->next;
			if (cur->random)
				cur_cp->random = cur->random->next;
			cur = cur_cp ->next;
		}
		cur = head;
		head_cp = head->next;
		while (cur != nullptr)
		{
			cur_cp = cur->next;
			cur->next = cur_cp->next;
			cur = cur->next;
			if (cur)
				cur_cp->next = cur->next;
		}
		return head_cp;
	}
};


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