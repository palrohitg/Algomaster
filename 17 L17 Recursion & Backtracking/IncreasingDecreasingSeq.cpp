/*
 Given a n -- 1 to n
 Print in Increasing order and Decreasing order. 
 N = 1,2,3,4,5
 N = 5,4,3,2,1

*/


#include<iostream>

using namespace std;

void dec(int n) {
	//Base case
	if(n==0)
		return;
	//reursive case
	cout << n << endl;
	dec(n-1);
}

cout << endl;
// only the direction is going to change Towards the base case and then cout the value 
void inc(int n) {
	if(n==0) {
		return;
	}
	inc(n-1);
	cout << n << endl;
}
int main() {
	int n=5;
	dec(n);
	inc(n);
	return 0;
}