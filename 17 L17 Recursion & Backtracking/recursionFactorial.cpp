/// Short circuit means in the and statment if the first condition is false then the next statement is not going to happens
/// usually called the short circuits and statement not goes to the base case simply return the false values.



#include <iostream>
using namespace std;

void decreasePrint(int n ) {
	// Base case
	if (n == 0) {
		return;
	}
	cout << n << endl;
	decreasePrint(n - 1);
}

void increasePrint(int n) {
	// Base case
	if (n == 0) {
		return;
	}
	increasePrint(n - 1);
	cout << n << endl;
}

int main() {
	decreasePrint(5);
	cout << endl;
	increasePrint(5);
	cout << endl;
	return 0;
}


// Happy Coding :)