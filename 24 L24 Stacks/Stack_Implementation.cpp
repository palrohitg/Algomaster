/*
	Operation : 
	 1. push() 
	 2. pop()
	 3. isEmpty()
	 4. Top()


*/

// Templates allows us to make the generics programs 

#include<iostream>
#include <vector>
using namespace std;

// Implementation of Stacks using the vectors 
template<typename T>
class Stack {
	private :
		vector <T> v;
	public : 

		void push(int data) {
			v.push_back(data);
		}

		bool isEmpty() { 
			return v.size() == 0;
		}

		void pop(){
			if(!isEmpty()) {
				v.pop_back();
			}
		}

		T top() {
			return v[v.size()-1];
		}
};


int main() {
	Stack<int> s;
	for (int i = 0; i < 5; ++i) {
			s.push(i*i);
	}	

	while(!s.isEmpty()) {
		cout << s.top() << " ";
		s.pop();
	}
	return 0;
}