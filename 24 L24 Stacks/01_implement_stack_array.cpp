/*
	
	Aditya Bhaiya recommediations 

 1. Neartest Greater to left 
 2. Nearest Greater to right 
 3. Nearest smaller to left 
 4. Nearest smaller to right 


 5. Stock Span Problems 
 6. Max Area of histograms 

 7. Rain Water Harvesting 
 8. Implementing stack using heap 
 9. The celebrity problems 
 12. Longest Valid Parenthesis 
 11. Maxium Area of rectangle in Maxtrix 
 13. Iteartively Implement TOH


*/



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


	# Basic of stack data structures: 
	- 
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