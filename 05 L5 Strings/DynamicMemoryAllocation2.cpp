// Two 2-D arrays dynamic allocation
// By combining the linears arrays in the points 
// a[i] = Compliers is break down the address and u will get base address and the ith index 
#include<iostream>
using namespace std;

int main() {

	int **ptr;
	int r , c ;
	cin >> r >> c;

	// Create the arrays of rows
	ptr  = new int *[r];

	// **ptr points to this heads arrays
	//ptr = arr;

	for (int i = 0; i < r; i++) {
		ptr[i] = new int[c]; // size of this equal to rows
	}

	// Now you can puts the value to the originals arrays
	int val = 1;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++) {
			ptr[i][j] = val;
			val = val + 1;
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}