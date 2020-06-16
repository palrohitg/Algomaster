/*
	- Stacks is linear Data structure stores the data in LIFO order
	- Implementation varies can be arrays , linked list, vectors
	- Vectors is prateek bhaiya favourites

	# Common Operation that can be perfomed on the stacks are :
	- inseration(), pop() , top()
	
	# Linked list opeartion which  for the stacks class. 
	 - Insert at the begin of the linked list O(1)
	 - Delete at the begin of the linked list O(1)
	 - Top view of the elemets also going to take the one O(1)

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

int main() {
	
	vector <int> v1;
	push(v1, 5);
	pop()
	return 0;
}