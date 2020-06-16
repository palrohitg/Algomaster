// Forword STL singly linked list 
/*
	- push_back
	- push_front
	- pop_back 
	- pop_front
	- insert
	- erase(indx)
	- remove() --> remove all the occurence of the elements
 
*/

#include<iostream>
#include<list>
#include<string>
using namespace std;

int main() {
	
	//Init
	list<int> l{1,2,3,4,12};

	list<string> l2{"apple", "vikas", "machine learning"};
	l2.push_back("coder");

	//Sort 
	l2.sort();

	// Reverse
	l2.reverse();

	cout << l2.back() << endl;
	l2.pop_back();

    // Iterate using the iterator 
	for(auto it = l2.begin(); it!=l2.end(); it++) {
		cout << (*it) << "-->";
	}
	//Iterate over the list and print the elements
	for(auto s : l2) {
		cout << s << "-->";
	}

	// Direct access is not possible in list using it we can set the postion of the node
	return 0;
}