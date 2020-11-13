// SET STL and MultiSET

/*

	two types --> unordered_set, order
	Red-black, trees etc.


	Set STL : It is container which stores the elements means all the elements are unique and order
	Usage ?
		- Remove duplicate elements in the arrays
		- permutation of the elements where repetition is not allowed.
		- Use the iterator to traversal and deleted any element in the container
	Pair of set :
		- Also pair of set and various operations are possible
		- Like lowerbound and uppper bound
		- Return the pair using the auto iterator
		- make_pair functions is used to make the pair of integer
		- find and erase functions is used to find the pair and erase any pair present in the container
		- it->first and it->second first, second pair is useful to print the first and second elements of the container
		or the name of the iterators

	Interally Set uses Redblack tree, BST .

	Properites :
	1. insert the element in the set
	2. can't update the element(removal + insertation )


	// pair is sorted always sorted


*/

#include<iostream>
#include<set>
using namespace std;
int main() {

	int arr[] = {10, 20, 11, 20, 20};
	int n = sizeof(arr) / sizeof(int);

	set<int> s;

	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}

	// remove the element in the set
	s.erase(10);
	auto it = s.find(11);
	s.erase(it);

	// print all the elements
	for (set<int>:: iterator it = s.begin(); it != s.end(); it++) {
		cout << *(it);
	}


	s.erase(s.find(make_pair(2, 3)));


	return 0;
}