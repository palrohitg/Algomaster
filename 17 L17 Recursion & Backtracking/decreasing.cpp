#include<iostream>
using namespace std;

void increase(int n) {
	//Decrease karna de 
	if(n == 0) {
		// just return it means return nothing
		return;
	}
    increase(n-1);
	cout << n << " "; 
}

void decrease(int n) {
	if(n== 0) {
		return;
	}
	cout << n << " ";
	decrease(n-1);
}


int main() {
	int n=5;
	increase(n);
	cout << endl;
	decrease(n);
	return 0;
}