/*
	1. Decimal number to binary number
*/ 

#include <iostream>
using namespace std;

int decimalToBinary( int n) {
	int ans = 0;
	int p = 1;
	while(n > 0){
		int last_bit = (n&1);
		ans += p*last_bit; 
		p = p*10; // base to the 10 integer part
		n = (n >> 1);
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n ;
	cin >> n;
	cout << decimalToBinary(n);
	
	return 0;
}