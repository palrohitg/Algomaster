/*
	List = STL list is nothing but similar to vectors that can store the node in the linked list.
	Iterator is the varibles which is used to iterates over the containers
	// Vectors will solved that issue

*/


#include<iostream>
#include<list>
using namespace std;


void print(list <int> l1, list <int> l2) {
  list <int>:: Iterator it = l1.begin();
  cout << *it;

}

int main() {
	

	int t; 
	cin >> t; 
	while (t--) {
		int n1, n2;
		list <int> l1;
		list <int> l2; 
 
		cin >> n1;
		// first list
		for(int i=0; i<n1; i++) {
			int data; 
			cin >> data; 
			l1.push_back(data);
		}
		// second list
		cin >> n2;
		for(int i=0; i<n2; i++) {
			int data; 
			cin >> data; 
			l2.push_back(data);
		}		

		// print the list
		print(l1,l2);
	}

	return 0;
}