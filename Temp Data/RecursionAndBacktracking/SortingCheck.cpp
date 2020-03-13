// Sorting using the recursion problem

#include<iostream>
using namespace std;

bool sortedCheck(int a[],int n){
	// Base case 
	if(n==1) {
		return true;
	}
    
    // check the elements
    if(a[0] < a[1] && sortedCheck(a+1,n-1)) {
    	return true;
    }

    //Recursive case
    return false;
}
int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	cout << sortedCheck(arr,n);
	return 0;
}