/*
	Given : "two four eight zero" <--- 2048 Easy Problem and vice-versa

*/

#include<iostream>
#include<string>
using namespace std;
char spellings[][100] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void print(int n) {
	if(n==0) {
		return;
	}
	print(n/10); // it will be print automatically204
	cout << spellings[n%10] << " "; // print the spelling of n%10 Last digits  
}

int main() {
	int n;
	cin >> n;
	print(n);		
	return 0;
}