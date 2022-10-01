#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[100];
	int key;
	int n;
	cin >> n;
	// input the elements in the arrays

	for(int  i=0; i<n; i++) {
		cin >> arr[i];
	}
	cout << "enter the element to search : "; 
	cin >> key;
	int i;
	// check from 0 to N-1 if the element is present or not if present break the further loops and  return the index
	for ( i = 0; i < n; ++i)
	{
		if(arr[i] == key) {
			cout << key << "present" << i << endl;
			// if find then break the loops don't further check need
			break;
		}
	}

	// if reaches to the n index means didn't find the elements the simply return nothing 
	if(i==n) {
		cout << "Not present";
	}
	return 0;
}