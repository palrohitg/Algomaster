// Predict the outputs of the problems 
// All the local varible are destroys when the funciton call is overs
// You will get three things either garbage , segmentation fault or some varibles
#include<iostream>
using namespace std;



// Means returns the address of the function return call 
int* fun() {
	//Local vars destroys after the function calls overs 
	int a[] = {1, 2, 3, 4, 5};
	cout << a << endl;
	cout << a[0] << endl;

	return a;
}


int main() {
	int* b = fun();
	cout << b << endl;
	cout << b[0] << endl;
	return 0;
}