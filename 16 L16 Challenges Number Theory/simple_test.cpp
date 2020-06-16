#include<iostream>
using namespace std;
//#define ll long long 
// power calculated now
int  power(int a, int b,int c) {
	int result = 1;
	for (int i = 0; i < b; i++) {
		result = (result%c* a%c)%c;
	}
	return result;
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout <<  power(a, b,c);
	return 0;
}