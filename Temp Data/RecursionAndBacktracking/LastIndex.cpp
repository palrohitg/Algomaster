// Return the index of the number else return =1

#include <iostream>
using namespace std;

// Last Index Function 

//Iterative approach

/*int lastIndexIterative(int a[], int n, int key) {
	int ans = -1;
	for(int j=n-1; j>=0; j--) {
		if(a[j] == key) {
			ans = j;  // store the index
			break;
		}
	}
	return ans;
}*/

// Recursive Solution
int lastIndex(int a[],int n, int key) {
	
	//Base Case 
	if(n==1) {
		if(a[n-1] == key) {
			return n-1;
		}
		else {
			return -1;
		}
	}

	// Recursive case 
	if(a[n-1] != key){// Not element
		return lastIndex(a,n-1,key); // call to the smaller problem
	} 
	else {
		return n-1;
	}
}

int main() {
	int a[] = {86, -16, 77, 65, 45, 77, 28};
	int n = sizeof(a)/sizeof(int);
	int result = lastIndex(a,n,77);
	cout << result;
	return 0;

}