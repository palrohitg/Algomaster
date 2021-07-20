class Node {
public :
	int val;
	Node* next;

	Node(int val) {
		this->val = val;
		next = NULL;
	}
};



class MyLinkedList {
public:
	/** Initialize your data structure here.
		Because the initial Node is empty here
	 */
	Node* head = new Node(0);
	int size = 0;

	MyLinkedList() {

	}

	/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
	int get(int index) {
		// if the index values is large then the size
		// index is greater
		if (index >= size) return -1;

		Node *temp = head;
		for (int i = 0; i <= index; i++) {
			temp = temp->next;
		}

		return temp->val;

	}

	/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
	void addAtHead(int val) {
		Node* temp1 = head->next;
		head->next = new Node(val);
		head->next->next = temp1;
		size++;
	}

	/** Append a node of value val to the last element of the linked list. */
	void addAtTail(int val) {
		Node* temp = head;
		while (temp->next != NULL) temp = temp->next;

		temp->next = new Node(val);
		size++;
		return;

	}

	/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
	void addAtIndex(int index, int val) {
		if (index > size) {
			return;
		}

		Node* temp = head;
		for (int i = 0; i < index; i++) {
			temp = temp->next;
		}

		Node* temp1 = temp->next;
		temp->next = new Node(val);
		temp->next->next = temp1;
		size++;

		return;

	}

	/** Delete the index-th node in the linked list, if the index is valid. */
	void deleteAtIndex(int index) {
		if (index >= size) {
			return;
		}

		Node* temp = head;
		for (int i = 0; i < index; i++) {
			temp = temp->next;
		}

		// Manipulating the pointer at using the temp1 variables
		Node* temp1 = temp->next;
		temp->next = temp1->next;
		temp1->next = NULL; // important steps to make the reference as null
		size--; // decrement the size each times

		delete temp1;
		return;
	}
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */