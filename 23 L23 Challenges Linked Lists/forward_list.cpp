// STL forward list
/*
	Foward list = Singly list in which every node is pointing to another node in foward directions 
    https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/		
*/ 

/*

	Important functions :

	1. push_front(), emplace_front()
	2. pop_front()
	3. insert_after() --> insert at any positions in the list
	4. erase_after() -->

	- Taking the user inputs in the forward list
*/
#include<iostream>
#include<forward_list>
#include<list>
using namespace std;

int main() {
		
	// Declare the list
	list <int> list1{};

	// Assign values in the list
	list1.push_front(10);
	list1.insert_after(11);
	//list1.pop_front();
	// Display the forward list
	for(auto a : list1) {
		cout << a << "-->";
	}
	cout << endl;
	// Declare another list
	forward_list <int> list2;

	//Assign the values
	list2.assign(5,10); // Repeated , values  ten times repeating values

	// Displays the list
	for(auto a : list2) {
		cout << a << "-->";
	}
	cout << endl;


	return 0;
}