/*
	- Stacks is linear Data structure stores the data in LIFO order
	- Implementation varies can be arrays , linked list, vectors
	- Vectors is prateek bhaiya favourites
	- ATM machines, pilles of plates

	# Common Operation that can be perfomed on the stacks are :
	- inseration(), pop() , top()
	
	# Linked list opeartion which  for the stacks class. 
	 - Insert at the begin of the linked list O(1)
	 - Delete at the begin of the linked list O(1)
	 - Top view of the elemets also going to take the one O(1)
	 - Always insert the element at head and remove that elements


	// Stacks StL 
	1. push()
	2. pop()
	3. top()
	4. empty()
	

	// Methods to implement the stack stl;
	1. arrays 
	2. vectors  vectors 
	3. linked list 
	4. dynamics arrays 
*/

#include<iostream>
#include<vector>
using namespace std;



// Insert the element at top of the Stack 
void push(vector<int> &v1, int n) { // Pass by the reference 
	for(int i=0; i<n; i++) {
		int data;
		cin >> data;
		v1.push_back(data);
	}
}


void pop(vector<int> &v1) {
	v1.pop_back();
}

void top(vector<int> &v1) {

    cout << v1.back();
}

// Stl has implemented all this functions by own
class stack {

	private : 
		vector <int> v;

	public : 

		// pop, push, top and empty 
		void push(int data) {
			v.push_back(data);
		}

		bool empty() {
			return v.size() == 0;
		}
		void pop() {
			if(!v.empty()) {
				v.pop_back();
			}
		}

		int top() {
			return v[v.size() - 1];
		}
};



int main() {
	
	// vector <int> v1;
	// push(v1, 5);
	// pop(v1);

	// for(auto x : v1) {
	// 	cout << x;
	// }
	stack s;
	int n= 5;
	for(int i=0; i<n; i++) {
		s.push(i*i);
	}

	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}