/*
	# Binary Search and Lower, Upper bound implementation in Memory
	lower_bound(s,e,key) -- > address of the first key
	upper_bound(s,e,key) --> address of elements greater than key

*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {10,20,40,40,40,40,50,60,70};
	int n = sizeof(arr)/sizeof(int);
	int key=40;
	bool present = binary_search(arr,arr+n,key);

	if(present) {
		cout << "present" << endl;
	}
	else {
		cout << "Absent" << endl;
	}
    // Application of lower_bound() and upper_bound() when trying to get the frequency of the numbers

    auto it = lower_bound(arr,arr+n,key);
    cout << (it-arr) << endl;  // minus the base address you will get the index
    
    auto uit = upper_bound(arr,arr+n,key);
    cout << (uit-arr) << endl;

    cout << "frequency of the numbers" <<(uit - it) << endl;
	return 0;
}