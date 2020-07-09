/*
  Constraints like this 1<=a,b,c<=10^5

  Suppose compute the pow(10^5,10^5) // it will be generate a long number not possible to store in Interger datatype 
*/


#include<iostream>
using namespace std;
#define ll long long 

ll  power(int a, int b) {
	int result = 1;
	// 2
	for (int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}


ll fastPower(int a, int b){
	ll ans=1;
	//int p=1;
	while(b>0) {
		int last_bit = (b & 1);
		if(last_bit == 1) {
			ans = ans*a;			 
		}
		//p=p*2;
		a=a*a;
		b = b >> 1;
	}
	return ans;
}
int main() {
	int a, b ;// c;
	cin >> a >> b;
	//cin >> a >> b >> c;
	//cout <<  power(a, b) % c;

	cout << power(a,b);
	return 0;
}