
class Node {
public:
	string key;
	int val;
	Node<int> *next;

	Node(string key, int val) {
		this->key = key;
		val = val;
		next = NULL;
	}

	// Recursive destructor calls
	~Node() {
		if (next != NULL) {
			delete next;
		}
	}
};


