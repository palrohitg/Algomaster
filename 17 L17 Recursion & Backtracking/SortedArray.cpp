/*
 Making typing speed and accuracy fast to ACE the skype interview
 Check if the arrays is sorted or not 
Approach :
 1. if a[0] < a[1] && sorted(a+1,n-1) //reduce the size of the array
 2. Base case when we have only one elements then the arrays is always sorted
*/

#include<iostream>
using namespace std;

// Return true and False
bool isSorted(int a[], int n) {

	//Base case when we have only one element
	if(n==1) {
		return true;
	}
	if(a[0] < a[1] && isSorted(a+1,n-1)) {
		return true;
	}

	return false;
}

int main() {
    
    int a[] = {1,3,5,7,9};
    int n=5;
    // If return True than Sorted 
    if(isSorted(a,n)){
    	cout << "Sorted";
    }
    else {
    	cout << "not sorted";
    }
	return 0;
}



