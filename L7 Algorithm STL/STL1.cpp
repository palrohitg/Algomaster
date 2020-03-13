// Algorithm header file 
// find() --> Search for the particular elements

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[] = {10,23,23,34,1,4};
	int size = sizeof(arr)/sizeof(arr);

	int key;
	cin >> key;
	auto it = find(arr,arr+size,key);  // start from the o untill end like range() in python and return the index
     
    // when the arrays is sorted then binary_search()  return True and False

	int index = it - arr;
	cout << index << endl;
	if(index == size) {
		cout << key << "not present" << endl;
	}
	else {
		cout << key << "present";
	}
}