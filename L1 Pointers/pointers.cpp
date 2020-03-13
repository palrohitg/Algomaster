// pointer implemenation 

#include <iostream>

using namespace std; 


int main() {

	int x = 10;
	int *ptr ;

    ptr = &x; 

	cout << x << '\n';
	cout << *ptr << '\n'; // deference operator


	return 0;
}